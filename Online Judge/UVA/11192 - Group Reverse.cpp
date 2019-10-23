#include <bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","rt",stdin);
    char str[1000];
    int i,j,k,l,m,n;
    while(scanf("%d",&n)!=EOF && n>0){
    scanf("%s",str);
    int ln=strlen(str);
    int d=ln/n;
    k=0;
 int p=0;
    for(i=0;i<ln;i++){
            k++;
        if(k%d==0){
            for(j=k-1;j>=p;j--){
                printf("%c",str[j]);
            }
            p=k;
        }
    }
    printf("\n");
    }
    return 0;
}
