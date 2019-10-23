#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int i,j,k,l,n,m,box[1000],match[1000],temp,sum;
    while(scanf("%lld%lld",&n,&m)!=EOF){
    for(i=0;i<m;i++){
        scanf("%lld%lld",&box[i],&match[i]);
    }
    for(i=0;i<m-1;i++){
        for(j=i+1;j<m;j++){
            if(match[i]<match[j]){
                swap(match[i],match[j]);
                swap(box[i],box[j]);
            }
        }
    }
    j=0;
    k=0;
    i=0;
    sum=0;
    for(l=0; ;l++){
            if(k==n)
            break;
        j++;
        k++;
        sum=sum+match[i];
        if(j==box[i])
        {
            j=0;
            i++;
        }
    }
    printf("%lld\n",sum);
    }
    return 0;

}
