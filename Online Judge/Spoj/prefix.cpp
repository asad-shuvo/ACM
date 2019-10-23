#include <bits/stdc++.h>

using namespace std;

#define MAX_L 1000005
char P[MAX_L];
int f[MAX_L];

void prefixFunction(){
    int n = strlen(P), k = 0;
    f[0] = 0;

    for(int i=1;i<n;++i){
        while(k>0 && P[k]!=P[i]) k = f[k-1];
        if(P[k]==P[i]) ++k;
        f[i] = k;
   // printf("%d\n",f[i]);
    }
}

int main(){
    while(true){
        scanf("%s",P);
        if(P[0]=='*') break;
prefixFunction();
for(int i=0;i<strlen(P);i++)
    cout<<f[i]<<" ";

    }

    return 0;
}
