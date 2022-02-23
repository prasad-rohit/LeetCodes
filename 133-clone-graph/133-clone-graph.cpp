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
    unordered_map<Node*,Node*> copy;
    Node* cloneGraph(Node* node) {
        if(!node){
            return {};
        }
        
        if(copy.find(node) == copy.end()){
            copy[node] = new Node(node->val,{});
            for(Node* neigh : node->neighbors){
                copy[node]->neighbors.push_back(cloneGraph(neigh));
            }
        }
        
        return copy[node];
    }
};