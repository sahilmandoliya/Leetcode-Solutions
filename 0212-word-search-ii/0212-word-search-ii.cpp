class TrieNode{
public:
    vector<TrieNode*> children;
    string end;
    TrieNode(){
        end="";
        children.resize(26, NULL);
    }
    void buildTrie(TrieNode *root, string word){
        int len=word.length();
        for(int i=0;i<len;i++){
            char ch=word[i];
            if(!root->children[ch-'a']){
                root->children[ch-'a']=new TrieNode();
            }
            root=root->children[ch-'a'];
        }
        root->end=word;
    }
};

class Solution {
public:
    TrieNode *root=new TrieNode();
    int row, col;
    void dfs(vector<vector<char>> &board, int i, int j, TrieNode * root, vector<string> &ans){
        if(board[i][j]=='*') return ;
        char ch=board[i][j];
        if(root->children[ch-'a']==NULL) return;
        root=root->children[ch-'a'];
        board[i][j]='*';
        if(root->end!=""){
            ans.push_back(root->end);
            root->end="";
        }
        if(i-1>=0) dfs(board, i-1, j, root, ans);
        if(i+1<row) dfs(board, i+1, j, root, ans);
        if(j-1>=0) dfs(board, i, j-1, root, ans);
        if(j+1<col) dfs(board, i, j+1, root, ans);
        
        board[i][j]=ch;
    }
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        vector<string> ans;
        int len=words.size();
        for(int i=0;i<len;i++){
            TrieNode* node =root;
            root->buildTrie(node, words[i]);
        }
        row=board.size(), col=board[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                TrieNode* node=root;
                dfs(board, i, j, node, ans);
            }
        }
        return ans;
        
    }
};