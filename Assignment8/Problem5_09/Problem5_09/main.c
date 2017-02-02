//
//  main.c
//  Problem5_09
//
//  Created by sin on 2017/02/01.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char *s = "hello";
    char *p = s; // *p is 'h'
    printf("%c\t%c", *(p + 1), s[1]);
    // p + 1 is next addres of array
    
    return 0;
}

/* =================== */
/* Answer              */
/* =====================
 
 d) e e
 
 [Result]
 Becase char is 1bytes
 
 */
