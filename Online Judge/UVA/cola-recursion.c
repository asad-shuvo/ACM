#include <stdio.h>
int rec(int n)
{
    if(n>=3)
        return 1+rec((n/3)+(n%3));

}
int main()
{
    int i,j,n,y;
    while(scanf("%d",&n)!=EOF){
    y=rec(n);
    printf("%d\n",y+n);
    }
}
