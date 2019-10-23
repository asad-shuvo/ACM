#include <stdio.h>
int main()
{
    int i,j,k,l,m,n,rem,c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,test;
    scanf("%d",&test);
    while(test--){
            c0=0;
            c1=0;
            c2=0;
            c3=0;
            c4=0;
            c5=0;
            c6=0;
            c7=0;
            c8=0;
            c9=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i<=9)
        {
            if(i==0)
                c0++;
                 else if(i==1)
                c1++;
                else if(i==2)
                c2++;
                else if(i==3)
                c3++;
                else if(i==4)
                c4++;
                else if(i==5)
                c5++;
                else if(i==6)
                c6++;
                else if(i==7)
                c7++;
                else if(i==8)
                c8++;
                else if(i==9)
                c9++;

        }
        else if(i>9)
        {
            k=i;
            while(k>0)
            {
                rem=k%10;
                k=k/10;
                if(rem==0)
                c0++;
                else if(rem==1)
                c1++;
                else if(rem==2)
                c2++;
                else if(rem==3)
                c3++;
                else if(rem==4)
                c4++;
                else if(rem==5)
                c5++;
                else if(rem==6)
                c6++;
                else if(rem==7)
                c7++;
                else if(rem==8)
                c8++;
                else if(rem==9)
                c9++;

            }
        }
    }
    printf("%d %d %d %d %d %d %d %d %d %d\n",c0,c1,c2,c3,c4,c5,c6,c7,c8,c9);
}
}
