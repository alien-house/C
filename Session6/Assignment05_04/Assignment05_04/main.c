//
//  main.c
//  Assignment05_04
//
//  Created by sin on 2017/01/24.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>
// Problem4
float returnArrayFloat(float n[]);

int main(int argc, const char * argv[]) {
    /* ----------------------- */
    // Problem4
    /* ----------------------- */
    float arrayFloat[] = {23.4,12.53,253.111,42.5,76.7};
    float betnNum = returnArrayFloat(arrayFloat);
    printf("the difference is %.3f \n",betnNum);
    printf("\n");
    return 0;
}

/* ======================= */
// Problem 4
/* ======================= */
float returnArrayFloat(float n[]){
    printf("==========================\n");
    printf("Problem 4 \n");
    printf("==========================\n");
    float maxmun = 0;
    float minmun = n[0];
    for (int i = 0; i < 5; i++) {
        if(maxmun < n[i]){
            maxmun = n[i];
        }
        if(minmun > n[i]){
            minmun = n[i];
        }
    }
    printf("maximum is %.3f \n",maxmun);
    printf("minimum is %.3f \n",minmun);
    return maxmun - minmun;
}
