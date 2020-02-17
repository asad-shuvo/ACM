class Solution {
public:
    string tmp;
    int mx;
    vector<string >ans;
    bool chk(int n,int pos){
        return (bool)(n&(1<<pos));
    }
    int Set(int n,int pos){
        return n=n|(1<<pos);
    }
    void G(string cs,int mask){
       
        if(mask==((1<<mx)-1)) return;
       
        if(cs.size()>mx)return;
   
        for(int j=0;j<tmp.size();j++){
            int t=mask;
          
            if((chk(mask,j)==0)){
                ans.push_back(cs+tmp[j]);G(cs+tmp[j],Set(mask,j));}
            mask=t;
        }
    }
    int numTilePossibilities(string tiles) {
        tmp=tiles;
        mx=tiles.size();
       
     
       
        int mask=0;
        for(int i=0;i<tiles.size();i++){
        // cout<<mask<<endl;
             string cs="";
            cs+=tiles[i];
          //  cout<<cs<<endl;
            int t=mask;
            ans.push_back(cs);
            G(cs,Set(mask,i));
          //  cout<<mask<<endl;
            mask=t;
        }
        map<string,int>mp;
        int cnt=0;
        for(int i=0;i<ans.size();i++){
           if(mp[ans[i]]==0){
               mp[ans[i]]=1;cnt++;}
        }
        return cnt;
    }
};
