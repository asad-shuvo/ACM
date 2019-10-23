#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r,g,b,i,j,k,sum,time;
    while(scanf("%d%d%d",&r,&g,&b)!=EOF){
    time=29;
    while(1 ){
            if(r==0 && g==0 && b==0)
           break;
        if(r>2)
        {
            r=r-2;
        }
        else
            r=r-r;
             time=time+1;
            if(r==0 && g==0 && b==0)
           break;
        //time=time+1;
        if(g>2)
        {
            g=g-2;
        }
        else
            g=g-g;
             time=time+1;
            if(r==0 && g==0 && b==0)
           break;
        if(b>2)
            b=b-2;
        else
            b=b-b;
             time=time+1;
            if(r==0 && g==0 && b==0)
           break;
    }
    printf("%d\n",time);
    }
    return 0;
}
