#include <bits/stdc++.h>
using namespace std;
int ROW,COL;
int Mat[101][101];
int kadane(int* arr)
{
    int sum=0;
    int maxsum=INT_MIN,flag=-1,i;
    for(i=0;i<ROW;i++){
        sum+=arr[i];
        if(sum<0)
        {
            sum=0;
        }
        else {
            flag=1;
            if(sum>maxsum)
                maxsum=sum;
        }
    }
    if(flag!=-1) return maxsum;
    maxsum=arr[0];
    for(i=1;i<ROW;i++){
        if(arr[i]>maxsum)
            maxsum=arr[i];
    }
    return maxsum;

}
void maximumsum()
{
    int temp[101];
    int Left,Right,sum,maxSum=INT_MIN;
    for(Left=0;Left<ROW;Left++)
    {
        memset(temp,0,sizeof(temp));
        for(Right=Left;Right<COL;Right++){
            for(int i=0;i<ROW;i++){
                temp[i]+=Mat[i][Right];
            }
            sum=kadane(temp);
            if(sum>maxSum)
                maxSum=sum;
        }
    }
    printf("%d\n",maxSum);
}
int main()
{
    scanf("%d",&ROW);
    COL=ROW;
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            scanf("%d",&Mat[i][j]);
        }
    }
    maximumsum();
}
