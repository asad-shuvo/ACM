int Solution::majorityElement(const vector<int> &A) {
    int sz=A.size()/2;
    //cout<<sz<<endl;
    vector<int>B;
    B=A;
    sort(B.begin(),B.end());
    int cnt=0,mz;
    for(int i=0;i<B.size();i++){
        int t=B[i];
     //   cout<<t<<endl;
        while(B[i]==t){
            i++;
            cnt++;
            if(i==B.size())break;
        }
        if(cnt>sz)mz=t;
        if(i==B.size())break;
        i--;
        cnt=0;
    }
    return mz;
}

