#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
void towers(int num, char Beg, char Aux, char End)
{
    if (num == 1)
    {
        printf("\n Move disk 1 from peg %c to peg %c", Beg, End);
        return;
    }
    towers(num - 1, Beg, End, Aux);
    printf("\n Move disk %d from peg %c to peg %c", num, Beg, End);
    towers(num - 1, Aux, Beg, End);
}

int main()
{
    int num;

    printf("Enter the number of disks : ");
    scanf("%d", &num);
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    towers(num, 'A', 'B', 'C');
cout<<endl;
    cout<<"\nTotal Number Of steps  ";
    cout<<pow(2,num)-1<<endl;
    return 0;
}

