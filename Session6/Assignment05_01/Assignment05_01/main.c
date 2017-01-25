//
//  main.c
//  Assignment05_01
//
//  Created by sin on 2017/01/24.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>
// Problem1
void printArray(int array[]);

int main(int argc, const char * argv[]) {
    // Good programmers is always doing initialize.
    /* ----------------------- */
    // Problem1
    /* ----------------------- */
    // printf( "arrayの要素数 %lu\n", sizeof array/sizeof(int) );
    int array[] = {4,6,8,9,7};
    printArray(array);
    return 0;
}

/* ======================= */
// Problem 1
/* ======================= */
void printArray(int array[]){
    printf("==========================\n");
    printf("Problem 1 \n");
    printf("==========================\n");
    for (int i = 0; i < 5; i++) {
        printf("array[%d]: %d \n",i,array[i]);
    }
    printf("\n");
}
