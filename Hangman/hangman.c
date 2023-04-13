#include <stdio.h>
#include <string.h>

int levelsArrayLevels = 7;
int levelRows = 7;
int levelColumns = 9;
char levelsArray[7][7][9] = {
    {
        "  +---+",
        "  |   |",
        "      |",
        "      |",
        "      |",
        "      |",
        "========="
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
        "========="
    },
    {
        "  +---+",
        "  |   |",
        "  O   |",
        " [|]  |",
        "      |",
        "      |",
        "========="
    },
    {
        "  +---+",
        "  |   |",
        "  O   |",
        " [|]  |",
        " |    |",
        "      |",
        "========="
    },
    {
        "  +---+",
        "  |   |",
        "  O   |",
        " [|]  |",
        " | |  |",
        "      |",
        "========="
    }
};


void printAllLevels(void) {
    for(int i = 0; i < levelsArrayLevels; i++){
        for (int j =0; j < levelRows; j++){
            printf("%s\n",levelsArray[i][j]); //%s type for string? well for char really
        }
        // Add a newline character after all the rows of a level have been printed
        printf("\n");
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