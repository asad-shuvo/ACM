/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<int>v;
        vector<vector<int>>r;
        if(root==NULL)return r;
        map<Node*,int>mp;
        mp[root]=0;
        queue<Node*>q;
        v.push_back(root->val);
        int m=0;
        q.push(root);
        while(!q.empty()){
            Node* hld=q.front();
            q.pop();
            for(auto ch:hld->children){
                if(ch!=NULL){
                    q.push(ch);
                    mp[ch]=mp[hld]+1;
                    if(mp[ch]>m){
                        m=mp[ch];
                        r.push_back(v);
                        v.clear();
                    }
                    v.push_back(ch->val);
                }
            }
            
        }
        r.push_back(v);
        return r;
    }
};
