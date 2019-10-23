#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[1000];
    int i,j,k,l,m,n,f;
    gets(str);
    int ln=strlen(str);
    f=0;
    for(i=0;i<ln;i++){
        if(str[i]=='h'){
            for(k=i+1;k<ln;k++){
                if(str[k]=='e'){
                    for(l=k+1;l<ln;l++){
                        if(str[l]=='l'){
                            for(m=l+1;m<ln;m++){
                                if(str[m]=='l'){
                                    for(n=m+1;n<ln;n++){
                                        if(str[n]=='o'){
                                            f=1;
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if(f==1)
            break;
    }
    if(f==1)
        printf("YES\n");
    else
        printf("NO\n");

}
