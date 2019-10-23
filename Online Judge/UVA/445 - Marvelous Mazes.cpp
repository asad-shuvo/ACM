#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int i,j,k,l,m,n;
    while(getline(cin,a)){
    for(i=0;i<a.size();i++){
        if(a[i]=='!'){
            printf("\n");
        }
        else if(a[i+1]=='b'){
            k=a[i]-'0';
            for(j=0;j<k;j++){
                    printf(" ");
                }
                i=i+1;
        }
            else{
                k=a[i]-'0';
                for(j=0;j<k;j++){
                    printf("%c",a[i+1]);
                }
                i=i+1;
            }

    }
    printf("\n");
    }
    return 0;
}
