#include <bits/stdc++.h>
using namespace std;
#define f_i freopen("input.txt","rt",stdin);
#define f_o freopen("out.txt","wt",stdout);
int main()
{
   // f_i
    //f_o
    int n,q,i,j,k,l;
    cin>>n;
    string a;
    vector<string>v;
    while(n--){
            cin>>a;
    v.push_back(a);
    }
    cin>>q;
    while(q--){
        cin>>k;
        if(v[k-1]!="?")
            cout<<v[k-1]<<endl;
        else if(v[k-1]=="?"){
                int left=0;
                int right=0;
                string lft,rgt;
                int f1=0;
        for(i=k-1;i>=0;i--){
            if(v[i]=="?"){
                left++;
                //lft=v[i];
            }
            if(v[i]!="?"){

                lft=v[i];
                f1=1;
                break;
            }
        }
        int f=0;
        for(i=k-1;i<v.size();i++){
            if(v[i]=="?"){
                right++;
                //rgt=v[i];
            }
            if(v[i]!="?"){
                f=1;
                rgt=v[i];
                break;
        }
        }
        if(f==0){
            for(i=1;i<=left;i++){
                printf("right of ");
            }
            cout<<lft<<endl;
        }
        else if(f1=0){
            for(i=1;i<=right;i++){
                printf("left of ");
            }
            cout<<rgt<<endl;
        }

     /*  else if(k==v.size()){
            for(i=1;i<=left;i++){
                printf("right of ");
            }
            cout<<lft<<endl;
        }*/
        else if(right<left){
            for(i=1;i<=right;i++){
                printf("left of ");
            }
            cout<<rgt<<endl;
        }
        else if(right>left){
            for(i=1;i<=left;i++){
                printf("right of ");
            }
            cout<<lft<<endl;
        }
        else if(right==left){
            cout<<"middle "<<"of "<<lft<<" and "<<rgt<<endl;
        }
        }
    }
}
