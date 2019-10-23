#include <bits/stdc++.h>
using namespace std;
int main()
{
    char m[700];
    int sum1,sum2,i,k,t,f,j,l,ln,arr[1000],a[1000];
    while(gets(m)){
            k=0;
    t=0;
    f=1;
    ln=strlen(m);
    if(ln==4 && m[0]=='D' && m[1]=='O' && m[2]=='N' && m[3]=='E'){
        break;
    }
    for(i=0;i<ln;i++)
    {
        if(m[i]>='A' && m[i]<='Z')
        {
            l=m[i]-'A';
            arr[k++]=l;
        }
        else if(m[i]>='a' && m[i]<='z')
        {
            l=m[i]-'a';
            arr[k++]=l;
        }
    }

   for(i=0,j=k-1;i<=k/2;i++,j--)
   {
       if(arr[i]!=arr[j])
       {
           f=0;
           break;
       }
   }

    if(f==1)
    {
        printf("You won't be eaten!\n");
    }
    else
        printf("Uh oh..\n");

}
return 0;
}
