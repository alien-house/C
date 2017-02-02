//
//  main.c
//  Problem5_07
//
//  Created by sin on 2017/02/01.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    double *ptr = (double *)100;
    
    ptr = ptr + 2;
    printf("%u", ptr);
    
    return 0;
}




/* =================== */
/* Answer              */
/* =====================
 
 d) 116
 
 
 [Result]
 double is 8bytes.
 8 * 2 = 16
 
 
 */
