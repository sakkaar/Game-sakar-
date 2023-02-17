// scisior Paper Rock
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int scisiorPaperRock(char you, char comp){
    // returns 1 if you win, -1 if you lose and 0 if draw
    // Condition for draw
    // Cases covered:
    // ss
    // rr
    // pp
    if(you == comp){
        return 0;
    }

    // Non-draw conditions
    
    
// sr
    if(you=='s' && comp=='r'){
        return -1;
    }
// rs
    else if(you=='r' && comp=='s'){
        return 1;
    }


//sp
    if(you=='s' && comp=='p'){
        return 1;
    }
//ps    
    else if(you=='p' && comp=='s'){
        return -1;
    }

//rp
    if(you=='r' && comp=='p'){
        return -1;
    }
//pr    
    else if(you=='p' && comp=='r'){
        return 1;
    }

}
int main(){
    char you, comp;
    srand(time(0));     // generate random number
    int number = rand()%100 + 1;

    if(number<33){
        comp = 's';
    }
    else if(number>33 && number<66){
        comp='w';
    }
    else{
        comp='g';
    }
    
    printf("Enter 's' for scissior, 'p' for paper and 'r' for rock:\n");
    scanf("%c", &you);
    int result =scisiorPaperRock (you, comp);
    
    if(result ==0){
        printf("Game draw!\n");
    }
    else if(result==1){
        printf("You win!\n");
    }
    else{
        printf("You Lose!\n");
    }
    printf("You chose %c and computer chose %c. ", you, comp);
    return 0;
}



