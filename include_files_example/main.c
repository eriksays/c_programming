#include <stdio.h>
#include "libraries/custom_math.h"

int main() {

    int x = 1;
    int y= 3;
    printf("%d + %d = %d\n", x, y, add(x,y));
    printf("%d = %d = %d\n", x, y, sub(x,y));
    
    return 0;
}

