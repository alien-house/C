//
//  main.c
//  Midterm1_37
//
//  Created by sin on 2017/01/26.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>

void foo(float *);

int main(int argc, const char * argv[]) {
    int i = 10, *p = &i;
    foo(&i); // it's integer but, function is declared float.
    return 0;
}

void foo(float *p){
    printf("%f\n", *p);
}
