//
//  main.c
//  Problem3
//
//  Created by sin on 2017/01/28.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>
void foo(int *p2);

int main(int argc, const char * argv[]) {
    
    int num1 = 32;
    int *p1;
    p1 = &num1;
    printf("%d ", num1++);
    foo(&num1);
    printf("%d ", *p1++);
    
    return 0;
}

void foo(int *p2){
    int num2 = 23;
    p2 = &num2;
    printf("%d ", *p2);
}

