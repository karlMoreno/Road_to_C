#include <stdio.h>
#include <string.h>


char level1[7][9] = {
        "  +---+",
        "  |   |",
        "      |",
        "      |",
        "      |",
        "      |",
        "========="
    };

char level2[7][9] = {
        "  +---+",
        "  |   |",
        "  O   |",
        "      |",
        "      |",
        "      |",
        "========="
    };

    char level3[7][9] = {
        "  +---+",
        "  |   |",
        "  O   |",
        "  |   |",
        "      |",
        "      |",
        "========="
    };

    char level4[7][9] = {
        "  +---+",
        "  |   |",
        "  O   |",
        " [|   |",
        "      |",
        "      |",
        "========="
    };

    char level5[7][9] = {
        "  +---+",
        "  |   |",
        "  O   |",
        " [|]  |",
        "      |",
        "      |",
        "========="
    };

    char level6[7][9] = {
        "  +---+",
        "  |   |",
        "  O   |",
        " [|]  |",
        " |    |",
        "      |",
        "========="
    };

    char level7[7][9] = {
        "  +---+",
        "  |   |",
        "  O   |",
        " [|]  |",
        " | |  |",
        "      |",
        "========="
    };

void printLevel1 (void) {
    for(int i = 0; i < 7; i++){
        printf("\n%s",level1[i]);
    }
} 

void printLevel2 (void) {
    for(int i = 0; i < 7; i++){
        printf("\n%s",level2[i]);
    }
} 

void printLevel3 (void) {
    for(int i = 0; i < 7; i++){
        printf("\n%s",level3[i]);
    }
} 

void printLevel4 (void) {
    for(int i = 0; i < 7; i++){
        printf("\n%s",level4[i]);
    }
} 

void printLevel5 (void) {
    for(int i = 0; i < 7; i++){
        printf("\n%s",level5[i]);
    }
} 

void printLevel6 (void) {
    for(int i = 0; i < 7; i++){
        printf("\n%s",level6[i]);
    }
} 

void printLevel7 (void) {
    for(int i = 0; i < 7; i++){
        printf("\n%s",level7[i]);
    }
}

void blankStr(char* str) {
    int len = strlen(str);
    char space = ' ';
    for(int i = 0; i < len; i++){
        if(str[i] == space){
            printf("%c",space);
        }else{
            printf("_");
        }
    }
    printf("\n");
}

void printLevel(char[],char[]){

}

int main() {
    //welcome to game
    printf("Welcome to Hangman!!!\n");
    // print gallows
    printLevel1();
    printf("\n"); //newline

    // print insert word // maybe make it not be able to be seen???
    char input[50];
    printf("Enter the word you want someone to guess: ");
    scanf("%[^\n]",input); //for spaces
    printf("\n"); //newline
    blankStr(input);


    //I need to print the level and word with tries every time 
    // i think i will put the levels in an array and loop through depending on the level
    // need to restructure code and organize the game in code and parts
    //list out all parts in comment next time




    //parse inserted word into _ and spaces

    //array of gallows to be printed if word is wrong
    // _ _ _ _ _ _ _ _ show how many tries you have left

    // also print x for every wrong try



    return (0);
}