//
//  main.c
//  Problem5_02
//
//  Created by sin on 2017/02/01.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>
void foo();

int main(int argc, const char * argv[]) {
    foo();
    foo();
    
    return 0;
}
void foo(){
    int i = 11;
    printf("%d ", i);
    static int j = 12;
    j = j + 1;
    printf("%d\n", j);
}

/* =================== */
/* Answer              */
/* =====================
 
 b) 11 13 11 14
 
 */
