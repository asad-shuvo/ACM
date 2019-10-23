#include <bits/stdc++.h>
using namespace std;
#define Max 100005
char ptrn[Max],s[Max],prefix[Max];

int main()
{
    while(1){
            scanf("%s",s);
            if(s[0]=='*')
            break;
    //Set_Prefix();
     int k=0;
     prefix[0]=0;
    int ln=strlen(s);
    for(int i=1;i<ln;++i){
        while(k>0 && s[k]!=s[i]) k=prefix[k-1];
        if(s[k]==s[i]) ++k;
        prefix[i]=k;
    }
    int ans=1;
    int L=strlen(s);
    int s1=L-prefix[L-1];
    if(s1<L && L%s1==0) ans=L/s1;
    printf("%d\n",ans);
}
}
