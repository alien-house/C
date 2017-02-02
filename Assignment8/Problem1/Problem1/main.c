//
//  main.c
//  Problem1
//
//  Created by sin on 2017/01/31.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void searchBigNum(void);

int main(int argc, const char * argv[]) {
    searchBigNum();
    return 0;
}

void searchBigNum(void){
    
    int num = 0;
    int *ptr;
    static int numMax = 0;
    printf("enter some positive numbers:");
    scanf("%d",&num);
    if(num <= 0){
        printf("stop accepting \n");
        free(ptr);
        exit(0);
    }else{
        ptr = (int*) malloc(num * sizeof(int));
        if(ptr == NULL){
            printf("Memory can not be allocated\n");
            exit(1);
        }
        if(numMax < num){
            numMax = num;
        }
        ptr[0] = numMax;
        printf("%d \n",ptr[0]);
    }
    searchBigNum();
}
