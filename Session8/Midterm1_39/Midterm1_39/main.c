//
//  main.c
//  Midterm1_39
//
//  Created by sin on 2017/01/26.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>

void foo(int **p);

int main(int argc, const char * argv[]) {
    int i = 97,
    *p = &i;
    foo(&p);
    printf("%d ", *p);
    return 0;
}

void foo(int **p){
    int j = 2;
    *p = &j; //ここは中身を変えてしまっている.
    printf("%d ", **p);
}
