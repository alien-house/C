//
//  main.c
//  Problem5_08
//
//  Created by sin on 2017/02/01.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int* p = (int *)2;
    int* q = (int *)3;
    printf("%d", p + q);
    
    return 0;
}

/* =================== */
/* Answer              */
/* =====================
 
 d) Compile time error
 
 
 [Error]
 Invaild opreands to binary expression(int * and int *)
 
 [Result]
 ...?
 
 */
