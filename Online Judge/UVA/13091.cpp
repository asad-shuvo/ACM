#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","rt",stdin);
   // freopen("output.txt","w",stdout);
    int i,j,k,l,m,n;
    string a;
    int test,te=0;
    scanf("%d",&test);
    while(test--){
    n=5;

    int f=0,f1=0,t=0;
    while(n--){

        cin>>a;
        for(i=0;i<a.size();i++){
            if(a[i]=='>'){
                    t++;
                for(j=i+1;j<a.size();j++){
                    if(a[j]=='|')
                    {
                        f=1;
                    }
                }
            }
            else if(a[i]=='<'){
                for(j=i+1;j<a.size();j++){
                    if(a[j]=='|')
                    {
                        f1=1;
                    }
                }
            }
        }
    }
    if(t==1){
        if(f==1)
             printf("Case %d: Thik Ball\n",++te);
        else
            printf("Case %d: No Ball\n",++te);
    }
    else{
        if(f1==0)
                 printf("Case %d: Thik Ball\n",++te);
            else
                printf("Case %d: No Ball\n",++te);
    }
    }
}
