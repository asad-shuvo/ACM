int Solution::majorityElement(const vector<int> &A) {
    int elem=0,cnt=1;
    for(int i=1;i<A.size();i++){
        if(A[i]==A[elem])cnt++;
        else cnt--;
        if(cnt==0)elem=i,cnt=1;
    }
    return A[elem];
}

