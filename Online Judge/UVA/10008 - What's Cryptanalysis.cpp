#include <bits/stdc++.h>
using namespace std;
int main()
{
   //freopen("input.txt","rt",stdin);
  // freopen("output.txt","w",stdout);
    string a,b;
    int k,l,d,e,f,i,j,test,temp,t,te,tee;
    int c[100]={0};
    int arr[10000],ar[10000];
    k=0;
    l=0;
    cin>>test;
    getchar();
    for(j=1;j<=test;j++){
        getline(cin,a);
        for(i=0;i<a.size();i++){
            if(a[i]>='a' && a[i]<='z'){
                c[a[i]-'a']++;
            }
              if(a[i]>='A' && a[i]<='Z'){
                c[a[i]-'A']++;
            }
        }
    }
   // for(i=0;i<26;i++)
    //printf("%c %d\n",i+65,c[i]);

    for(i=0;i<26;i++){
            if(c[i]>0){
                arr[k++]=c[i];
                ar[l++]=i;
            }
        //printf("%c %d",i+65,c[i]);
    }
    for(i=0;i<k-1;i++){
        for(j=i+1;j<k;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                 t=ar[i];
                arr[i]=arr[j];
                ar[i]=ar[j];
                arr[j]=temp;
               // t=ar[i];
               // ar[i]=ar[j];
                ar[j]=t;
            }
        }
    }
    for(i=0;i<k;i++){
            for(j=i+1;j<k;j++){
                    if(arr[i]==arr[j]){
        if(ar[i]>ar[j]){
            te=ar[i];
            ar[i]=ar[j];
            ar[j]=te;
            tee=arr[i];
            arr[i]=arr[j];
            arr[j]=tee;
        }
    }
            }
    }
    for(i=0;i<k;i++){
        printf("%c %d\n",ar[i]+65,arr[i]);
    }

}
