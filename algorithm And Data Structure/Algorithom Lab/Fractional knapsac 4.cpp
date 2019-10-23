#include<bits/stdc++.h>
using namespace std;
float weight[20];
 float profit[20];
  float capacity;
void knapsack(int n) {
   float  tp = 0,kk;
   int i, j, u;
   u = capacity;
   for (i = 0; i < n; i++) {
      if (weight[i] > u)
         break;
      else {
         tp = tp + profit[i];
         u = u - weight[i];
      }
   }

   if (i < n)
      kk = u / weight[i];
   tp = tp + (kk * profit[i]);
   printf("\nMaximum profit is:- %f", tp);

}

int main() {
   int num, i, j;
   float ratio[20], temp;

   printf("\nEnter the no. of objects: ");
   scanf("%d", &num);

   printf("\nEnter the wts and profits of each object: \n");
   for (i = 0; i < num; i++) {
      scanf("%f %f", &weight[i], &profit[i]);
      ratio[i] = profit[i] / weight[i];
   }

   printf("\nEnter the capacity of knapsack: \n");
   scanf("%f", &capacity);

   for (i = 0; i < num; i++) {
      for (j = i + 1; j < num; j++) {
         if (ratio[i] < ratio[j]) {
             swap(ratio[i],ratio[j]);
         swap(profit[i],profit[j]);
         swap(weight[i],weight[j]);
         }
      }
   }

   knapsack(num);
   return(0);
}
/**
Enter the no. of objects:-
7
2 10
3 5
5 15
7 7
1 6
4 18
1 3
*/

