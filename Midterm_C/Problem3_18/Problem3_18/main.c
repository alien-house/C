//
//  main.c
//  Problem3_18
//
//  Created by sin on 2017/01/28.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>
void m(int *p, int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main(int argc, const char * argv[]) {
    int a = 6, b = 5;
    m(&a, &b);
    printf("%d %d\n", a, b);
    
    return 0;
}
