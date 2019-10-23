#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100][200];
    int i,j,k,l,m,n;
    while(scanf("%d",&n)!=EOF){
    getchar();
 for(i=0;i<n;i++){
        scanf("%s",str[i]);
    }
   k=0;
   int p=0;
   int z=0;
   for(i=0; ;i++){
    k++;
    p++;
    z++;
    if(k==1){
        printf("%s: Happy\n",str[i]);
    }
    else if(k==2){
        printf("%s: birthday\n",str[i]);
    }
    else if(k==3){
        printf("%s: to\n",str[i]);
    }
    else if(k==4){
        printf("%s: you\n",str[i]);
    }
    else if(k==5){
        printf("%s: Happy\n",str[i]);
    }
    else if(k==6){
        printf("%s: birthday\n",str[i]);
    }
    else if(k==7){
        printf("%s: to\n",str[i]);
    }
    else if(k==8){
        printf("%s: you\n",str[i]);
    }
    else if(k==9){
        printf("%s: Happy\n",str[i]);
    }
    else if(k==10){
        printf("%s: birthday\n",str[i]);
    }
    else if(k==11){
        printf("%s: to\n",str[i]);
    }
    else if(k==12){
        printf("%s: Rujia\n",str[i]);
    }
    else if(k==13){
        printf("%s: Happy\n",str[i]);
    }
    else if(k==14){
        printf("%s: birthday\n",str[i]);
    }
    else if(k==15){
        printf("%s: to\n",str[i]);
    }
    else if(k==16){
        printf("%s: you\n",str[i]);
    }
    if(p==n){
        p=0;
        i=-1;
    }
    if(k==16){
        k=0;
    }
    if(z>=n && z%16==0)
        break;
   }
    }
    return 0;
}
