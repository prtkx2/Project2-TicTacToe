#include <stdio.h>
#include <stdlib.h>

char grid[3][3]={{'_','_','_'},{'_','_','_'},{'_','_','_'},};
void input();
char p1='X';
void print_board();
void p2();
int check();
void main()
{  int i=0;
    print_board();
   while (1)
  {     i++;

        input();
        print_board();
        if(check()==1)
        {
            printf("X WINS!!!\n");
            break;
        }
       else if (check()==2)
        {
            printf("O WINS!!!\n");
            break;
        }
       else if(check()==3&&i==9)
        {
            printf("Match Draw\n");
            break;
        }
        p2();


  }

}
void print_board()
{
    system("cls");
    printf("\t\t\t\t-------TIC TAC TOE-------\n");
    printf("\t\t\t\t    %c  |   %c  |   %c\n",grid[0][0],grid[0][1],grid[0][2]);
    printf("\t\t\t\t-------------------------\n");
    printf("\t\t\t\t    %c  |   %c  |   %c\n",grid[1][0],grid[1][1],grid[1][2]);
    printf("\t\t\t\t-------------------------\n");
    printf("\t\t\t\t    %c  |   %c  |   %c\n",grid[2][0],grid[2][1],grid[2][2]);
}

void p2()
{
    if(p1=='X')
    {
        p1='O';
    }
    else p1='X';
}

int check()
{   //ROW FOR 'X':
    if(grid[0][0]=='X'&&grid[0][1]=='X'&&grid[0][2]=='X')
      {
        return 1;

      }
    if(grid[1][0]=='X'&&grid[1][1]=='X'&&grid[1][2]=='X')
      {
        return 1;

      }
      if(grid[2][0]=='X'&&grid[2][1]=='X'&&grid[2][2]=='X')
      {
        return 1;

      }

//COLUMN FOR 'X':
  else if(grid[0][0]=='X'&&grid[1][0]=='X'&&grid[2][0]=='X')
       {
           return 1;

       }

  else if(grid[0][1]=='X'&&grid[1][1]=='X'&&grid[2][1]=='X')
       {
           return 1;

       }

   else if(grid[0][2]=='X'&&grid[1][2]=='X'&&grid[2][2]=='X')
       {
           return 1;

       }

//DIAGONAL FOR 'X':
else if(grid[0][0]=='X'&&grid[1][1]=='X'&&grid[2][2]=='X')
       {
           return 1;
       }
else if(grid[0][2]=='X'&&grid[1][1]=='X'&&grid[2][0]=='X')
       {
           return 1;
       }

//----------------------------------------------------------------------

//ROW FOR 'O':
   else if(grid[0][0]=='O'&&grid[0][1]=='O'&&grid[0][2]=='O')
      {
           return 2;

       }

   else if(grid[1][0]=='O'&&grid[1][1]=='O'&&grid[1][2]=='O')
       {
          return 2;

       }
   else if(grid[2][0]=='O'&&grid[2][1]=='O'&&grid[2][2]=='O')
       {
           return 2;

       }

 //COLUMN FOR 'O':
      else if(grid[0][0]=='O'&&grid[1][0]=='O'&&grid[2][0]=='O')
      {
        return 2;

      }
      else if(grid[0][1]=='O'&&grid[1][1]=='O'&&grid[2][1]=='O')
      {
        return 2;
      }

      else if(grid[0][2]=='O'&&grid[1][2]=='O'&&grid[2][2]=='O')
       {
           return 2;
       }

//DIAGONAL FOR 'O':
else if(grid[0][0]=='O'&&grid[1][1]=='O'&&grid[2][2]=='O')
       {
           return 2;
       }

else if(grid[0][2]=='O'&&grid[1][1]=='O'&&grid[2][0]=='O')
       {
           return 2;
       }

    return 3;


}

void input()
{   int pos;
    printf("Enter your move(position):  ");
   l0:
        scanf("%d",&pos);
    if(pos==1)
    {
        if(grid[0][0]=='_')
        {
            grid[0][0]=p1;
        }
        else { printf("position already occupied,re-enter position"); goto l0;}
    }
    else  if(pos==2)
    {
        if(grid[0][1]=='_')
        {
            grid[0][1]=p1;
        }
        else { printf("position already occupied,re-enter position"); goto l0;}
    }
     else   if(pos==3)
    {
        if(grid[0][2]=='_')
        {
            grid[0][2]=p1;
        }
        else { printf("position already occupied,re-enter position"); goto l0;}
    }

        else if(pos==4)
    {
        if(grid[1][0]=='_')
        {
            grid[1][0]=p1;
        }
        else { printf("position already occupied,re-enter position"); goto l0;}
    }
       else if(pos==5)
    {
        if(grid[1][1]=='_')
        {
            grid[1][1]=p1;
        }
        else { printf("position already occupied,re-enter position"); goto l0;}
    }

   else if(pos==6)
    {
        if(grid[1][2]=='_')
        {
            grid[1][2]=p1;
        }
        else { printf("position already occupied,re-enter position"); goto l0;}
    }
     else   if(pos==7)
    {
        if(grid[2][0]=='_')
        {
            grid[2][0]=p1;
        }
        else { printf("position already occupied,re-enter position"); goto l0;}
    }
     else   if(pos==8)
    {
        if(grid[2][1]=='_')
        {
            grid[2][1]=p1;
        }
        else { printf("position already occupied,re-enter position"); goto l0;}
    }
     else   if(pos==9)
    {
        if(grid[2][2]=='_')
        {
            grid[2][2]=p1;
        }
        else { printf("position already occupied,re-enter position "); goto l0;}
    }
    else
    {
        printf("Invalid position,re-enter position ");
        goto l0;
    }
}
