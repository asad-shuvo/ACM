#include<stdio.h>
int a,b,u,v,n,i,j,k,no=1;
int visit[11]= {0},min,mincost=0,cost[10][10];
int main()
{
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    printf("\nEnter the adjacency matrix:\n");
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
        {
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0)
            {
                cost[i][j]=999;
            }
        }

    visit[1]=1;

    printf("\n");
    while(no<n)
    {
        for(i=1,min=999; i<=n; i++)
        {
            if(visit[i]==1)
            {

             for(j=1; j<=n; j++)
              {
                if(cost[i][j]<min)
                {
                    min=cost[i][ j];
                    a=u=i;
                    b=v=j;

                }
              }
            }
        }
        if(visit[u]==0 || visit[v]==0)
        {
            printf("\n Edge %d:(%d --> %d) cost:%d\n",no++,a,b,min);
            mincost+=min;
            visit[b]=1;

        }
        cost[a][b]=cost[b][a]=999;
    }

    printf("\n Minimun cost=%d\n\n",mincost);

    return 0;
}

/**
0 2 0 6 0
2 0 3 8 5
0 3 0 0 7
6 8 0 0 9
0 5 7 9 0
*/
