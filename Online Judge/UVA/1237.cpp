#include <bits/stdc++.h>
using namespace std;
int main()
{
   //freopen("input.txt","rt",stdin);
   //freopen("output.txt","w",stdout);
    int i,k,l,m,n,m1,j,sum,d,test,t=0,a,b;
  //  char str[100000][25];
  //string str[100];

char s[100];
    scanf("%d",&test);
    while(test--){
            vector<string>str;
            t++;
    if(t>1)
        printf("\n");
            vector<string>v;
    vector<int>arr;
    vector<int>arr1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
            scanf("%s",s);
           // cin>>str[i];
            str.push_back(s);
            scanf("%d%d",&a,&b);
            arr.push_back(a);
            arr1.push_back(b);
      //  scanf("%d%d",&arr[i],&arr1[i]);
    }
    scanf("%d",&m1);
    for(i=0;i<m1;i++){
        scanf("%d",&m);
        sum=0;
        for(j=0;j<n;j++){
            if(m>=arr[j] && m<=arr1[j]){
                sum++;
                d=j;
        }
        }
        if(sum==1){
            v.push_back(str[d]);
            //printf("%s\n",str[d]);
        }
        else
        v.push_back("UNDETERMINED");
            //printf("UNDETERMINED\n");
    }
    for(i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    }
    return 0;
}
