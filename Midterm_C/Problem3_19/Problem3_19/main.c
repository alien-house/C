//
//  main.c
//  Problem3_19
//
//  Created by sin on 2017/01/28.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int k = 5;
    int *p = &k;
    int **m = &p;
    **m = 6;
    printf("%d\n", k);
    return 0;
}
