class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int fuel=0, start_i=0,sum=0;
        for(int i=0;i<n;i++){
            sum+=gas[i]-cost[i];
            fuel+=gas[i]-cost[i];
            if(fuel<0){
                fuel=0;
                start_i=i+1;
            }
        }
        if(sum>=0){
            return start_i%(gas.size());
        }
        return -1;
    }
};