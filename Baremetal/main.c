#include <stdio.h>

// // WARNING: do not change this without changing colorNames
// enum colorType {
//     COLOR_RED,
//     COLOR_BLUE,
//     COLOR_GREEN
// };
// //Warning Do not changing this without changing colorTypes
// static const char* const colorNames = {
//     "COLOR_RED","COLOR_BLUE","COLOR_GREEN"
// };



// This is the beginning of a clever trick to define both the values and
// the names for the enum colorType. The list below will be used twice,
// once to generate the value and once to generate names.


#define COLOR_LIST                         \  // \ tells processor that the line is continued
    DEFINE_ITEM(COLOR_RED),                     \
    DEFINE_ITEM(COLOR_BLUE),                    \
    DEFINE_ITEM(COLOR_GREEN)


//define DEFINE_ITEM so it generates the actual values for the enum
#define DEFINE_ITEM(X) X
enum colorType{
    COLOR_LIST
};
#undef DEFINE_ITEM

//define DEFINE_ITEM so it generates the names of the enum
#define DEFINE_ITEM(X) #X
static const char* colorNames[] = {
    COLOR_LIST
};
#undef DEFINE_ITEM


int main (){


    return (0);
}