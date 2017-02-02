//
//  main.c
//  Problem3
//
//  Created by sin on 2017/02/01.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int n=10;
    int a[n], i=0;
    for(int i=0; i<n; i++){
        a[i] = i+1;
    }
    int* b = (int*) malloc (2*n*sizeof(int));
    b = a;
    
    printf("%p",b);
    
    return 0;
}

/*
 In the line of 19, its allocated memory for *b,
 but after that, it need to release, using free statement.
 */
