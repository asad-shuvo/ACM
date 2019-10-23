#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,rem,a,j,k,l,m,n,sum,arr[1000];
    while(scanf("%d%d",&n,&m)!=EOF){
            sum=0;
        for(i=n;i<=m;i++){
            k=0;
            set<int>s;
        a=i;
        while(a>0){
            rem=a%10;
            arr[k++]=rem;
            s.insert(rem);
            a=a/10;
        }
      //  printf("%d\n",k);
       //cout<<s.size()<<endl;
        if(k==s.size())
           sum++;
    }
    printf("%d\n",sum);
    }
    return 0;
}
