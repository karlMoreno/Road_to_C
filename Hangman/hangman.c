#include <stdio.h>

char theData[5] = "1234"; // some data to play with

char* allChange; // Pointer and value can change 

const char* dataConst = "abc"; // char const, pointer not

char* const ptrConst = theData; // char var, pointer not

const char* const allConst = "abc"; // nobody change nothing

int main() {
    char otherData[5] = "abcd"; // some other data

    allChange = otherData; // change pointer
    *allChange = 'x'; //change data

    dataConst = otherData; //change pointer
    // *dataConst = 'x'; // illegal to change data

    //ptrConst = otherData //illegal to change data
    *ptrConst = 'x'; // change data 

    //all const = otherData; //Illegal to change pointer
    // *allConst = 'x';  //Illegal to change data


    

    return (0);
}

