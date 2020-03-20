/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<int>ret;
    void fun(Node* root){
        if(!root)return;
        vector<Node*>children;
        children=root->children;
        for(int i=0;i<children.size();i++){
            Node* tmp=children[i];
            if(tmp!=NULL){
                fun(tmp);
                ret.push_back(tmp->val);
            }
        }
        
    }
    vector<int> postorder(Node* root) {
        if(!root)return ret;
        fun(root);
        ret.push_back(root->val);
        return ret;
    }
};
