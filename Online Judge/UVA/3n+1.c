#include<stdio.h>
int main()
{
   // freopen("input.txt","rt",stdin);
    long long int i,j,k,l=0,m,n,max,t,x,y;
    while(scanf("%lld%lld",&m,&n)==2 && m>0 && n>0){
    if(m>n)
    {
        t=m;
        m=n;
        n=t;
    }
     if(m==1 && n==1)
            {
                printf("Between 1 and 1, 1 generates the longest sequence of 3 values.\n");
            }
            else if(m==1 && n==2)
            {
                printf("Between 1 and 2, 1 generates the longest sequence of 3 values.\n");
            }
            else
            {
            max=0;
    for(i=m;i<=n;i++){
            k=i;
            l=0;
    while(k!=1){
        if(k%2==0)
        {
        k=k/2;
        }
        else  {
            k=3*k+1;
        }
        l++;

    }
    if(l>max)
    {
        max=l;
        j=i;
    }
    }
    printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",m,n,j,max);
}
    }
}

