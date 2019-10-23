#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","rt",stdin);
    char author[1000],al[1000];
    int i,j,k,l,m,n,arr[100],a[100];
    while(gets(author)){
            k=0;
    l=0;
    gets(al);
    arr[k++]=author[0]-'a';
    a[l++]=al[0]-'a';
    for(i=0;i<strlen(author);i++){
        if(author[i]==' ' && (author[i+1]>='a' && author[i+1]<='z'))
        {
            arr[k++]=author[i+1]-'a';
        }
    }
    for(i=0;i<strlen(al);i++){
        if(al[i]==' ' &&(al[i+1]>='a' && al[i+1]<='z'))
        {
            a[l++]=al[i+1]-'a';
        }
    }
    int f=0;
    for(i=0,j=0;i<k,j<l;i++,j++){
        if(arr[i]!=a[j])
        {
            f=1;
            break;
        }
    }
    if(f==1)
        printf("no\n");
        else
        printf("yes\n");
    }
    return 0;
}
