class Trie {
public:
    struct trieMaking{
        bool ending;
        trieMaking* alphabets[26];
    };

    trieMaking* theNode(){
        trieMaking* firstNode=new trieMaking();
        firstNode->ending=false;
        for(int i=0;i<26;i++){
           firstNode->alphabets[i]=nullptr;
        }
        return firstNode;
    }

    trieMaking* root;

    Trie() {
        root=theNode();
    }
    
    void insert(string word) {
        trieMaking* pointer=root;
        for(int i=0;i<word.length();i++){
            char letter=word[i];
            int index=letter-'a';

            if(pointer->alphabets[index]==nullptr){
                pointer->alphabets[index]=theNode(); 
            }

            pointer=pointer->alphabets[index];
        }
        pointer->ending=true;
    }
    
    bool search(string word) {
        trieMaking* pointer=root;
        for(int i=0;i<word.length();i++){
            char letter=word[i];
            int index=letter-'a';

            if(pointer->alphabets[index]==nullptr){
                return false; 
            }

            pointer=pointer->alphabets[index];
        }
        if(pointer!=nullptr && pointer->ending==true){
            return true;
        }
        return false;
    }
    
    bool startsWith(string prefix) {
        trieMaking* pointer=root;
        // int i=0;
        for(int i=0;i<prefix.length();i++){
            char letter=prefix[i];
            int index=letter-'a';

            if(pointer->alphabets[index]==nullptr){
                return false; 
            }

            pointer=pointer->alphabets[index];
        }
        // if(i==prefix.length()){
        //     return true;
        // }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */