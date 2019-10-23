#include<stdio.h>
#include<conio.h>
int main(){
    int m[99][99];
    int size;
    printf("Enter the magic square: ");
    scanf("%d",&size);
    int start=size/2;
    int max=size*size;
    m[0][start]=1;
    int cur_row,cur_col,next_row,next_col,num;
    for(num=2,cur_row=0,cur_col=start;num<=max;num++){
        if((cur_col+1)>(size-1)){
            next_col=0;
        }
        else{
            next_col=cur_col+1;
        }
        if((cur_row-1)<0){
            next_row=size-1;
        }
        else{
            next_row=cur_row-1;
        }
        if(m[next_row][next_col]>0){

            if((cur_row+1)>(size-1)){
                next_row=0;
            }
            else{
                next_row=cur_row+1;
                next_col=cur_col;
            }

        }
        cur_row=next_row;
        cur_col=next_col;
        m[cur_row][cur_col]=num;

    }
    int i,j;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%4d",m[i][j]);
        }
        printf("\n");
    }

  return 0;
}
