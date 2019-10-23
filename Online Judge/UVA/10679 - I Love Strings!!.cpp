#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    int i,j,k,l,m,n,f,test;
    cin>>test;
    getchar();
    while(test--){
    cin>>a;
    cin>>n;
    while(n--){
            f=1;
    cin>>b;
    for(i=0,j=0;i<b.size();j++,i++){
        if(a[i]!=b[j])
        f=0;
            /*
        if(a[i]==b[0]){
            k=i;
            j=0;
            while(a[k]==b[j]){
                k++;
                j++;
                if(j==b.size())
                {
                    f=1;
                    break;

                }
            }

        }
if(f==1)
                    break;

*/
    }
            if(f==1)
            cout<<"y\n";
            else
                cout<<"n\n";

}
    }
return 0;
}
