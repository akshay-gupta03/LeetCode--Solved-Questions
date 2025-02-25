class Solution {
public:
    bool isPathCrossing(string path) {
    set<pair<int,int>> movement;
    pair<int,int> current;
    movement.insert(current);
    current.first=0;
    current.second=0;
    for(auto route:path){
        if(route=='E'){
            current.second++;
        }
        else if(route=='W'){
            current.second--;
        }
        else if(route=='N'){
            current.first++;
        }
        else {
            current.first--;
        }
        if(movement.find(current)!=movement.end()){
            return true;
        }
        movement.insert(current);
    }
    return false;    
    }
};