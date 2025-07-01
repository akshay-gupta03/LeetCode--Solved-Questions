class MyCalendar {
    map<int, int> cal;
public:
    MyCalendar() {
        
    }
    
    bool book(int startTime, int endTime) {
    map<int,int>::iterator itr = cal.upper_bound(startTime);
        if(itr== cal.end() || endTime<= itr->second) {
            cal[endTime]=startTime;
            return true;
        } 
        else {                        
            return false;
        }    
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */