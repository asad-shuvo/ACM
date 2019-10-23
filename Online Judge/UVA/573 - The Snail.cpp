#include <bits/stdc++.h>
using namespace std;
int main()
{
    double H,U,D,F,i,j,k,l,m,n;
    while(cin>>H>>U>>D>>F){
            if(H==0)
            break;
    double sum=U;
    if(sum>H)
        cout<<"success on day 1"<<endl;
    // sum=U-D;
    else if(sum-D<0){
        cout<<"failure on day 1"<<endl;
    }
    else{
            sum=U-D;
    //cout<<sum<<endl;
    int success=0;
    int failure=0;
    double  fatigue_factor=(F*U)/100;
   // cout<<fatigue_factor<<endl;
    for(i=2; ;i++){
            cout<<"i  "<<i<<" ";
        U=U-fatigue_factor;
        cout<<U<<endl;
        sum+=U;
        cout<<sum<<endl;
                if(sum>H){
                success=1;
            break;
        }
        sum-=D;
        cout<<sum<<endl;
         if(sum<0)
        {
            failure=1;
            break;
        }

    }
    if(success==1)
    cout<<"success on day "<<i<<endl;
    else if(failure==1)
        cout<<"failure on day "<<i<<endl;
    }
}
}
