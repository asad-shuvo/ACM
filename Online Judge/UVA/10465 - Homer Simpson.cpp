#include <bits/stdc++.h>
using namespace std;
#define file_input freopen("input.txt","rt",stdin);
#define file_output freopen("out.txt","wt",stdout);
int main()
{
    //file_input
    //file_output
    int m,n,t;
    int i,j,k,p,q,f=0;
    while(scanf("%d%d%d",&m,&n,&t)!=EOF){
int    mn=min(m,n);
int    mx=max(m,n);
    if(t%mn==0)
        cout<<t/mn<<endl;
       // cout<<mn;
        //int f=0;
    else{
            k=mx;

        for(i=1; ;i++){
                //k=mx;
                int z=t-k;
           // cout<<"z"<< z<<endl;
            int y=z%mn;
            //cout<<y<<endl;
            if(y==0){
                   // cout<<
            break;
            }
        else{
            k+=mx;
            //cout<<"k" << k<<endl;
        }
    if(k>=t){
        f=1;
        break;
    }
        }
        //cout<<i;
        if(f==0)
        {
            p=i*mx;
            t=t-p;
            cout<<(t/mn)+i<<endl;
        }
        if(f==1){
                int d=mn;
                int f1=0;
                for(j=1; ;j++){
                    int c=(t-d)%mx;
        if(c==0){
            break;
        }
        else
            d+=mn;
        if(d>=t)
        {
            f1=1;
            break;
        }
                }
                if(f1==0){
                    int p1=j*mn;
                    t=t-p1;
                    cout<<(t/mx)+j<<endl;
                }
                else{
int            p1=t%mn;
            int t1=t-p1;
            int p2=t%mx;
            int t2=t-p2;
            if(p1<=p2)
            cout<<(t1/mn)<<" "<<p1<<endl;
            else
                cout<<(t2/mx)<<" "<<p2<<endl;
                }
        }
    }
}
}
