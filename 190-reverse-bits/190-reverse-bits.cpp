class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int k=32;
        unsigned int res=0;
        while(k--){
            if(n&1){
                res=res+pow(2, k);
            }
            n=n>>1;
        }
        return res;
    }
};