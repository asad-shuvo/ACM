#include<bits/stdc++.h>
int main()
{
    //freopen("input.txt","rt",stdin);
    int b,f,i,j,k=0,l,m,n,arr[10005],a[10005],mn;
    while(scanf("%d%d",&b,&f)!=EOF){
            if(b==0 && f==0)
            break;
            k++;
    for(i=0;i<b;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<f;i++){
        scanf("%d",&a[i]);
    }
    if(f>=b)
    {
        printf("Case %d: 0\n",k);
    }
    else
    {
      l=b-f;
      mn=arr[0];
      for(i=0;i<b;i++)
      {
          if(arr[i]<mn)
            mn=arr[i];
      }
      printf("Case %d: %d %d\n",k,l,mn);
    }
    }
    return 0;
}
