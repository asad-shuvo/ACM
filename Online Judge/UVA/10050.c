#include <stdio.h>
int main()
{
    //freopen("input.txt","rt",stdin);
    int arr[100000],s[100000],q,i,j,k,m,ans,count,a,n,day,test;
    scanf("%d",&test);
    while(test--)
    {
        q=0;
        count=0;
        a=0;
    scanf("%d",&day);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        for(j=arr[i];j<=day;j=j+arr[i])
        {
            if((j%7!=0) && ((j+1)%7!=0))
            {
                count++;
                s[q++]=j;
            }
        }
    }
     for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(s[i]==s[j])
            {
                for(k=j;k<n;k++)
                {
                    s[k]=s[k+1];
                }
               // n--;
                a++;
            }
        }
    }
    ans=count-a;
    printf("%d\n",ans);
    }
}

