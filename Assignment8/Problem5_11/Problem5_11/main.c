//
//  main.c
//  Problem5_11
//
//  Created by sin on 2017/02/01.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char a[2][6] = {"hello", "hi"};
    printf("%s", *a + 1);
    return 0;
}

/* =================== */
/* Answer              */
/* =====================
 
 c) ello
 
 [Result]
 *a is first element of arrray.
 
 
 */
