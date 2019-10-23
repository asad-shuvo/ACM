#include <stdio.h>
#include <math.h>
int main()
{
    float x,y,mod,z;
    int n;
    scanf("%f%f%d",&x,&y,&n);
    z=pow(x,y);
    mod=z%n;
    printf("%f",mod);
}
