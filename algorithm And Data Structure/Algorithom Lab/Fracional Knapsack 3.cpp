#include <bits/stdc++.h>
using namespace std;
#define mx 100
double weight[mx],profit[mx],capacity;
int num;
void fractional_knapsack(int num){
    /*double x[mx];
    for(int i=0;i<num;i++)
        x[i]=0.0;*/
        double tp=0;
        double u=capacity;
        int i;
    for( i=0;i<num;i++){
        if(weight[i]>u) break;
        else{
                //x[i]=1.0;
            tp+=profit[i];
        u=u-weight[i];
        }
    }
    if(i<num){
        double kk=u/weight[i];
        tp=tp+(kk*profit[i]);
    }

    cout<<tp<<endl;
}
int main()
{
    printf("Enter Number Of Items: \n");
    scanf("%d",&num);
    double rat[mx];
printf("Enter Capacity:\n");
cin>>capacity;
    for(int i=0;i<num;i++){
        scanf("%llf%llf",&weight[i],&profit[i]);
        rat[i]=profit[i]/weight[i];
    }
    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){
            if(rat[i]<rat[j]){
                swap(rat[i],rat[j]);
                swap(profit[i],profit[j]);
                swap(weight[i],weight[j]);
            }
        }
    }
    //cin>>capacity;
    fractional_knapsack(num);
}
