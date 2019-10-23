#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ln,f,n,i,j,k,l,c,test=0;
    char str[10005];
    while(scanf("%d",&n)!=EOF){
            test++;
    getchar();
    c=0;
    while(n--){
        f=0;
        gets(str);
        ln=strlen(str);
        int count[30]={0};
        int cn[1000];
        k=0;
        //c=0;
        for(i=0;i<ln;i++){
            count[str[i]-97]++;
        }
        for(i=0;i<26;i++){
            if(count[i]>0){
                cn[k++]=count[i];
            }
        }
        if(k==1)
        {
            c=c+0;
        }
        else{
        for(i=0;i<k;i++){
            for(j=i+1;j<k;j++){
                if(cn[i]==cn[j])
                {
                    f=1;
                    break;
                }
            }
        }
        if(f==0)
        c++;
    }
    }
    printf("Case %d: %d\n",test,c);
    }
    return 0;
}

