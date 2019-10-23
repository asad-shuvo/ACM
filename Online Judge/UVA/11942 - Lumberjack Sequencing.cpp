#include <bits/stdc++.h>
using namespace std;
int main()
{
   //freopen("input.txt","rt",stdin);
    int n=10,arr[100],i,j,k,l,m,f,test;
    printf("Lumberjacks:\n");
    scanf("%d",&test);
    while(test--){
            f=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(arr[0]>arr[1]){
        for(i=0;i<n-1;i++){
        {
            for(j=i+1;j<n;j++){
                if(arr[j]>arr[i])
                {
                    f=1;
                    break;
                }
            }
        }

        }
    }
    else if(arr[0]<arr[1]){
            for(i=0;i<n-1;i++){
                for(j=i+1;j<n;j++){
                    if(arr[j]<arr[i])
                    {
                        f=1;
                break;
                    }
                }
            }

    }
if(f==1)
    printf("Unordered\n");
    else
        printf("Ordered\n");
}
return 0;
}

