class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int maxtillnow=arr[n-1];
        for(int i=n-2;i>=0;i--){
            int temp=arr[i];
            arr[i]=maxtillnow;
            maxtillnow=max(maxtillnow, temp);
        }
        arr[n-1]=-1;
        return arr;
    }
};