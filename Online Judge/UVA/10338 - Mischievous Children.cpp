#include <bits/stdc++.h>
using namespace std;
unsigned long long fact(unsigned long long a){
        unsigned long long i,j,k=1;
        for(i=1;i<=a;i++){
            k=i*k;
        }
        return k;
}
int main()
{
    //freopen("input.txt","rt",stdin);
   //freopen("output.txt","w",stdout);
    unsigned long long i,j,a,b,t=0,c,d,arr[100000],k,n,ln,sum,test;

    char str[100];
    scanf("%llu",&test);
    getchar();
    while(test--){
            t++;
    gets(str);
    int ar[100]={0};
    k=0;
    ln=strlen(str);
    for(i=0;i<ln;i++){
        if(str[i]>='A' && str[i]<='Z'){
            ar[str[i]-'A']++;
        }
    }
    for(i=0;i<26;i++){
        if(ar[i]>1){
            arr[k++]=ar[i];
        }
    }
    a=fact(ln);
    sum=1;
    for(i=0;i<k;i++){
        d=arr[i];
        b=fact(d);
        sum=sum*b;
    }
    printf("Data set %llu: %llu\n",t,a/sum);
    }
    return 0;

}
