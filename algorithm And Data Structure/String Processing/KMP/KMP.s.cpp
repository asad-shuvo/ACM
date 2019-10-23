#include <bits/stdc++.h>
using namespace std;
#define Max 1000005
char Txt[Max],Ptrn[Max];
vector<int>match_pattern;
vector<int> compute_prefix(const char *p){
    int m=strlen(p+1);
    vector<int>prefix(m+1);
    prefix[1]=0;
    int k=0;
    for(int i=2;i<=m;i++){
        while(k>0 and p[k+1]!=p[i]) k=prefix[k];
        if(p[k+1]==p[i]) k=k+1;
        prefix[i]=k;
    }
    return prefix;
}

vector<int> kmp_match(const char *txt,const char *ptrn ){
    int n=strlen(txt+1);
    int m=strlen(ptrn+1);
    vector<int> prefix=compute_prefix(ptrn);
    vector<int>match_position;
    int q=0;
    for(int i=1;i<=n;i++){
        while(q>0 and ptrn[q+1]!=txt[i]) q=prefix[q];
        if(ptrn[q+1]==txt[i]) q=q+1;
        if(q==m){
            match_position.push_back(i-m);
            q=prefix[q];
        }
    }
    return match_position;
}
int main()
{
    int test,m=0;
    scanf("%d",&test);
    while(test--){
    scanf("%s%s",Txt+1,Ptrn+1);
    vector<int>match_position=kmp_match(Txt,Ptrn);
    /*
    for(int i=0;i<match_position.size();i++){
        if(!i) printf("%d",match_position[i]);
        else printf("%d",match_position[i]);
    }*/
    int s=match_position.size();
    printf("Case %d: %d\n",++m,s);
    }
    //cout<<match_position.size()<<endl;
}
