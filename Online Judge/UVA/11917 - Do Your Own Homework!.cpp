#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a[1000],b,c,d;
    int i,j,k,l,m,n,day[1000],date,test,te=0;
    cin>>test;
    while(test--){
            te++;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i]>>day[i];
    cin>>date;
    cin>>b;
    int place,p=0;
    for(i=0;i<n;i++){
        if(b==a[i]){
                p=1;
            place=i;
            break;
        }
    }
    if(p==1){
        if(day[place]<=date)
            printf("Case %d: Yesss\n",te);
        else if(day[place]>date && day[place]<=date+5)
            printf("Case %d: Late\n",te);
        else if(day[place]>date+5)
            printf("Case %d: Do your own homework!\n",te);
    }
    else
        printf("Case %d: Do your own homework!\n",te);
    }
    return 0;

}
