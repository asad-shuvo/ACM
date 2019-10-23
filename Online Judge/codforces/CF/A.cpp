#include <bits/stdc++.h>
using namespace std;
struct nam{
char name[105];
int before[1000];
int after[1000];
};
int main()
{
    //freopen("input.txt","rt",stdin);
    nam a;
    int n,i,j,k,l,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s%d%d",a.name,&a.before[i],&a.after[i]);
    }
    for(i=0;i<n;i++){
        if(a.before[i]>=2400 && (a.after[i]>a.before[i])){
           f=1;
        }

    }
    if(f==1){
        printf("YES\n");
    }
    else printf("NO\n");

}
