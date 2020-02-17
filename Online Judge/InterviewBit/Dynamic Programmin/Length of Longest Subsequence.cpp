int Solution::longestSubsequenceLength(const vector<int> &A) {
    int LtR[A.size()+5];
    int RtL[A.size()+5];
    for(int i=0;i<A.size();i++){
        LtR[i]=1;
        RtL[i]=1;
    }
    for(int i=0;i<A.size();i++){
        for(int j=0;j<i;j++){
            if(A[j]<A[i]){
                LtR[i]=max(LtR[i],LtR[j]+1);
            }
        }
    }
     for(int i=A.size()-1;i>=0;i--){
        for(int j=A.size()-1;j>i;j--){
            if(A[j]<A[i]){
                RtL[i]=max(RtL[i],RtL[j]+1);
            }
        }
    }
    int mx=0;
    for(int i=0;i<A.size();i++){
        mx=max(mx,RtL[i]+LtR[i]-1);
    }
    return mx;
}

