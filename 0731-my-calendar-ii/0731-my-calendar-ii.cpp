class MyCalendarTwo {
public:
vector<pair<int, int>> track;
    vector<pair<int, int>> doubleBook;

    MyCalendarTwo() {
        
    }
    
    bool book(int startTime, int endTime) {
    for (auto data: doubleBook) {
        if (max(startTime, data.first)< min(endTime, data.second)) {
            return false;
        }
    }
    for(auto data : track){
        if(max(startTime, data.first) < min(endTime, data.second)){
            doubleBook.push_back({max(startTime, data.first), min(endTime, data.second)});
        }
    }
    track.push_back({startTime, endTime});
    return true;    
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(startTime,endTime);
 */