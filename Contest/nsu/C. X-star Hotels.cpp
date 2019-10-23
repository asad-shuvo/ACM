#include<bits/stdc++.h>
using namespace std;
int fx[] = {0, 0,1,-1, 1,-1, 1,-1};
int fy[] = {1,-1,0, 0, 1,-1,-1, 1};
int main()
{
    int TC;
    scanf("%d",&TC);
    while(TC--){
    string str[100];
    int n,m;
    scanf("%d %d",&n, &m);
    for(int i=0; i<n; i++)
    {
        cin >> str[i];
    }
    int res[30];
    memset(res,0,sizeof(res));
    for(int i=0;i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(str[i][j]<='Z' && str[i][j]>='A')
            {
                for(int k=0; k<8; k++)
                {
                    int n_i = i+fx[k];
                    int n_j = j+fy[k];
                    if(n_i>=0 && n_i<n && n_j>=0 && n_j<m)
                    {
                        int v = str[i][j]-'A';
                        if(str[n_i][n_j]=='*')res[v]++;
                    }
                }
            }
        }
    }
    int Max = 0;
    for(int i=0; i<26; i++)
    {
       Max = max(Max,res[i]);
    }
    if(Max==0) printf("");
    else
    {
        int fin;
        for(int i=0; i<26; i++)
        {
            if(res[i]==Max)
            {
                fin = i;
                break;
            }
        }
        printf("%c\n",fin+'A');
    }
    }
}
