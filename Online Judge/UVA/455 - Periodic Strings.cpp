#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tes,i,j,l,m,test;
    scanf("%d",&test);
    //int t=0;
    while(test--){
      //  t++;

    char ptrn[1000];
    char prefix[1000];
    scanf("%s",ptrn);
    int k=0;
    prefix[0]=0;
    m=strlen(ptrn);
    for(i=1;i<m;i++){
        while(k>0 and ptrn[k]!=ptrn[i]) k=prefix[k-1];
        if(ptrn[k]==ptrn[i])
            k++;
        prefix[i]=k;
    }
    int L=strlen(ptrn);
    int s=prefix[L-1];
    double N=L;
    int half=ceil(N/2);
    if(s>=half){
        int res=L-s;
        if(L%res==0)
        printf("%d\n",res);
        else
            printf("%d\n",L);
    }
    else
        printf("%d\n",L);
    //printf("%d\n",s);
    if(test) printf("\n");
    }
}
