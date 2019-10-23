#include<stdio.h>
#include<stdlib.h>
int number;
int M[12][12],S[12][12];
void print_optimal_parens(int i,int j)
{
    if(i==j)
    {
        printf("A%d",i);
    }
    else
    {
        printf("(");
        print_optimal_parens(i,S[i][j]);
        printf(" x ");
        print_optimal_parens(S[i][j]+1,j);
        printf(")");
    }
}

int main()
{
   /* freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
    int y=1;
    while(scanf("%d",&number)==1&&number!=0)
    {
        int i,j,k,l=0,m,n,A[number+1];
        for(i=0;i<number;i++)
        {
            scanf("%d %d",&m,&n);
            if(i==0)
            {
                A[l++]=m;
            }
            A[l++]=n;
        }
       // for(i=1;i<=number+1;i++)printf("%d ",A[i]);

        for(i=1;i<=number;i++)M[i][i]=0;
        for(l=2;l<=number;l++)
        {
            for(i=1;i<=number+1-l;i++)
            {
                j=i+l-1;
                M[i][j]=2000000000;
                for(k=i;k<j;k++)
                {
                    int q=M[i][k]+M[k+1][j]+A[i-1]*A[k]*A[j];
                    if(q<M[i][j])
                    {
                        M[i][j]=q;
                        S[i][j]=k;
                    }
                }
            }
        }
        printf("Case %d: ",y++);
        print_optimal_parens(1,number);
        printf("\n");
    }
    return 0;
}
