//
//  main.c
//  Problem5_13
//
//  Created by sin on 2017/02/01.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

struct p{
    struct p *next;
    int x;
};

int main(int argc, const char * argv[]) {
    struct p *p1 = (struct p*) malloc(sizeof(struct p));
    p1->x = 1;
    p1->next = (struct p*) malloc(sizeof(struct p));
    
    
    return 0;
}

/* =================== */
/* Answer              */
/* =====================
 
 c) free(p1);
 
 [Result]
 
 If there is a lot of struct p, it impossible to release.
 
 */
