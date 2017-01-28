//
//  main.c
//  Midterm1
//
//  Created by sin on 2017/01/26.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>
void foo(int*);

int main(int argc, const char * argv[]) {
    
    int i = 10, *p = &i;
    printf("%d\n", *p);
    foo(p++);
    
    return 0;
}

void foo(int *p){
    printf("%d\n", *p);
}
