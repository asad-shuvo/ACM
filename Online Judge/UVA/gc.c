#include <stdio.h>
#include<math.h>
int status[1000000];
int prime[1000000];
int main() {

    //freopen("input.txt","rt",stdin);
    int i,j,k=1,N,p;
while(scanf("%d",&N)){
        if(N==0)
        break;
        printf("%d = ",N);
for( i = 2; i <= N; i++ )
status[i] = 0;
for( i = 3; i <= sqrt(N); i += 2 ) {
if( status[i] == 0 ) {
for( j = 3 * i; j <= N; j += 2 * i )
status[j] = 1;
}
}
prime[0]=2;
for( i = 3; i <= N; i += 2 ) {
if( status[i] == 0 ) {
        prime[k++]=i;
}
}
   p=0;
        for(i=0; i<k; i++)
        {
            for(j=i+1; j<k; j++)
            {
                if(prime[i]+prime[j]==N)
                {
                    p=1;
                    printf("%d + %d\n",prime[i],prime[j]);
                    break;

                }

            }
            if(p==1)
                break;
        }
        if(p==0)
            printf("Goldbach's conjecture is wrong.\n");
}
return 0;
}
