//
//  main.c
//  Problem1
//
//  Created by sin on 2017/01/28.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>

void swap(char *word1, char *word2);

int main(int argc, const char * argv[]) {
    
    char word1 = '*';
    char word2 = '+';
    swap(&word1, &word2);
    
    return 0;
}

void swap(char *word1, char *word2){
    int tw = *word1;
    *word1 = *word2;
    *word2 = tw;
    printf("word1:%c word2:%c \n",*word1, *word2 );
}
