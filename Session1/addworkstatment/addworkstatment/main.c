//
//  main.c
//  addworkstatment
//
//  Created by sin on 2017/01/18.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    /* ======================= */
    // 1/18
    /* ======================= */
    int num1 = 10; //declaration statement
    
    num1++; //unary
    
    num1 = 6; // assignment statement
    int num2 = 10;
    
    int sum = num1 + num2; // binary operation
    printf("sum of num1 and num2 is %d\n", sum);
    

    
    // same 3
    sum = sum + 1;
    sum++;
    sum+=10;
    
    int num3 = ++ num1 + num2 * sum++;
    printf("%d\n", num3);
    
    // similar 2 way
    // int sum3 = sum++;
    // int num3 = sum;
    // num3+;;
    
    for (int i = 0; i<10;i--) {
        printf("%d\n", i);
    }
    
    
    
    printf("Hello, World!+%d\n",num1);
    
    
    
    
    
    return 0;
}
