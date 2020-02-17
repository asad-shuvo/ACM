class Solution {
public:
    struct st{
      int val;
        char c;
    };
    bool cmp(st a,st b){
        return a.val<b.val;    }
    string frequencySort(string s) {
        vector<st>v;
        int cnt=0;
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]>0){
                st tmp;
                tmp.val=mp[s[i]];
                tmp.c=s[i];
                mp[s[i]]=0;
                v.push_back(tmp);
            }
        }
        // sort(v.begin(),v.end(),cmp
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v.size();j++){
                if(v[i].val>v[j].val){
                    swap(v[i].val,v[j].val);
                    swap(v[i].c,v[j].c);
                }
            }
        }
        string res="";
        for(int i=0;i<v.size();i++){
        	char c=v[i].c;
        	for(int j=0;j<v[i].val;j++){
        		res+=c;
			}
		}
		return res;
    }
};
