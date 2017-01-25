//
//  main.c
//  Assignment05_05
//
//  Created by sin on 2017/01/24.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>
// Problem5
void printArrayOddEven(int n[]);

int main(int argc, const char * argv[]) {
    /* ----------------------- */
    // Problem5
    /* ----------------------- */
    int array[] = {4,6,8,9,7};
    printArrayOddEven(array);
    
    return 0;
}

/* ======================= */
// Problem 5
/* ======================= */
void printArrayOddEven(int n[]){
    printf("==========================\n");
    printf("Problem 5 \n");
    printf("==========================\n");
    int oddNum  = 0;
    int evenNum = 0;
    for (int i = 0; i < 5; i++) {
        if(n[i] % 2){
            evenNum++;
            printf("even %d \n",n[i]);
        }else{
            oddNum++;
            printf("odd %d \n",n[i]);
        }
    }
    printf("total even numbers is %d \n",evenNum);
    printf("total odd numbers is %d \n",oddNum);
    printf("\n");
}
