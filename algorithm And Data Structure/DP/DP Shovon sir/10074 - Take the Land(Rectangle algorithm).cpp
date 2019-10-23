#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define p_b push_back
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define mx 1000
int row,col;
int mat[105][105];
int maxHist(int row[])
{
    stack<int>result;
    int top_value;
    int maxArea=0;
    int Area=0;
    int i=0;
    while(i<col)
    {
        if(result.empty() || row[i]>=row[result.top()])
        {
            result.push(i++);
        }
        else
        {
            top_value=row[result.top()];
            Area=top_value*i;
            result.pop();
            if(!result.empty()){
                Area=top_value*(i-result.top()-1);
            }
            maxArea=max(maxArea,Area);
        }
    }
    while(!result.empty())
    {
        top_value=row[result.top()];
            Area=top_value*i;
            result.pop();
            if(!result.empty()){
                Area=top_value*(i-result.top()-1);
            }
            maxArea=max(maxArea,Area);
    }
    return maxArea;
}
int maxRectangle()
{
    int result=maxHist(mat[0]);
    int i,j;
    FOR(i,1,row-1)
    {
        FOR(j,0,col-1){
        if(mat[i][j])mat[i][j]=(mat[i][j]+mat[i-1][j]);
        result=max(result,maxHist(mat[i]));
        }
    }
    return result;
}
int main()
{
    sc("%d%d",&row,&col);
    int i,j;
//        int mat[][col];

    FOR(i,0,row-1){
    FOR(j,0,col-1){
    sc("%d",&mat[i][j]);
    if(mat[i][j]==0) mat[i][j]=1;
    if(mat[i][j]==1) mat[i][j]=0;
    }
    }
    cout<<maxRectangle();
}

