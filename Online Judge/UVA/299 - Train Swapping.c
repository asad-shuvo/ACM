#include <stdio.h>
int main()
{
    int i,j,temp,n,array[1000],l,t;
    scanf("%d",&t);
    while(t>0){
            l=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(array[i]>array[j]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
        l++;
            }
        }
    }
    printf("Optimal train swapping takes %d swaps.\n",l);
    t--;
    }
    return 0;
}

