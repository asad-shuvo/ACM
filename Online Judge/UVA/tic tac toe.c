#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
char matrix [3][3];
char check(void);
void init(void);
void user1(void);
void user2(void);
void display(void);

int main()
{
    char done;
    printf("Lets Play Tic Tac Toe Game:\n");
    printf("Your Opponent Is User2\n");
    done=' ';
    init();
    do{
        display();
        user1();
        done=check();
        if(done!=' '){
            break;
        }
        user2();
        done=check();

    }while(done==' ');
    if(done=='X')
    printf("Congrats User1 Has Won The Game\n");
    else
         printf("Congrats User2 Has Won The Game\n");
    display();
    return 0;

}
void init(void){
    int i,j;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        matrix[i][j]=' ';

}
void user1(void){
    int x,y;
    printf("Enter X,Y co-ordinate For Your Move\n");
    scanf("%d%*c%d",&x,&y);///I use pointer variable c because its Help to user1 to input in exact position
    x--;
    y--;
    if(matrix[x][y]!=' '){
        printf("Invalid Move\n");
    user1();
    }
    else{
        matrix[x][y]='X';

    }
}
void user2(void){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        if(matrix[i][j]==' ') break;
        }
        if(matrix[i][j]==' ') break;
    }


if(i*j==9){
    printf("Its A Draw\n");
exit(0);
}
else
    matrix[i][j]='0';
}
void display(void){
    int t;
    for(t=0;t<3;t++){
        printf(" %c| %c| %c",matrix[t][0],matrix[t][1],matrix[t][2]);
        if(t!=2)
        printf("\n--|--|--\n");
    }
    printf("\n");

}
char check(void){
    int i;
    for(i=0;i<3;i++)
        if(matrix[i][0]==matrix[i][1] && matrix[i][1]==matrix[i][2])///For Row
            return matrix[i][0];
             for(i=0;i<3;i++)
        if(matrix[0][i]==matrix[1][i] && matrix[1][i]==matrix[2][i])///For column
            return matrix[0][i];

            if(matrix[0][0]==matrix[1][1] && matrix[2][2]==matrix[1][1])
                return matrix[0][0];

                if(matrix[0][2]==matrix[1][1] && matrix[1][1]==matrix[2][0])
                return matrix[0][2];
                return ' ';

}
