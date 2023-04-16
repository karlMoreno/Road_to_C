#include <stdio.h>
#include <string.h>

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

// void testPrint(void) {
//     printf("%s\n",levelsArray[0][7]);

// }

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



int main() {

    printAllLevels();
    //testPrint();

    return (0);
}