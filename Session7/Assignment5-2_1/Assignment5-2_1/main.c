//
//  main.c
//  Assignment5-2_1
//
//  Created by sin on 2017/01/25.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>

void manyTypesPointer(void);


int main(int argc, const char * argv[]) {
    manyTypesPointer();
    return 0;
}


void manyTypesPointer(void){
    //(1)(2)
    int   numberInt = 5;
    char  textChar = '*';
    long  numberLong = 64555454;
    float numberFloat = 9018.1234;
    
    //(3)
    int*   numberIntPtr;
    char*  textCharPtr;
    long*  numberLongPtr;
    float* numberFloatPtr;
    
    //(4)
    numberIntPtr   = &numberInt;
    textCharPtr    = &textChar;
    numberLongPtr  = &numberLong;
    numberFloatPtr = &numberFloat;
    
    //(5)
    printf("Before Change \n");
    printf("============================ \n");
    printf("numberInt's address is : %p \n", numberIntPtr);
    printf("textChar's address is : %p \n", textCharPtr);
    printf("numberLong's address is : %p \n", numberLongPtr);
    printf("numberFloat's address is : %p \n", numberFloatPtr);
    printf("\n");
    
    //(6)
    printf("numberInt from pointer is : %d \n", *numberIntPtr);
    printf("textChar from pointer is : %c \n", *textCharPtr);
    printf("numberLong from pointer is : %ld \n", *numberLongPtr);
    printf("numberFloat from pointer is : %f \n", *numberFloatPtr);
    printf("\n");
    
    printf("After Change \n");
    printf("============================ \n");
    *numberIntPtr   = 90;
    *textCharPtr    = 'A';
    *numberLongPtr  = 19900323;
    *numberFloatPtr = 3334556.6097;
    printf("numberInt's address is : %p \n", numberIntPtr);
    printf("textChar's address is : %p \n", textCharPtr);
    printf("numberLong's address is : %p \n", numberLongPtr);
    printf("numberFloat's address is : %p \n", numberFloatPtr);
    printf("\n");
    printf("numberInt from pointer is : %d \n", *numberIntPtr);
    printf("textChar from pointer is : %c \n", *textCharPtr);
    printf("numberLong from pointer is : %ld \n", *numberLongPtr);
    printf("numberFloat from pointer is : %f \n", *numberFloatPtr);
    printf("\n");
    
    
    
}
