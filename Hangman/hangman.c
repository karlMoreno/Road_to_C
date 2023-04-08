#include <stdio.h>

const char hello[] = {'H','e','l','l','o', ' ',
                            'W', 'o','r','l','d', '\0'}; // the characters to print


int main(){
    puts(hello); // write string and new line

    return (0);
}