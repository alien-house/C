//
//  main.c
//  Problem3_16
//
//  Created by sin on 2017/01/28.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>
void m();
void n();

int x = 5;

void main() {
    int x = 3;
    m();
    printf("%d", x);
}
void m(){
    x = 8;
    n();
}
void n(){
    printf("%d", x);
}
