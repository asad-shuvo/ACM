#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,n,m,s;
    int arr1[100005],arr2[100005],arr[100000];
    scanf("%d",&n);
    map<int,int>st;
    map<int,int>::iterator it;
    for(i=0;i<n;i++){
        scanf("%d",&s);

       st[s];
    }
  //  sort(arr,arr+n);
    int q,t=0,sum;
    scanf("%d",&q);
    for(i=0;i<q;i++){
    scanf("%d",&m);
        sum=0;
        int f=0;
        for(it=st.begin();it!=st.end();it++){

                if(*it>m){
                    f=1;
                }
            if(m>=*it){
                sum++;
            }
            if(f==1){
               // printf("%d\n",sum);
                break;
            }
        }
        printf("%d\n",sum);


            /*
          // else if(m<arr[j]){
          //  f=1;

           // }
            if(f==1){
             arr1[t++]=sum;
             break;
            }
            else arr1[t++]=sum;
        }
        //printf("%d\n",s);

        //arr1[t++]=sum;
    }
    for(i=0;i<t;i++){
          printf("%d\n",arr1[i]);
        //cout<<arr1[i]<<endl;
    }
    */
}
}
