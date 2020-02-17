class TopVotedCandidate {
public:
    vector<int>r,tm;
    TopVotedCandidate(vector<int>& persons, vector<int>& times) {
        map<int,int>mp;
        int M=0;
        for(int i=0;i<persons.size();i++){
            mp[persons[i]]++;
            if(mp[persons[i]]>=M){
                M=mp[persons[i]];
                r.push_back(persons[i]);
            }
            else r.push_back(r[i-1]);
        }
        // for(int i=0;i<r.size();i++)cout<<r[i]<<" ";
        // cout<<endl;
        for(int i=0;i<times.size();i++)tm.push_back(times[i]);
    }
    
    int q(int t) {
        int b=0,e=tm.size()-1;
        int plc,f=0;
        while(b<e){
            int mid=(b)+(e-b)/2;
            if(tm[mid]==t){
                plc=mid;
                f=1;
                break;
            }
            else if(tm[mid]>t){
                e=mid-1;
            }
            else b=mid+1;
        }
        if(f==0){
           plc=b;
            if(tm[plc]>t)plc--;
        }
        cout<<t<< " "<<plc<<endl;
        return r[plc];
        
        // return 0;
    }
};

/**
 * Your TopVotedCandidate object will be instantiated and called as such:
 * TopVotedCandidate* obj = new TopVotedCandidate(persons, times);
 * int param_1 = obj->q(t);
 */
