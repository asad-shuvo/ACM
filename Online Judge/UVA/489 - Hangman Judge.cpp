#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","rt",stdin);
    freopen("output.txt","w",stdout);
    string a,b;
    int c,d,e,f,s,i,j,test,t=0;
    while(scanf("%d",&test)==1 && test!=-1){
            getchar();
    getline(cin,a);
    getline(cin,b);
    s=0;
    t++;
    for(i=0;i<b.size();i++){
            f=0;
        for(j=0;j<a.size();j++){
            if(b[i]==a[j]){
                f=1;
                a.erase(a.begin()+j);
            }
        }
        if(f==0)
            s++;
            if(s==7)
                break;
    }
    printf("Round %d\n",t);
    if(s==7){

        cout<<"You lose."<<endl;
    }
    else if(s<7 && a.size()>0){
        cout<<"You chickened out."<<endl;
    }
    else if(s<7 && a.size()==0)
        cout<<"You win."<<endl;
    }
    return 0;
}
