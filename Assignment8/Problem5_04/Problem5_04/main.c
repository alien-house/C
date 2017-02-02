//
//  main.c
//  Problem5_04
//
//  Created by sin on 2017/02/01.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>
#define foo(m, n) m ## n

int main(int argc, const char * argv[]) {
    printf("%s\n", foo(k, l));
    return 0;
}


/* =================== */
/* Answer              */
/* =====================
 
 d) Undefined behaviour
 
 Use of undeclared identifier 'kl'
 
 */

