//
//  main.c
//  Assignment05_03
//
//  Created by sin on 2017/01/24.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>
// Problem3
int* inputPrintArrayInt(int n[]);
void getDateArray(int date[3]);

int an[5] = {6,6,6,6,6};

int main(int argc, const char * argv[]) {
    int array[5] = {4,6,8,9,7};
    int *temp = inputPrintArrayInt(array);
    for (int i = 0; i < 5; i++) {
        printf("an[%d]: %d \n", i, an[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("%d\n",temp[i]);
    }
    
    // How to send back array
    // (1) pointer of array
    int date[3];
    getDateArray(date);
    printf("%d年%d月%d日 \n", date[0], date[1], date[2]); // 2016年2月29日
        
    return 0;
}


int* inputPrintArrayInt(int n[]){
    printf("==========================\n");
    printf("Problem 3 \n");
    printf("==========================\n");
    for (int i = 0; i < 5; i++) {
        an[i] = n[i];
        printf("numbers[%d]: %d \n", i, an[i]);
    }
    printf("\n");
    return an;
}

void getDateArray(int date[3]) {
    date[0] = 2016;
    date[1] = 2;
    date[2] = 29;
}
