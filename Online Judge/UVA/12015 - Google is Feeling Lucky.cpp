#include <bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","rt",stdin);
    int i,num[100],test,j=0,mx;
    char name[10][1000];
    scanf("%d",&test);
    while(test--){
            j++;
    for(i=0;i<10;i++){
        scanf("%s%d",name[i],&num[i]);
    }
    mx=num[0];
     for(i=0;i<10;i++){
        if(num[i]>mx)
            mx=num[i];
    }
    printf("Case #%d:\n",j);
    for(i=0;i<10;i++){
        if(num[i]==mx){
            printf("%s\n",name[i]);
        }
    }
    }
    return 0;
}
