#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","rt",stdin);
    char str[600];
    int arr[1000],i,j,k,ln,m,n,f;
    while(gets(str)){
            k=0;
            f=1;
    ln=strlen(str);
    if(ln==1 && str[0]=='*')
        break;
    if(str[0]>='A' && str[0]<='Z')
    {
    arr[k++]=str[0]-'A';
    }
    else if(str[0]>='a' && str[0]<='z'){
    arr[k++]=str[0]-'a';
    }
    for(i=0;i<ln;i++)
    {
        if(str[i]==' ')
        {
            if(str[i+1]>='A' && str[i+1]<='Z'){
    arr[k++]=str[i+1]-'A';
            }
    else if(str[i+1]>='a' && str[i+1]<='z'){
    arr[k++]=str[i+1]-'a';
    }
        }
    }
    for(i=0;i<k-1;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(arr[i]!=arr[j])
            {
                f=0;
                break;
            }
        }
    }
    if(f==1)
        printf("Y\n");
    else
        printf("N\n");

    }
    return 0;

}
