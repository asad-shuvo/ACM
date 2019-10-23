#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    double k,l,j,v1,v2,value;
    int i,p,test,t=0;
    scanf("%d",&test);
    getchar();
    while(test--)
{
    scanf("%lf",&v1);
        getline(cin,a);
     v1=.5*v1;
     printf("Case %d: ",++t);
    if(a.size()==1){
       printf("%g\n",v1);
    }
    else
    {
        v2=0;
        for(i=0;i<a.size();i++){
            if(a[i]>='0' && a[i]<='9'){
             v2=v2*10+a[i]-'0';
            }
        }
        v2=v2*0.05;
        value=v1+v2;
        printf("%g\n",value);
    }
}
return 0;
}
