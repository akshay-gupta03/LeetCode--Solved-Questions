class Solution {
public:
    string removeOccurrences(string s, string part) {
    int n=part.size();
    for(auto i=s.find(part); i!= string::npos;i=s.find(part)){
        s.erase(i,n);
    }
    return s;    
    }
};