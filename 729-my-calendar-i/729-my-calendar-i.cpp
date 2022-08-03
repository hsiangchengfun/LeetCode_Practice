class MyCalendar {
public:
    
    map<int,int> mp;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        auto itr = mp.upper_bound(start);
        if(itr != mp.end() && itr->second < end )return false;
        
        mp.insert(make_pair(end,start));
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */