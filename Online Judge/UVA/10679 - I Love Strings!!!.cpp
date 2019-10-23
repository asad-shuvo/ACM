#include<bits/stdc++.h>
using namespace std;
char TXT[10000000],ptr[10000000];
vector<int> Match_position;
vector<int> compute_prefix(const char *p)
{
    int m=strlen(p+1);
    vector<int> prefix(m+1);
    prefix[1]=0;
    int k=0;
    for(int i=2; i<=m; i++)
    {
        while(k>0 and p[k+1]!=p[i])k=prefix[k];
        if(p[k+1]==p[i])k=k+1;
        prefix[i]=k;
    }
    return prefix;
}
vector<int> KMP_match(const char *txt,const char *ptrn)
{
    int n=strlen(txt+1);
    int m=strlen(ptrn+1);
    vector<int> prefix=compute_prefix(ptrn);
    vector<int>Match_position;
    int q=0;
   for(int i=1;i<=n;i++){
    while(q>0 and ptrn[q+1]!=txt[i]) q=prefix[q];
    if(ptrn[q+1]==txt[i]) q++;
    if(q==m){
        Match_position.push_back(i-m);
        q=prefix[q];
    }
   }
   return Match_position;
}
int main()
{
    int test,q;
    //scanf("%d",&test);
    //while(test--){
    scanf("%s",TXT+1);
    //scanf("%d",&q);
    vector<char>ptr;
    ptr.p_b()
    while(q--){
            scanf("%s",ptr+1);
    vector<int> Match_position=KMP_match(TXT,ptr);
    if(Match_position.size()!=0)
        printf("y\n");
    else
        printf("n\n");
    }
}
}
