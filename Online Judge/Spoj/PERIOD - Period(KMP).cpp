#include <bits/stdc++.h>
using namespace std;
#define Max 1000005
char txt[Max];
int prefix[Max];
int main()
{
    int len;
    int test,m=0;
    scanf("%d",&test);
    while(test--){
    scanf("%d%s",&len,txt);
    prefix[1]=0;
    int k;
    printf("Test case #%d\n",++m);
    for(int i=1,k=0;i<len;i++){
        while(k>0 and txt[k]!=txt[i]) k=prefix[k-1];
        if(txt[k]==txt[i]) k++;
        prefix[i]=k;
    if(k>0 and ((i+1)%(i+1-k)==0))
            printf("%d %d\n",i+1,(i+1)/(i+1-k));
    }
    printf("\n");

}
}
