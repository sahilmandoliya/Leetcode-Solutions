class MyCalendarThree {
public:
    map<int, int> mp;
    MyCalendarThree() {
        
    }
    int book(int start, int end) {
        mp[start]++;
        mp[end]--;
        int curr=0, mx=0;
        for(auto a: mp){
            curr+=a.second;
            mx=max(mx, curr);
        }
        return mx;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */