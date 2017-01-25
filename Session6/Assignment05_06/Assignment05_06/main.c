//
//  main.c
//  Assignment05_06
//
//  Created by sin on 2017/01/24.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>
// Problem6
int returnArraySearch(int n[], int s);

int main(int argc, const char * argv[]) {
    
    /* ----------------------- */
    // Problem6
    /* ----------------------- */
    int array[] = {4,6,8,9,7};
    int snum = returnArraySearch(array, 7);
    printf("The returned value is %d \n",snum);
    printf("\n");
    
    return 0;
}

/* ======================= */
// Problem 6
/* ======================= */
int returnArraySearch(int n[], int s){
    printf("==========================\n");
    printf("Problem 6 \n");
    printf("==========================\n");
    int fnum = 0;
    for (int i = 0; i < 5; i++) {
        if(n[i] == s){
            fnum = n[i];
        }
    }
    if(fnum){
        printf("The found number is %d \n",fnum);
    }else{
        fnum = -1;
        printf("The number is no found\n");
    }
    return fnum;
}


