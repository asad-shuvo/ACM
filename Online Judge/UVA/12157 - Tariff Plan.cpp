#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","rt",stdin);
    int i,j,k,l,m,n,arr[100],mile,ju,t=0,test;
    scanf("%d",&test);
    while(test--){
            m=0;
    ju=0;
            t++;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
            if(arr[i]<30){
        m=m+1;
            }
            else if((arr[i]+1)%30==0){
                m=m+(arr[i]+1)/30;
            }
            else
            {
                m=m+1+(arr[i]/30);
            }


    }
     for(i=0;i<n;i++){
            if(arr[i]<60){
        ju=ju+1;
            }
            else if((arr[i]+1)%60==0){
                ju=ju+(arr[i]+1)/60;
            }
            else
            {
                ju=ju+1+(arr[i]/60);
            }


    }
    ju=ju*15;
    m=m*10;
    if(ju<m)
    printf("Case %d: Juice %d\n",t,ju);
    else if(m<ju)
        printf("Case %d: Mile %d\n",t,m);
        else if(m==ju)
        printf("Case %d: Mile Juice %d\n",t,m);
    }
    return 0;

  //  printf("ju= %d\n",ju);
   // printf("m= %d\n",m);

}
