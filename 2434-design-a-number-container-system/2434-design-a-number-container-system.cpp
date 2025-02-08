class NumberContainers {
public:
    unordered_map<int,int> map1;
    unordered_map<int,set<int>> map2;
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
    if(map1.find(index)==map1.end()){
        map1[index]=number;
    }
    else {
        int num=map1[index];
        map2[num].erase(index);
        if (map2[num].empty()){
            map2.erase(num);
        }
    }
    map2[number].insert(index);
    map1[index]=number;
    }    

    
    int find(int number) {
    if(map2.find(number)!=map2.end() && map2[number].empty()==false){
        return *map2[number].begin();
    }
    else{
        return -1;    
    }
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */