#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","rt",stdin);
    char str[1000];
    int i,j=0,k,l,m,n,sum,ln,test,t;
    scanf("%d",&test);
    while(test--){
            scanf("%d",&ln);
            j++;
    sum=0;
    scanf("%s",str);
    for(i=0;i<ln;i++){
            if(str[i]=='.' && str[i+1]=='#' && str[i+2]=='#'){
                i=i+2;
                sum++;
            }
          else if(str[i]=='.' && str[i+1]=='.' && str[i+2]=='.'){
                i=i+2;
                sum++;
            }
            else if(str[i]=='.' && str[i+1]=='#' && str[i+2]=='.'){
                i=i+2;
                sum++;
            }
            else if(str[i]=='.' && str[i+1]=='.' && str[i+2]=='#'){
                i=i+2;
                sum++;
            }
            else if(str[i]=='.')
            {
                i=i+1;
                sum++;
            }
    }
       printf("Case %d: %d\n",j,sum);
    }
    return 0;
}
