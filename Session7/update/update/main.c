//
//  main.c
//  update
//
//  Created by sin on 2017/01/25.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>
int update(int* number1, int* number2);

//* : アンドサイン ampersand
// &number = address of the variable.
// *number = The value of the address which is stored in the variable number.

int main(int argc, const char * argv[]) {
    
    int num1 = 30;
    int num1 = 40;
    
    update(&num1, &num2);
    int result = num1 + num2;
    printf("%d", result);
    
    return 0;
}


int update(int* number1, int* number2){
    *number1 = *number1 + 10; // go to number1(3) and * means 30!
    *number2 = *number2 + 20;
    return *number1;
}
