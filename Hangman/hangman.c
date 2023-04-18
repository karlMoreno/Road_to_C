#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int levelsArrayLevels = 7;
int levelRows = 8;
int levelColumns = 9;
char levelsArray[7][8][9] = { //figure out why i need that extra space
    {
        "  +---+",
        "  |   |",
        "      |",
        "      |",
        "      |",
        "      |",
        "=========",
        "\n"
    },
    {
        "  +---+",
        "  |   |",
        "  O   |",
        "      |",
        "      |",
        "      |",
        "========="
    },
    {
        "  +---+",
        "  |   |",
        "  O   |",
        "  |   |",
        "      |",
        "      |",
        "========="
    },
    {
        "  +---+",
        "  |   |",
        "  O   |",
        " [|   |",
        "      |",
        "      |",
        "=========",
        "\n"
    },
    {
        "  +---+",
        "  |   |",
        "  O   |",
        " [|]  |",
        "      |",
        "      |",
        "=========",
        "\n"
    },
    {
        "  +---+",
        "  |   |",
        "  O   |",
        " [|]  |",
        " |    |",
        "      |",
        "=========",
        "\n"
    },
    {
        "  +---+",
        "  |   |",
        "  O   |",
        " [|]  |",
        " | |  |",
        "      |",
        "=========",
        "\n"
    }
};


void printAllLevels(void) {
    for (int level = 0; level < levelsArrayLevels; level++){
        for(int row = 0; row < levelRows; row++) {
            // printf("the level: %d and row: %d\n", level,row);
            printf("%s\n",levelsArray[level][row]);
            // for(int column = 0; column < levelColumns; column++){
            // }
        }
    }
    
}


//For printing whole word despite spaces use %[^\n] in scanf
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

char checkGuess (char word[], int lengthOfWord, char guess) {
    for (int letterPlace = 0; letterPlace < lengthOfWord; letterPlace++){
        if (word[letterPlace] == guess){
            return guess;
        } else{
            printf("Try again");
        }
    }
}

char stringToArray (char userInput[], int lengthOfWord){

}



int main() {
    const int MAX_LENGTH = 100;
    char user_input[MAX_LENGTH];
    char char_array[MAX_LENGTH];
    int levelCounter = 0;
    int wrongCounter = levelCounter;
    bool endGame = false;
    int lengthOfWord;

    printf("Welcome to hangman");
    // print level 0

    // ask for user to enter a word

    // turn word from string into char array

    // begin game

    // print level 0, blank word, number of tries

    // ask for user to guess by entering a single word

    // check guess with word and return if right or not

    //if right then level stays the same, char appears in blank word, number of tries also stays the same

    //if wrong level increases, number of tries decrease, blank word remains the same 
    //perhaps I should put letter they have tried

    //if the guess the whole word then end game is true

    //if they get too many wrong tries then end game is true

    //print Game Over in ascii


    while(endGame == false){
    //testPrint();

    return (0);
}