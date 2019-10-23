#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[100],b[100];
    int test,i,j,k,ln1,ln2,f;
    scanf("%d",&test);
    while(test--){
            f=1;
    scanf("%s",a);
    scanf("%s",b);
    ln1=strlen(a);
    ln2=strlen(b);
    if(ln1!=ln2)
        printf("NO\n");
    else if(ln1==ln2){
    for(i=0;i<ln1;i++){
          // f=0;
        if(a[i]==b[i])
        {
            f=1;
        }
        else if(a[i]!=b[i]){
                /*
            if((a[i]=='a')&&(b[i]!='a' && b[i]!='i' && b[i]!='o' && b[i]!='u' || b[i]!='e'))
                f=0;
                else if((a[i]=='i')&&(b[i]!='a' || b[i]!='i' || b[i]!='o' || b[i]!='u' || b[i]!='e'))
                f=0;
                else if((a[i]=='o')&&(b[i]!='a' || b[i]!='i' || b[i]!='o' || b[i]!='u' || b[i]!='e'))
                f=0;
                else if((a[i]=='u')&&(b[i]!='a' || b[i]!='i' || b[i]!='o' || b[i]!='u' || b[i]!='e'))
                f=0;
                else if((a[i]=='e')&&(b[i]!='a' || b[i]!='i' || b[i]!='o' || b[i]!='u' || b[i]!='e'))
                f=0;
            }
            */
              if((a[i]=='a' || a[i]=='e' && a[i]=='i' && a[i]=='o' && a[i]=='u') && (b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u'))

               {

                f=1;
               }
            else{
              f=0;
               break;
            }
        }
    if(f==0)
        break;
    }
    if(f==1)
        printf("YES\n");
    else
        printf("NO\n");
    }

    }
    }

