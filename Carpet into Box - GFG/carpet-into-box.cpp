//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int carpetBox(int A, int B, int C, int D){
        priority_queue<int>car;
        priority_queue<int>box;
        car.push(A);
        car.push(B);int c=0;
        box.push(C);box.push(D);
        while(car.top()>box.top()){
            int z=car.top();car.pop();z=z/2;car.push(z);
            c++;
        }
        car.pop();box.pop();
        while(car.top()>box.top()){
            int z=car.top();car.pop();car.push(z/2);
            c++;
        }
        return c;
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        
        Solution ob;

        int ans = ob.carpetBox(A,B,C,D);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends