int Solution::numDecodings(string A) {
    
    vector<int>tmp(A.size()+1);
    if(A.size()==0)return 0;
    if( A[0]=='0')return 0;
    if(A.size()==1)return 1;
    tmp[0]=1;
    tmp[1]=1;
    for(int i=2;i<tmp.size();i++){
       if(A[i-1]!='0')tmp[i]=tmp[i-1];
       else{
           if(A[i]=='0')return 0;
       }
       if((A[i-1]<='6' and A[i-2]=='2')or(A[i-2]=='1')){
           tmp[i]=tmp[i]+tmp[i-2];
       }
    }
    return tmp[tmp.size()-1];
    
}

