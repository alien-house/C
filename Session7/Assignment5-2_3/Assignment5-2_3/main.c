//
//  main.c
//  Assignment5-2_3
//
//  Created by sin on 2017/01/25.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char word1[] = "World";
    
    printf("The beginning address of the array is at address%p\n",word1);
    printf("W is at address %p\n",&(word1[0]));
    printf("O is at address %p\n",&(word1[1]));
    printf("R is at address %p\n",&(word1[2]));
    printf("L is at address %p\n",&(word1[3]));
    printf("D is at address %p\n",&(word1[4]));
    
    int numbers[] = {10, 20, 30, 40};
    printf("The beginning address of the array is at address%p\n", numbers);
    printf("10 is at address %p\n",&( numbers [0]));
    printf("20 is at address %p\n",&( numbers [1]));
    printf("30 is at address %p\n",&( numbers [2]));
    printf("40 is at address %p\n",&( numbers [3]));
    
    
    
    
    
    return 0;
}
