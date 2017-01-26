//
//  main.c
//  Assignment5-2_2
//
//  Created by sin on 2017/01/25.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char  word1[] = "Hello";
    char* word2   = "World"; // can assign string
    
    printf("word 1 is %s\n", word1);
    printf("word 2 is %s\n", word2);
    printf("\n");
    
    word2 = "I am not world";
    printf("word 1 is %s\n", word1);
    printf("word 2 is %s\n", word2);
    printf("\n");
    
    word2 = word1;
    printf("word 1 is %s\n", word1);
    printf("word 2 is %s\n", word2);
    
//    word1 = word2;
    printf("word 1 is %s\n", word1);
    printf("word 2 is %s\n", word2);
    
    
    //=====================
    // What did I learn
    //=====================
    /*
     If I declare as pointer(add *), I can assign string.
     
     You can assign an array to a pointer variable.
     but, you can't assign a pointer varibale to an array.
    */
    
    
    
    return 0;
}
