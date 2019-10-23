#include <bits/stdc++.h>
using namespace std;
int ROW,COL;
int M[101][101];
int kadane(int* arr,int n)
{
    int sum = 0, maxSum = INT_MIN, i;
    int flag  = -1;
    int local_start = 0;
    for (i = 0; i < n; ++i)
    {
        sum += arr[i];
        if (sum < 0)
        {
            sum = 0;
            local_start = i+1;
        }
        else if (sum > maxSum)
        {
            maxSum = sum;
            flag=1;
        }
    }

    if (flag != -1)
        return maxSum;
    maxSum = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > maxSum)
        {
            maxSum = arr[i];
        }
    }
    return maxSum;
}

void findMaxSum()
{
    int maxSum = INT_MIN;
    int left, right, i;
    int temp[ROW], sum, start, finish;
    for (left = 0; left < COL; ++left)
    {
        memset(temp, 0, sizeof(temp));
        for (right = left; right < COL; ++right)
        {
            for (i = 0; i < ROW; ++i)
                temp[i] += M[i][right];
            sum = kadane(temp,ROW);
            if (sum > maxSum)
            {
                maxSum = sum;
            }
        }
    }

    printf("%d\n", maxSum);
}
int main()
{
scanf("%d",&ROW);
COL=ROW;

     for(int i=0;i<ROW;i++){
        for(int j=0;j<COL;j++){
            scanf("%d",&M[i][j]);
        }
     }

    findMaxSum();

    return 0;
}

