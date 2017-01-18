//
//  main.c
//  FifthProject
//
//  Created by sin on 2017/01/16.
//  Copyright © 2017年 sin. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int num1 = 100;
    int num2 = 293;
    
    if(num1 > num2){
        printf("num1=%d is greater than num2=%d\n", num1, num2);
    }else if(num1 < num2){
        printf("num2=%d is greater than num1=%d\n", num2, num1);
    }else{
        printf("num1=%d is equal to num2=%d\n", num1, num2);
    }
    printf("\n");
    
    return 0;
}
