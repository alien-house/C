//
//  main.c
//  Midterm1_40
//
//  Created by sin on 2017/01/26.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>

void foo(int *const *p);

int main(int argc, const char * argv[]) {
    int i = 11;
    int *p = &i;
    foo(&p); // ポインタのアドレス(pのアドレス)
    printf("%d ", *p); // 11
    return 0;
}
void foo(int *const *p){
    int j = 10;
    *p = &j;
    printf("%d ", **p);
}
