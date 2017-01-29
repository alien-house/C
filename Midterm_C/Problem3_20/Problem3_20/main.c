//
//  main.c
//  Problem3_20
//
//  Created by sin on 2017/01/28.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[3] = {1, 2, 3};
    int *p = a;
    int **r = &p;
    printf("%p %p", *r, a);
    return 0;
}
