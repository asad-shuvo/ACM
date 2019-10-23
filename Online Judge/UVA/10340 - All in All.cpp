#include <bits/stdc++.h>
using namespace std;
int main()
{
        freopen("input.txt","rt",stdin);
       // freopen("out.txt","W",stdout);
    string s,t;
    int ln1,ln2,i,j,k,l,p,m,n;
    while(cin>>s>>t){
    ln1=s.size();

    ln2=t.size();
    k=0;
    p=0;
    for(i=0;i<ln1;i++){
           // k++;
        for(j=k;j<ln2;j++){
            k++;
            if(s[i]==t[j]){
                p++;
    break;
   // j=k;
            }

        }
        k=k-1;
        //if(k==ln2)
          //  break;
    }
    if(ln1==ln2){
        printf("No\n");
    }
        //printf("Yes\n");
        else if(p>=ln1){
        printf("Yes\n");
        }
    else{
        printf("No\n");
    }
    }
    return 0;
}
