#include <stdio.h>
void Initial_Board(void);
void Drawing_Board(void);
void Game_On(void);
void Computer_Turn(void);
void My_Turn(void);
int middle_csk(char);
int Computr_middle(void);
int Computer_corner(void);
int Computer_side(void);
int Decide(char);
int sv(int);
char b[3][3];
char computer, you;
int main(void)
{
      Initial_Board();
      Drawing_Board();
      computer = 'O';
	  you = 'X';
      Game_On();

  return 0;
}
void Initial_Board(void)
{
  int r, c;
  for (r = 0; r < 3; r++)
    for (c = 0; c< 3; c++)
      b[r][c] = ' ';
  return;
}
void Drawing_Board(void)
{
    system("cls");
  int r, c;
  printf("\n");
  for (r = 0; r < 3; r++)
    {
      printf(" %c | %c | %c\n", b[r][0], b[r][1], b[r][2]);
      if (r == 2)
        continue;
      else
        printf("---+---+---\n");
    }
  printf("\n");
  return;
}
void Game_On(void)
{
  int t;
  for (t = 1; t <= 9; t++)
    {
      if (t % 2 == 1)
	    My_Turn();
      else
	    Computer_Turn();
      Drawing_Board();
      if (Decide(computer)) {
	printf("\n Pathetic loser :D \n\n");
	return;
      }
      else if (Decide(you)) {
	printf("\nCongratulations, you win!(Luckily)!\n\n");
	return;
      }
    }
  printf("\n Draw.You are so boring.You cant beat me bro!\n\n");
  return;
}
void Computer_Turn(void)
{
    int sq;
    int r, c;
    sq= middle_csk(computer);
    if (!sq)  sq = middle_csk(you);
    if (!sq)  sq = Computr_middle();
    if (!sq)  sq = Computer_corner();
    if (!sq)  sq = Computer_side();
    r = (sq -1) / 3;
    c= (sq - 1) % 3;
    b[r][c] = computer;
  return;
}
int middle_csk(char s)
{
  int sq, r, c;
  int res = 0;
  for (sq = 1; sq<= 9; sq++)
    {
      r = (sq - 1) / 3;
      c = (sq - 1) % 3;
      if (b[r][c] == ' ')
	{
	  b[r][c] = s;
	  if (Decide(s))
	    res = sq;
	  b[r][c] = ' ';
	}
    }
  return res;
}
int Computr_middle(void)
{
  if (b[1][1] == ' ')  return 5;
  else  return 0;
}
int Computer_corner(void)
{
  if (b[0][0] == ' ')  return 1;
  if (b[0][2] == ' ')  return 3;
  if (b[2][0] == ' ')  return 7;
  if (b[2][2] == ' ')  return 9;
  return 0;
}
int Computer_side(void)
{
  if (b[0][1] == ' ')  return 2;
  if (b[1][0] == ' ')  return 4;
  if (b[1][2] == ' ')  return 6;
  if (b[2][1] == ' ')  return 8;
  return 0;
}
int Decide(char s)
{
  int r, c;
  for (r = 0; r < 3; r++)
    {
      if ((b[r][0] == s) && (b[r][1] == s) && (b[r][2] == s))
	return 1;
    }
  for (c = 0; c < 3; c++)
    {
      if ((b[0][c] == s) && (b[1][c] == s) && (b[2][c] == s))	return 1;
    }

  if ((b[0][0] == s) && (b[1][1] == s) && (b[2][2] == s)) return 1;

  if ((b[0][2] == s) && (b[1][1] == s) && (b[2][0] == s))  return 1;

  return 0;
}
void My_Turn(void)
{
  int sq;
  int r, c;
  do
    {
      printf("Enter a block square number(From 1-9) : ");
      scanf("%d", &sq);
    } while (!sv(sq));
  r = (sq - 1) / 3;
  c = (sq- 1) % 3;
  b[r][c] = you;
  return;
}
int sv(int sq)
{
  int r, c;
  r= (sq - 1) / 3;
  c = (sq - 1) % 3;
  if ((sq >= 1) && (sq <= 9))
    {
      if (b[r][c] == ' ')  return 1;
    }
  return 0;
}


