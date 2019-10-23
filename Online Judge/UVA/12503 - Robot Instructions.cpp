#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[205],s[205];
    int i,j,k,l,m,n,arr[1000],a[1000],sum,test;
    scanf("%d",&test);
    while(test--){
            k=0;
    sum=0;
    scanf("%d",&n);
    //getchar();
    for(i=0;i<n;i++){
        //gets(str);
        scanf("%s",str);
        if(strcmp(str,"LEFT")==0){
           sum=sum-1;
            arr[k++]=-1;
        }
        else if(strcmp(str,"RIGHT")==0){
          sum=sum+1;
            arr[k++]=1;
        }
        else if(strcmp(str,"SAME")==0){
           scanf("%s",s);
           scanf("%d",&m);
           arr[k++]=arr[m-1];
           sum+=arr[m-1];
        }
    }
    printf("%d\n",sum);
    }
    return 0;
}
