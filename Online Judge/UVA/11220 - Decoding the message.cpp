#include <bits/stdc++.h>
using namespace std;
int main()
{
   //  freopen("input.txt","rt",stdin);
   // freopen("output.txt","w",stdout);

    string a,b;
    int p=0,i,j,k,l,m,n,test;
    scanf("%d",&test);
    getchar();
    getchar();
    for(i=1;i<=test;i++){
            vector<char>c;
    if(i!=1)
        printf("\n");
            printf("Case #%d:\n",i);
    while(getline(cin,a) && a!=""){
  //  p++;
    //if(p>1)
        //cout<<endl;

        stringstream ss(a);
        k=1;
        while(ss>>a){
            if(a.size()>=k){
                c.push_back(a[k-1]);
                cout<<c[0];
                k++;
                c.clear();
            }

        }
        printf("\n");
    }

  // cout<<endl;
    }
    // cout<<endl;
    }

