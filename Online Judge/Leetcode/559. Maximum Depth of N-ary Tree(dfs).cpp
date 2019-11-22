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
    int maxDepth(Node* root) {
      //  cout<<root->children.size()<<endl;
        if(root==NULL)return 0;
        map<Node*,int>mp;
        int d=1;
        mp[root]=1;
        d=max(d,mp[root]);
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
        	root=q.top();
        	q.pop();
        	for(auto ch:root->children){
        		if(ch!=NULL){
        			q.push(ch);
        			mp[ch]=mp[root]+1;
        			d=max(d,mp[ch]);
				}
        }
		}
        
        return d;
    }
};
