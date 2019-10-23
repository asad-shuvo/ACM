#include<bits/stdc++.h>
using namespace std;
int prime(int a){
    if(a==2) return 1;
if(a%2==0)
    return 0;
    if(a==1) return 0;
    for(int q=3;q<=sqrt(a);q++){
        if(a%q==0)
            return 0;
    }
    return 1;
}
int main()
{
    int test,te=0;
    scanf("%d",&test);
    while(test--){
    int m,n,arr[10000],arr1[10000],arr2[10000];
    int task[10000]={0};
    int task1[10000]={0};
    int task2[10000]={0};
    scanf("%d%d",&m,&n);
    printf("Case %d:\n",++te);
    int k=0,k1=0,k2=0;
    int mm=m;
    if(prime(m)==1)
        task[m]++;
    else{
    for(int i=2;i<=sqrt(mm);i++){

        while(m%i==0){
            m=m/i;
            task[i]++;
            //arr[k++]=i;
        }
    }
    if(m>1)
        task[m]++;
    }
    for(int i=2;i<=n;i++){
        int t=i;
        if(prime(t)==1)
            task1[t]++;
        else{
    for(int j=2;j<=sqrt(i);j++){
        while(t%j==0){
            t=t/j;
            task1[j]++;
            //arr1[k1++]=j;
        }
    }

    if(t>1)
    task[t]++;
    }
    }
    //for(int i=0;i<k2;i++)
        //task1[arr1[i]]++;
int mn=10000;
        for(int i=0;i<100;i++)
            {
                if(task[i]>0){
                    int p=task1[i]/task[i];
                    if(p<mn)
                        mn=p;
                    //arr2[k2++]=p;
                }
            }
            if(mn==10000 || mn==0)
            {
                printf("Impossible to divide\n");

            }
            else
                printf("%d\n",mn);

            //if(k)
            //sort(arr2,arr2+k2);
          //  if(arr2[0]>0)
            //{

            //cout<<arr2[0]<<endl;
            //}
            //if(arr2[0]==0)
            //{
              //   printf("Impossible to divide\n");

            //}
        //cout<<arr1[i]<<" ";
      //  for(int i=0;i<k2;i++)
        //    cout<<arr2[i]<<endl;
}
}
