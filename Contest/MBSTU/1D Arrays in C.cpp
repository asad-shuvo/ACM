#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    int arr[10005];
    for(int i=0;i<a;i++)scanf("%d",&arr[i]);
    for(int i=a-1;i>=0;i--)printf("%d ",arr[i]);

    return 0;
}