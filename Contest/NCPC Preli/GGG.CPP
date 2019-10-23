#include<bits/stdc++.h>
using namespace std;
string a,b;
int dp[103][55][55];
int fun(int pos,int l1,int l2)
{

    if(l1>=a.length()&&l2>=b.length())
    {
        return pos;
    }
    int &ret=dp[pos][l1][l2];
    if(ret!=-1)
        return ret;
    ret=999999;
    if(l1<a.length()&&l2<b.length())
    {
        if(a[l1]==b[l2])
            ret=min(ret, fun(pos+1,l1+1,l2+1));
    }
    if(l1<a.length())
    {
        ret=min(ret,fun(pos+1,l1+1,l2));

    }
    if(l2<b.length())
    {
        ret=min(ret,fun(pos+1,l1,l2+1));
    }
    return ret;
}
int path(int pos,int l1,int l2,int f)
{

    if(l1>=a.length()&&l2>=b.length())
    {
        if(f==0)
            printf(")");
        if(f==1)
            printf("}");
        if(f==2)
            printf("]");
        printf("\n");
       // cout<<"sdfsdf"<<endl;
        return 1;
    }
    int ans=fun(pos,l1,l2);
    int ret=-10;
    if(l1<a.length()&&l2<b.length())
    {
        if(a[l1]==b[l2])
        {
            ret= fun(pos+1,l1+1,l2+1);

            if(ans==ret)
            {
                if(f!=0)
                {
                    if(f==1)
                        printf("}");
                   else if(f==2)
                        printf("]");

                        printf("(");
                    printf("%c",a[l1]);
                    return path(pos+1,l1+1,l2+1,0);

                }
                else
                {
                     printf("%c",a[l1]);
                    return path(pos+1,l1+1,l2+1,0);
                }


            }

        }
    }
    int ret1=9999999,ret2=999999;
    int cnt=0;
    if(l1<a.length())
    {
        ret1=fun(pos+1,l1+1,l2);
    }
    if(l2<b.length())
    {
        ret2=fun(pos+1,l1,l2+1);
    }

    if(ret1==ans&&ret2==ans)
    {
        if(a[l1]<b[l2])
        {
            if(f!=1)
            {
                     if(f==0)
                  printf(")");
                  else  if(f==1)
                    printf("}");
                  else   if(f==2)
                    printf("]");
                    printf("{");
                    printf("%c",a[l1]);
                 return   path(pos+1,l1+1,l2,1);
            }
            else
            {
                   printf("%c",a[l1]);
                 return   path(pos+1,l1+1,l2,1);

            }

        }
        else
        {
         if(f!=2)
            {
                     if(f==0)
                  printf(")");
                  else  if(f==1)
                    printf("}");
                  else   if(f==2)
                    printf("]");
                    printf("[");
                    printf("%c",b[l2]);
                 return   path(pos+1,l1,l2+1,2);
            }
            else
            {
                   printf("%c",b[l2]);
                 return   path(pos+1,l1,l2+1,2);

            }

        }
       }
        if(ans==ret1&&a.length()>l1)
        {
            if(f!=1)
            {
                     if(f==0)
                  printf(")");
                  else  if(f==1)
                    printf("}");
                  else   if(f==2)
                    printf("]");
                    printf("{");
                    printf("%c",a[l1]);
                 return   path(pos+1,l1+1,l2,1);
            }
            else
            {
                   printf("%c",a[l1]);
                 return   path(pos+1,l1+1,l2,1);

            }

        }


    if(ans==ret2&&b.length()>l2)
    {
       // cout<<pos<<endl;
         if(f!=2)
            {
                //cout<<"in"<<endl;
                     if(f==0)
                  printf(")");
                  else  if(f==1)
                    printf("}");
                  else   if(f==2)
                    printf("]");
                    printf("[");
                    printf("%c",b[l2]);
                 return   path(pos+1,l1,l2+1,2);
            }
            else
            {
                   printf("%c",b[l2]);
                 return   path(pos+1,l1,l2+1,2);

            }

    }

}
int main()
{
    int t;
    scanf("%d",&t);
    int ks=0;
    while(t--)
    {
        cin>>a>>b;
        memset(dp,-1,sizeof(dp));
        printf("Case %d:\n",++ks);
        printf("%d\n",fun(0,0,0));
        path(0,0,0,4);
    }
}
