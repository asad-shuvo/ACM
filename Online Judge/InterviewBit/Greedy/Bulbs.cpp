int Solution::bulbs(vector<int> &A) {
    int cnt=0,srch=0;
    for(int i=0;i<A.size();i++){
        if(A[i]==srch){
            cnt++;
            if(srch==1)srch=0;
            else srch=1;
        //   srch==1?srch=0:1;
        }
    }
    return cnt;
}

