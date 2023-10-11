//
//  main.c
//  HW1 2.26
//
//  Created by William Ng on 2023/10/10.
//

#include <stdio.h>
    void findMultiples(int n);
    int main(void){
      int a, b;
      printf("first number : \n");
      scanf("%d", &a);
      printf("second number : \n");
      scanf("%d", &b);
      if(b % a == 0){
        printf("b is a multiple of a");
      }
      return 0;
    }


