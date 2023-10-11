//
//  main.c
//  HW 2.23
//
//  Created by William Ng on 2023/10/11.
//

#include <stdio.h>

int main()
{
    int minno,maxno,a,b,c;
    printf("Enter any three numbers");
    scanf("%d%d%d",&a,&b,&c);
    minno=a;
    maxno=a;
    if(minno>a) //checking 1st and 2nd number
         minno=a;
      else if(maxno<a)
         maxno=a;
      if(minno>b) //checking 1st and 3rd number
         minno=b;
      else if(maxno<b)
         maxno=b;
    if(minno>c) //checking 2nd and 3rd number
       minno=c;
    else if(maxno<c)
       maxno=c;
    printf("Largest number from the given 3 numbers is:%d\n",maxno);
    printf("Smallest numbers from the given 3 numbers is:%d",minno);
    return 0;
}
