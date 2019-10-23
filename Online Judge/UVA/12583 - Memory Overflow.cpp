#include<bits/stdc++.h>
using namespace std;
int main()
{
   freopen("input.txt","rt",stdin);
    char str[1000];
    int n,m,i,j,ln,k,l,sum,arr[10000],test,p=0;
    scanf("%d",&test);
    while(test--){
            sum=0;
            k=0;
            p++;
    scanf("%d%d",&n,&m);
    scanf("%s",str);
    ln=strlen(str);
    for(i=0;i<ln;i++){
        arr[k++]=str[i]-'A';
    }
    for(i=m;i<ln;i=i+m){
        for(j=i-m;j<i;j++){
            if(arr[i]==arr[j]){
                sum++;
                break;
            }
        }
    }
    printf("Case %d: %d\n",p,sum);
    }
    return 0;
}
