class Solution {
public:
    struct node{
        int i,w;
        node(int _i,int _w){
            i=_i;
            w=_w;
        }
        bool operator<(const node& p) const{
            if(w==p.w)return i<p.i;
            else
            return w<p.w;
        }
    };
    int cntBit(int n){
        int cnt=0;
        while(n!=0){
            int t=n&1;
            cnt+=t;
            n>>=1;
        }
        return cnt;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<node>v;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            int w=cntBit(arr[i]);
            v.push_back(node(arr[i],w));
        }
        sort(v.begin(),v.end());
        vector<int>ret;
        for(int i=0;i<v.size();i++){
            ret.push_back(v[i].i);
        }
        return ret;
    }
};
