#include <stdio.h>
int main()
{
    int m1,m2,h1,h2,e,t,t1;
    while(scanf("%d%d%d%d",&h1,&m1,&h2,&m2)!=0)
    {
        if(h1==0 && h2==0 && m1==0 && m2==0)
            break;
   else if(m1==m2 && h1>h2)
    {
        e=(24-(h1-h2))*60;
        printf("%d\n",e);
    }
  else  if(m1==m2 && h2>h1)
    {
        e=(h2-h1)*60;
         printf("%d\n",e);
    }
    else if(h1==h2 && m1>m2)
    {
        e=24*60-(m1-m2);
         printf("%d\n",e);
    }
    else if(h1==h2 && m2>m1)
    {
        e=(m2-m1);
        printf("%d\n",e);
    }
    if(h2==0 )
    {
        e=(23-h1)*60+((60-m1)+m2);
        printf("%d\n",e);
    }
else if(h1>h2 && m1>m2)
    {
     e=(24-(h1-h2))*60-(m1-m2);
     printf("%d\n",e);
}
else if(h2>h1 && m2>m1)
    {
     e=(h2-h1)*60+(m2-m1);
     printf("%d\n",e);
}
else if(h2>h1 && m1>m2)
    {
     e=(h2-h1)*60-(m1-m2);
     printf("%d\n",e);
}
else if(h1>h2 && m2>m1)
    {
     e=(24-(h1-h2))*60+(m2-m1);
     printf("%d\n",e);
}

}
return 0;
}
