#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","rt",stdin);
    //freopen("output.txt","w",stdout);
    string a,b;
    int i,j,k,l,y,z;

    int p[100],p1[100];
    int q[100],q1[100];
    while(getline(cin,a)){
            y=0,z=0;
    k=0;
    l=0;
     int arr[100]={0};
    int ar[100]={0};
        for(i=0;i<a.size();i++){
            if(a[i]>='a' && a[i]<='z'){
                arr[a[i]-'a']++;
            }
            else if(a[i]>='A' && a[i]<='Z'){
                ar[a[i]-'A']++;
            }

        }
      for(i=0;i<26;i++){
        if(arr[i]>0){
            p[y++]=arr[i];
            p1[z++]=i;
        }
      }
       for(i=0;i<26;i++){
        if(ar[i]>0){
            q[k++]=ar[i];
            q1[l++]=i;
        }
      }
      int m=p[0];
      for(i=0;i<y;i++){
        if(p[i]>m){
            m=p[i];
        }
      }
       int m1=q[0];
      for(i=0;i<k;i++){
        if(q[i]>m1){
            m1=q[i];
        }
      }
      if(m>m1){
        for(i=0;i<y;i++){
            if(p[i]==m){
                printf("%c",p1[i]+97);
            }
        }
        printf(" ");
        printf("%d\n",m);
      }
      else if(m1>m){
        for(i=0;i<k;i++){
            if(q[i]==m1){
                printf("%c",q1[i]+65);
            }
        }
        printf(" ");
        printf("%d\n",m1);
      }
      else if(m==m1){
         for(i=0;i<k;i++){
            if(q[i]==m1){
                printf("%c",q1[i]+65);
            }
        }
        for(i=0;i<y;i++){
            if(p[i]==m){
                printf("%c",p1[i]+97);
            }
        }

         printf(" ");
        printf("%d\n",m1);
      }
    }
}
