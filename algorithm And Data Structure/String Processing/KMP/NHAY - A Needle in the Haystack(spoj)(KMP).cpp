#include <bits/stdc++.h>
using namespace std;
#define Max 10000005
char Txt[Max],Ptrn[Max];
vector<int>Match_position;

vector<int>compute_prefix(const char *p)
{
    int k=0;
    int m=strlen(p+1);
    vector<int>prefix(m+1);
    prefix[1]=0;
    for(int i=2;i<=m;i++){
        while(k>0 and p[k+1]!=p[i]) k=preix[k];
        if(p[k+1]==p[i])
            k++;
        prefix[i]=k;
    }
    return prefix;
}
vector<int>Match_kmp(const char *txt, const char *ptrn){
    vector<int>Match_position;
    int n=strlen(txt+1);
    int m=strlen(ptrn+1);
    vector<int>prefix=compute_prefix(ptrn);
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
    int sz;

    while(scanf("%d",&sz)!=EOF){
    scanf("%s%s",Ptrn+1,Txt+1);
    vector<int>Match_position=Match_kmp(Txt,Ptrn);
    if(Match_position.size()==0)
        printf("\n");

    for(int i=0;i<Match_position.size();i++)
        printf("%d\n",Match_position[i]);
    }
}
