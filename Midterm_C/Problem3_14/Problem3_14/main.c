//
//  main.c
//  Problem3_14
//
//  Created by sin on 2017/01/28.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>
int *m();

void main() {
    int *k = m();
    printf("hello ");
    printf("%d", k[0]);
}
int *m(){
    int a[2] = {5, 8};
    return a;
}

