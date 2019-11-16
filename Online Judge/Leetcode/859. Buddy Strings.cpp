class Solution {
public:
    bool buddyStrings(string A, string B) {
        int arr1[26]={0};
        int arr2[26]={0};
        for(int i=0;i<A.size();i++)arr1[A[i]-'a']++;
        for(int i=0;i<B.size();i++)arr2[B[i]-'a']++;
        if(A.size()!=B.size())return false;
        int f=0,k=0;
        for(int i=0;i<26;i++){
            if(arr1[i]>=2)k=1;
            if(arr1[i]!=arr2[i])f=1;
        }
        if(f==1)return false;
        int f1=0;
        int cnt=0;
        for(int i=0;i<A.size();i++){
            if(A[i]!=B[i])cnt++;
            
        }
        if(cnt>2)return false;
        if(cnt==2)return true;
        if(cnt<2){
            if(k==1)return true;
            else return false;
        }
        return true;
    }
};
