#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","rt",stdin);
    //freopen("output.txt","w",stdout);
    int i,j,k,l,n;
    string a[100],b,c;
    cin>>n;
    while(n--){
                vector<char>v;


    //if(m>1)
        //cout<<endl;
    int x=0,o=0;
    for(i=0;i<3;i++){
            //cin>>a;
           for(j=0;j<3;j++){
                cin>>a[i][j];
                v.push_back(a[i][j]);
            }
    }
        for(i=0;i<9;i++){
           if(v[i]=='X')
            x++;
           else if(v[i]=='O')
            o++;
            }
            int fx=0,fo=0;
           if(v[0]==v[1] && v[1]==v[2] && v[0]=='X')
            fx=1;
            else if(v[0]==v[1] && v[1]==v[2] && v[0]=='O')
            fo=1;
           if(v[3]==v[4] && v[4]==v[5] && v[5]=='X')
            fx=1;
           if(v[3]==v[4] && v[4]==v[5] && v[5]=='O')
            fo=1;
           if(v[6]==v[7] && v[7]==v[8] && v[8]=='X')
            fx=1;
           if(v[6]==v[7] && v[7]==v[8] && v[8]=='O')
            fo=1;
           if(v[0]==v[3] && v[3]==v[6] && v[6]=='X')
            fx=1;
           if(v[0]==v[3] && v[3]==v[6] && v[6]=='O')
            fo=1;
           if(v[1]==v[4] && v[4]==v[7] && v[7]=='X')
            fx=1;
           if(v[1]==v[4] && v[4]==v[7] && v[7]=='O')
            fo=1;
           if(v[2]==v[5] && v[5]==v[8] && v[8]=='X')
            fx=1;
           if(v[2]==v[5] && v[5]==v[8] && v[8]=='O')
            fo=1;
           if(v[0]==v[4] && v[4]==v[8] && v[8]=='X')
            fx=1;
           if(v[0]==v[4] && v[4]==v[8] && v[8]=='O')
            fo=1;
           if(v[2]==v[4] && v[4]==v[6] && v[6]=='X')
            fx=1;
           if(v[2]==v[4] && v[4]==v[6] && v[6]=='O')
            fo=1;
           int t=0;
           if(fx==1 && fo==0 && (x==o+1))
            cout<<"yes"<<endl;
           else if(fx==0 && fo==1 && x==o)
                   cout<<"yes"<<endl;
                   else if(fx==0 && fo==0 && x==o)
                    cout<<"yes"<<endl;
                    else if(fx==0 && fo==0 && x==o+1)
                    cout<<"yes"<<endl;
           else cout<<"no"<<endl;
        }
}



