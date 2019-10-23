#include <bits/stdc++.h>
using namespace std;
int main()
{
    double AB,BC,AC,AD,AE,DE,High,Low,r,rt;
    int te=0,test;
    scanf("%d",&test);
    while(test--){
    scanf("%lf%lf%lf%lf",&AB,&AC,&BC,&r);
    High=AB;
    Low=0.0;
    double s1=(AB+AC+BC)/2.0;
        double AreaB=sqrt(s1*(s1-AB)*(s1-AC)*(s1-BC));
    for(int i=0;i<300;i++){
        double  mid=(High+Low)/2.0;
        AD=mid;
        AE=(AD*AC)/AB;
        DE=(AD*BC)/AB;
        double s2=(AD+AE+DE)/2.0;
        double AreaS=sqrt(s2*(s2-AD)*(s2-AE)*(s2-DE));
        double AreaT=AreaB-AreaS;
         rt=AreaS/AreaT;
        if(rt>r){
            High=mid;
        }
        else if(rt<r)
            Low=mid;
            else break;
    }
   // printf("%lf\n",rt);
        printf("Case %d: %.8lf\n",++te,AD);
    }
}
