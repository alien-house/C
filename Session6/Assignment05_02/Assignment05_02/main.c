//
//  main.c
//  Assignment05_02
//
//  Created by sin on 2017/01/24.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>
// Problem2
void inputPrintArray(void);

int main(int argc, const char * argv[]) {
    
    /* ----------------------- */
    // Problem2
    /* ----------------------- */
    inputPrintArray();
    
    return 0;
}

/* ======================= */
// Problem 2
/* ======================= */
void inputPrintArray(void){
    int n = 5;
    printf("==========================\n");
    printf("Problem 2 \n");
    printf("==========================\n");
    printf("Please input 5 numbers\n");
    int array[n];
    for (int i = 0; i < n; i++) {
        printf("%d number?:",i+1);
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("number original order: %d \n",array[i]);
    }
    for (int i = n-1; i >= 0; i--) {
        printf("number reverse order: %d \n",array[i]);
    }
    printf("\n");
}
