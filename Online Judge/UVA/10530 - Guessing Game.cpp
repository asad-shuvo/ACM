#include <bits/stdc++.h>
using namespace std;
int main()
{
   //freopen("input.txt","rt",stdin);
    char str[1000];
    int i,j,k,l,h,th[1000],tl[1000],arr[1000],r_on,f;
    while(1){
              l=0;
            h=0;
            f=0;
    for(i=0; ; i++){
            scanf("%d",&arr[i]);
            if(arr[i]==0)
                return 0;
    getchar();
        gets(str);
        if(strcmp(str,"right on")==0){
                r_on=arr[i];
            break;
        }
        else if(strcmp(str,"too high")==0){
            th[h++]=arr[i];
        }
        else if(strcmp(str,"too low")==0){
            tl[l++]=arr[i];
        }

    }
    for(i=0;i<h;i++){
        if(th[i]<=r_on){
            f=1;
            break;
        }
    }
     for(i=0;i<l;i++){
        if(tl[i]>=r_on){
            f=1;
            break;
        }
    }
    if(f==1)
        printf("Stan is dishonest\n");
    else
        printf("Stan may be honest\n");

    }
    return 0;
}
