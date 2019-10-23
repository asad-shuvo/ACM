#include <bits/stdc++.h>
using namespace std;
int main()
{
    int px,py,qx,qy,rx,ry,x,y,i,j,k;
    vector<int>v1,v2;
    cin>>px>>py>>qx>>qy>>rx>>ry;
    x=px+qx-rx;
    v1.push_back(x);
    y=py+qy-ry;
    v2.push_back(y);
    x=px+rx-qx;
    v1.push_back(x);
    y=py+ry-qy;
    v2.push_back(y);
    x=qx+px-rx;
    v1.push_back(x);
    y=qy+py-ry;
    v2.push_back(y);
    x=qx+rx-px;
    v1.push_back(x);
    y=qy+ry-py;
    v2.push_back(y);
    x=rx+px-qx;
    v1.push_back(x);
    y=ry+py-qy;
    v2.push_back(y);
    x=rx+qx-px;
     v1.push_back(x);
    y=ry+qy-py;
    v2.push_back(y);
    for(i=0;i<v1.size();i++)
    {
        for(j=i+1;j<v1.size();j++){
            if(v1[i]==v1[j] && v2[i]==v2[j])
            {
                v1.erase(v1.begin()+i);
               // v1.erase(v1.begin()+i);
                v2.erase(v2.begin()+i);
                //v2.erase(v2.begin()+j);
            }
        }
    }
    cout<<v1.size()<<endl;
    for(i=0;i<v1.size();i++)
        cout<<v1[i]<<" "<<v2[i]<<endl;
}
