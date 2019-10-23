#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","rt",stdin);
    int i,j,k,l,n,arr[10000],a[10000],test;
    scanf("%d",&test);
    while(test--){
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]==0){
               if(a[i]==1)
                printf(" ");
        }
        else if(arr[i]==1){
                if(a[i]==1)
                printf(".");
               else if(a[i]==2)
               printf(",");
               else if(a[i]==3)
               printf("?");
               else if(a[i]==4)
                printf("\"");

        }else if(arr[i]==2){
             if(a[i]==1)
                printf("a");
               else if(a[i]==2)
               printf("b");
               else if(a[i]==3)
               printf("c");
        }
        else if(arr[i]== 3){
            if(a[i]==1)
                 printf("d");
               else if(a[i]==2)
               printf("e");
               else if(a[i]==3)
               printf("f");
        }
        else if(arr[i]== 4){
            if(a[i]==1)
                 printf("g");
               else if(a[i]==2)
               printf("h");
               else if(a[i]==3)
               printf("i");
        }
        else if(arr[i]== 5){
            if(a[i]==1)
                printf("j");
               else if(a[i]==2)
               printf("k");
               else if(a[i]==3)
               printf("l");
        }
        else if(arr[i]== 6){
            if(a[i]==1)
                printf("m");
               else if(a[i]==2)
               printf("n");
               else if(a[i]==3)
               printf("o");
        }
        else if(arr[i]== 7){
             if(a[i]==1)
                printf("p");
               else if(a[i]==2)
               printf("q");
               else if(a[i]==3)
               printf("r");
                else if(a[i]==4)
                    printf("s");
        }
        else if(arr[i]== 8){
            if(a[i]==1)
                printf("t");
               else if(a[i]==2)
               printf("u");
               else if(a[i]==3)
               printf("v");
        }
        else if(arr[i]== 9){
             if(a[i]==1)
                printf("w");
               else if(a[i]==2)
               printf("x");
               else if(a[i]==3)
               printf("y");
               else if(a[i]==4)
                    printf("z");
        }
        }
          printf("\n");
    }
        return 0;
    }
