int Solution::maxp3(vector<int> &A) {
    sort(A.begin(),A.end());
    int s=A.size()-1;
    if(s==0)return A[s];
    if(s==1)return A[s]*A[s-1];
    int z=A[0]*A[1]*A[s];
    int z1=A[s]*A[s-1]*A[s-2];
    return max(z,z1);
}

