int Solution::candy(vector<int> &A) {
    int cnt=0;
    vector<int>strt(A.size(),1),rev(A.size(),1);
    for(int i=1;i<A.size();i++){
       
          if(A[i-1]<A[i]){
              strt[i]=strt[i-1]+1;
          }
          
    }
    for(int i=A.size()-2;i>=0;i--){
         if(A[i+1]<A[i]){
             rev[i]=rev[i+1]+1;
         }
    }
    for(int i=0;i<A.size();i++){
        cnt+=max(rev[i],strt[i]);
    }
    return cnt;
}

