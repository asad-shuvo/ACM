#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","rt",stdin);
    freopen("output.txt","w",stdout);
    string a,b;
    int i,j,k,m,n,round;
    while(scanf("%d",&round)!=EOF && round>0){
    int cntW=0,cntL=0;

    cin>>a>>b;
    int f,w=0,l=0;
    for(i=0;i<b.size();i++){
            f=0;
        for(j=0;j<a.size();j++){
            if(b[i]==a[j]){
                cntW++;
                a[j]='0';
                if(cntW==a.size())
                {
                    w=1;
                    break;
                }
                f=1;
            }
        }
        if(w==1)
            break;

        if(f==0){
            cntL++;
            if(cntL==7)
            {
                l=1;
                break;
            }
        }
    }
    printf("Round %d\n",round);
    if(a.size()<b.size() && l==1)
         printf("You chickened out.\n");
    else if(w==1)
        printf("You win.\n");
    else if(l==1)
        printf("You lose.\n");
  else  if(w==0 && l==0)
        printf("You chickened out.\n");
    }
    //cout<<cntW<<" "<<cntL<<endl;
}
