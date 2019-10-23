#include <bits/stdc++.h>
using namespace std;
#define Max 1000005
char Txt[Max],Ptrn[Max];
vector<int> Match_position;

vector<int>compute_prefix(const char *p)
{
    int m=strlen(p+1);
        vector<int>prefix(m+1);
    int k=0;
    prefix[1]=0;
    for(int i=2;i<=m;i++){
        while(k>0 and p[k+1]!=p[i]) k=prefix[k];
        if(p[k+1]==p[i]) k=k+1;
        prefix[i]=k;
    }
    return prefix;
}

vector<int> kmp_match(const char *txt, const char *ptrn)
{
    int n=strlen(txt+1);
    int m=strlen(ptrn+1);

    vector<int>prefix=compute_prefix(ptrn);
    vector<int>Match_position;
    int q=0;
    for(int i=1;i<=n;i++){
        while(q>0 and ptrn[q+1]!=txt[i]) q=prefix[q];
        if(ptrn[q+1]==txt[i]) q=q+1;
        if(q==m){
            Match_position.push_back(i-m);
            q=prefix[q];
        }
    }
    return Match_position;
}
int main()
{
    int test;
    scanf("%d",&test);
    while(test--){
    scanf("%s%s",Txt+1,Ptrn+1);
    vector<int>Match_position=kmp_match(Txt,Ptrn);

    int sz=Match_position.size();
    if(sz!=0){
    printf("%d\n",sz);
    for(int i=0;i<Match_position.size();i++){
if(i==sz-1)
    cout<<Match_position[i]+1;
else
    cout<<Match_position[i]+1<<" ";
    }
    printf("\n");
    }
    else
        printf("Not Found\n");
}
}
