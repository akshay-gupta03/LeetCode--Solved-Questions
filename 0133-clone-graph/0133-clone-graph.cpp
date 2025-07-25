/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public: 
    Node* clone(Node* node, unordered_map<Node*,Node*> &map){
        Node* newNode=new Node(node->val);
        map[node]=newNode;
        for(auto i: node->neighbors){
            if(map.find(i)==map.end()){
                newNode->neighbors.push_back(clone(i,map));
            }
            else{
                newNode->neighbors.push_back(map[i]);
            }
        }
        return newNode;
    }

    Node* cloneGraph(Node* node) {
        if(node==nullptr){
            return nullptr;
        }
        unordered_map<Node*,Node*> map;
        return clone(node,map);
    }
};