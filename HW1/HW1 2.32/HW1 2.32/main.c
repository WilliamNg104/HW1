//
//  main.c
//  HW1 2.32
//
//  Created by William Ng on 2023/10/10.
//

#include <stdio.h>
int main()
{
    float height, weight, bmi;
  
    printf("Enter height in meter\n");
    scanf("%f", &height);
  
    printf("Enter weight in kg\n");
    scanf("%f", &weight);
  
    bmi = weight / (height * height);
    printf("Your Body Mass Index(BMI) is %f\n", bmi);
  
    if(bmi < 18.5)
    {
        printf("Your BMI category is: Underweight\n");
    }
    else if(bmi >=18.5 && bmi <=24.9)
    {
        printf("Your BMI category is: Noraml\n");
    }
    else if(bmi >= 25 && bmi <= 29.9)
    {
        printf("Your BMI category is: Overweight\n");
    }
    else if(bmi >= 30)
    {
        printf("Your BMI category is: Obese\n");
    }
    return 0;
}
