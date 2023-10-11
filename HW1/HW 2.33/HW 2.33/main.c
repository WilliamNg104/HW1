//
//  main.c
//  HW 2.33
//
//  Created by William Ng on 2023/10/10.
//

#include <stdio.h>
#include <stdlib.h>
int main(void){
    int miles;

    int gasCost;

    int mpg;

    int parkFee;

    int tolls;

    int total;


    printf( "%s", "Please enter the total miles driven per day: " );

    scanf( "%d", &miles );



    printf( "%s", "Please enter the cost per gallon of gasoline: " );

    scanf( "%d", &gasCost );

    


     printf( "%s", "Please enter average miles per gallon: " );

     scanf( "%d", &mpg );

    

     printf( "%s", "Please enter the parking fees per day: " );

     scanf( "%d", &parkFee );



     printf( "%s", "Please enter the tolls per day: " );

     scanf( "%d", &tolls );


     total = tolls + parkFee + ( miles / mpg ) * gasCost;

     printf( "Your daily cost of driving to work is $%d\n", total );

    }
