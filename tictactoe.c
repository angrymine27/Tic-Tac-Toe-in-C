#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
char box[10]={'0','1','2','3','4','5','6','7','8','9'};
void board();
void printxando(int, char);
int winner();
int main(){
    int choice,player=1,i;
    char mark;
    do{
        board();
        player= (player % 2) ? 1: 2;

        printf("Player %d, enter a number: ", player);
        scanf("%d", &choice);

        mark = (player==1) ? 'X' : 'O';
        printxando(choice,mark);

        i=winner();
        player++;


    }while(i == -1);

    board();

    if(i==1)
        printf("Player %d you have won the game",--player);
    else
        printf("<---------Draw--------->");
    return 0;
}
void board(){
    printf("\n\n\tTic Tac Toe\n\n");
    printf("Player 1 (X) -- Player 2 (O)\n\n");
    printf("    |   |   \n");
    printf("%c   |%c  |  %c   \n", box[1], box[2], box[3]);
    printf("____|___|____\n");
    printf("    |   |   \n");
    printf("%c   |%c  |  %c   \n", box[4], box[5], box[6]);
    printf("____|___|____\n");
    printf("    |   |   \n");
    printf("%c   |%c  |  %c   \n", box[7], box[8], box[9]);
    printf("____|___|____\n");
    printf("    |   |   \n");
}

void printxando(int choice, char mark){
    if(choice==1 && box[1]=='1')
        box[1]=mark;
    else if(choice==2 && box[2]=='2')
        box[2]=mark;
    else if (choice==3 && box[3]=='3')
        box[3]=mark;
    else if(choice==4 && box[4]=='4')
        box[4]=mark;
    else if(choice==5 && box[5]=='5')
        box[5]=mark;
    else if(choice==6 && box[6]=='6')
        box[6]=mark;
    else if(choice==7 && box[7]=='7')
        box[7]=mark;
    else if(choice==8 && box[8]=='8')
        box[8]=mark;
    else if(choice==9 && box[9]=='9')
        box[9]=mark;
    else{
        printf("Invalid Value");
    }
}

int winner()
{
    if(box[1]==box[2] && box[2]==box[3])
        return 1;
    else if(box[4]==box[5] && box[5]==box[6])
        return 1;
    else if(box[7]==box[8] && box[8]==box[9])
        return 1;

    else if(box[1]==box[4] && box[4]==box[7])
        return 1;
    else if(box[2]==box[5] && box[5]==box[8])
        return 1;
    else if(box[3]==box[6] && box[6]==box[9])
        return 1;

    else if(box[1]==box[5] && box[5]==box[9])
        return 1;
    else if(box[3]==box[5] && box[5]==box[7])
        return 1;

    else if(box[1]!= '1' && box[2]!= '2' && box[3]!= '3' && box[4]!= '4' && box[5]!= '5' && box[6]!= '6' && box[7]!= '7' && box[8]!= '8' && box[9]!= '9')
        return 0;
    
    else
        return -1;

}