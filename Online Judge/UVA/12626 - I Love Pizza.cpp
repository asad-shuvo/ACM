#include <bits/stdc++.h>
using namespace std;
int main()
{
    char p[605];
    int arr[1000];
    int test,i,j,k,ln,ca,cm,cr,cg,ci,ct,c1a,c1m,c1r,c1g,c1i,c1t,mn;
    scanf("%d",&test);
    while(test--)
        {
            ca=0;
            cm=0;
            cr=0;
            cg=0;
            ci=0;
            ct=0;
            k=0;
    scanf("%s",p);
    ln=strlen(p);
    for(i=0;i<ln;i++)
    {
        if(p[i]=='A')
        {
            ca++;
        }
        else if(p[i]== 'M')
        {
            cm++;
        }
        else if(p[i]== 'R')
        {
            cr++;
        }
         else if(p[i]== 'G')
        {
            cg++;
        }
        else if(p[i]== 'I')
        {
            ci++;
        }
        else if(p[i]== 'T')
        {
            ct++;
        }

    }
    if(ca>=3 && cr>=2 && cm>=1 && cg>=1 && ci>=1 && ct>=1)
    {
        c1a=ca/3;
        arr[k++]=c1a;
        c1r=cr/2;
        arr[k++]=c1r;
        arr[k++]=cm;
        arr[k++]=cg;
        arr[k++]=ci;
        arr[k++]=ct;
        mn=arr[0];
        for(i=0;i<k;i++)
        {
          if(arr[i]<mn)
            mn=arr[i];
        }
        printf("%d\n",mn);

    }
    else
        printf("0\n");
}
return 0;
}
