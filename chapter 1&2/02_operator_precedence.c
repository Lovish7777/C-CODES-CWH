#include <stdio.h>
int main()
{
    int x = 4;
    int y = 9;
    printf("value of 3x-8y is: %d\n", 3 * x - 8 * y);
    printf(" value is: %d", 3 * (x - 8 * y));
    printf("\nvalue is %d", 8 * y / 3 * x); // important
                                            /*
                                            8*9/3*4
                                            72/3*4
                                            24*4
                                            96
                                        
                                        
                                            */

    return 0;
}