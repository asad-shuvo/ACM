#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","rt",stdin);
    //freopen("output.txt","w",stdout);
    string a,b,c,d;
    int test;
    scanf("%d",&test);
    getchar();
    while(test--){
    int i,j,k,l,s=0,s1=0;
    vector<char>v1,v2,v3,v4,v5;
    getline(cin,a);
    getline(cin,b);
    for(i=0;i<a.size();i++){
        if(a[i]=='<'){
                a.erase(a.begin()+i);
            s++;
        }
        if(a[i]=='>'){
            s++;
            a.erase(a.begin()+i);
        }
        if(s==1){
            v1.push_back(a[i]);
        }
        if(s==2)
            v2.push_back((a[i]));
        if(s==3)
            v3.push_back(a[i]);
        if(s==4)
            v4.push_back(a[i]);
    }
    for(i=0;i<b.size();i++){
        if(b[i]!='.')
            v5.push_back(b[i]);
        else{
                for(int t=0;t<v3.size();t++)
            v5.push_back(v3[t]);
        for(int t=0;t<v2.size();t++)
            v5.push_back(v2[t]);
            for(int t=0;t<v1.size();t++)
            v5.push_back(v1[t]);
            for(int t=0;t<v4.size();t++)
            v5.push_back(v4[t]);
            break;
        }

    }
    cout<<a<<endl;
    for(i=0;i<v5.size();i++)
        cout<<v5[i];
    cout<<endl;
    }
}
