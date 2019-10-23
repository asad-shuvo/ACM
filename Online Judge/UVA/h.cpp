#include <bits/stdc++.h>
using namespace std;
#define dd double
int main()
{
    double m,h;
    char c;
    scanf("%lf%c%lf",&h,&c,&m);
    dd Hangle=0.5*(h*60+m);
    dd Mangle=6*m;
    dd angle=abs(Hangle - Mangle);
    angle=min(angle,360-angle);
    //cout<<angle<<endl;
    printf("%lf\n",angle);
}

