/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100000],i,j,k=0,l,p,m,n;
    scanf("%d",&n);
    m=n;
        for(i=1;i<m;i++){
            if(m%i==0){
               printf("%d ",m/i);
                m=m/i;
                i=1;
            }
        }
        printf("1");
        */
        #include<stdio.h>
int main()
{
int n,i,j,count=0;
while(scanf("%d",&n)!=EOF)
{

for(i=1;i<=n;i++)
{
if(n%i==0){


printf("%d ",n/i);

n=n/i;
i =1;
}
}
printf("\n");
}



}
//}
