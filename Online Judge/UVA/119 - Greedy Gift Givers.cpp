#include <bits/stdc++.h>
using namespace std;
int main()
{
  freopen("input.txt","rt",stdin);
  freopen("output.txt","w",stdout);
  //  vector<string>v1,v2,v3;
    int i,j,k,l,lft,rem,m,n,o,p,amount,t,test=1,te=0;
        while(scanf("%d",&n)!=EOF){
               // test++;
       // if(test>1)
           // cout<<endl;
    //getchar();int arr[10000];
     int arr[10000];
    for(i=0;i<n;i++)
        arr[i]=0;
    string a,b,c,v1[1000];

for(i=0;i<n;i++){
        cin>>v1[i];
        //v1.push_back(a);
    }
    for(i=0;i<n;i++){
        cin>>b;
        for(j=0;j<n;j++){
            if(b==v1[j]){
                cin>>amount>>k;
                if(amount==0 && k==0)
                    arr[j]=arr[j]-0;
               else if(amount==0 && k!=0){
                for(p=0;p<k;p++)
                    cin>>c;
               }
               else if(amount!=0 && k!=0)
                //arr[j]=-amount;
                {
                 rem=amount%k;
                 int rem1=-amount+rem;
                arr[j]=arr[j]+(rem1);
                if(amount==0)
                    lft=0;
                else if(rem!=0 && amount!=0)
                lft=(amount-rem)/k;
                else if(rem==0 && amount!=0)
                    lft=amount/k;
                for(p=0;p<k;p++){
                    cin>>c;
                    for(t=0;t<n;t++){
                        if(c==v1[t]){
                            arr[t]+=lft;
                        }
                    }
                }
            }
            }
        }
    }
    if(test!=1)
        cout<<endl;
    for(i=0;i<n;i++){
        cout<<v1[i]<<" "<<arr[i]<<endl;
    }
    test++;
}
return 0;
}

