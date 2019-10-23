#include <bits/stdc++.h>
using namespace std;
int prime(int a){
    int p,q,i,sq;
    sq=sqrt(a);
    if(a==1)
        return 0;
    else if(a==2)
        return 1;
    else if(a%2==0)
        return 0;
    else{
    for(i=3;i<=sq;i=i+2){
      if(a%i==0)
            return 0;
    }
}
return 1;
}
int main()
{
    string a;
        //freopen("input.txt","rt",stdin);
    int i,j,l,m,n,test,t=0,f;
    cin>>test;
    getchar();
    while(test--){
            t++;
    f=0;
    int arr[100]={0};
    int a3[100];
    int arr1[100]={0};
    int a1[100];
    int arr2[100]={0};
    int a2[100];
    int b[100],b1[100],b2[100];
    int pr[100],p=0;
    getline(cin,a);
     printf("Case %d: ",t);
    for(i=0;i<a.size();i++){
        if(a[i]>='0'&& a[i]<='9'){
            arr[a[i]-'0']++;
        }
        else if(a[i]>='A' && a[i]<='Z'){
            arr1[a[i]-'A']++;
        }
         else if(a[i]>='a' && a[i]<='z'){
            arr2[a[i]-'a']++;
        }
    }
    int k=0,k1=0,k2=0;
    int c=0,c1=0,c2=0;
    for(i=0;i<=9;i++){
        if(arr[i]>1){
            a3[k++]=arr[i];
            b[c++]=i;
        }
    }
    for(i=0;i<k;i++){
            if(prime(a3[i])==1){
                cout<<b[i];
                f++;
                //pr[p++]=a3[i];
            }
         //   printf("%d %d\n",a3[i],b[i]);
        //cout<<a3[i]<<endl;
    }
    for(i=0;i<26;i++){
        if(arr1[i]>1){
            a1[k1++]=arr1[i];
            b1[c1++]=i;
        }
    }
    for(i=0;i<k1;i++){
        if(prime(a1[i])==1){
                f++;
            printf("%c",b1[i]+65);
        }
    }
    for(i=0;i<26;i++){
        if(arr2[i]>1){
            a2[k2++]=arr2[i];
            b2[c2++]=i;
        }
    }
    for(i=0;i<k2;i++){
        if(prime(a2[i])==1){
                f++;
            printf("%c",b2[i]+97);
        }
    }
    if(f==0)
        printf("empty");
    printf("\n");
    }
    return 0;
}
