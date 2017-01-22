//
//  main.c
//  Challenge6_1
//
//  Created by sin on 2017/01/21.
//  Copyright © 2017年 shinji. All rights reserved.
//

/*
 - Write a program in C that receives as input a height in centimeters.
 - The program will then calculate and display the following:
   - The height in feet and inches
*/


#include <stdio.h>

void printTranstaleToInches(float height);

int main(int argc, const char * argv[]) {
    
    float height =  162;
//    printf("Tell me your height(in centimeter)");
//    scanf("%f", &height);
    printTranstaleToInches(height);
    
    return 0;
}

void printTranstaleToInches(float height){
    float eInch = 0.393701;
    float inch = height * eInch;
    float feet = inch / 12;
    int feetInt = feet;
    float fInch = feet - feetInt;
    int pInch = fInch * 1000;
    
    printf("Your height is %d'%d\"", feetInt, pInch);
    printf("\n");
    
}


