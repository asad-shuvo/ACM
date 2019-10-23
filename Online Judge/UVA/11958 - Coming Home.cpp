#include <bits/stdc++.h>
using namespace std;
int main()
{
  //freopen("input.txt","rt",stdin);
   // freopen("output.txt","w",stdout);
    int test,c_h,c_m,b_h,b_m,h,arr[1000],k,m,time,j=0,te;
    cin>>te;
    while(te--){
            k=0;
            j++;
    cin>>test;
    scanf("%d:%d",&c_h,&c_m);
    int i,l;
    for(i=1; i<=test; i++)
    {
        scanf("%d:%d",&b_h,&b_m);
        if(c_h<b_h)
        {
           // h=(b_h-c_h)*60;
            if(c_m>b_m)
            {
                h=((b_h-c_h)-1)*60;
                m=(60-c_m)+b_m;
                //cout<<m<<endl;

            }
            else if(c_m<b_m)
            {
                h=(b_h-c_h)*60;
                m=b_m-c_m;
                ////cout<<m<<endl;
            }
            else
            {
                h=(b_h-c_h)*60;
                m=c_m;
               // cout<<m<<endl;
            }

        }
        else if(c_h==b_h){
            if(c_m<b_m){
                h=0;
                m=b_m-c_m;
            }
            else if(c_m>b_m){
                h=23*60;
                m=(60-c_m)+b_m;
            }
            else if(c_m==b_m){
                h=0;
                m=0;
            }

        }
        else if(c_h>b_h)
        {
            if(c_m==b_m)
            {
                h=((24-c_h)+b_h)*60;
                m=b_m;
            }
            else if(c_m>b_m)
            {
                h=((23-c_h)+b_h)*60;
                    m=(60-c_m)+b_m;
            }
                else if(c_m<b_m){
                        h=((24-c_h)+b_h)*60;
                    m=b_m-c_m;
            }
        }
        cin>>time;
       int t=time+h+m;
        arr[k++]=t;
    }
    int mx=arr[0];
    for(i=0; i<k; i++)
    {
        if(arr[i]<mx)
            mx=arr[i];
    }
    printf("Case %d: %d\n",j,mx);
}
return 0;
}
