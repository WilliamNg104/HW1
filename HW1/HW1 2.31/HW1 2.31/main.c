//
//  main.c
//  HW1 2.31
//
//  Created by William Ng on 2023/10/10.
//

#include <stdio.h>
int main()
{
    int x;
    /* Print column names */
    printf("Number\tSquare\tCube\n");
    printf("=========================\n");

    for(x=0; x<=10; x++)
        printf("%d\t%d\t%d\n", x, x*x, x*x*x);
    
    return 0;
}
