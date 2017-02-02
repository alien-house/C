//
//  main.c
//  Problem5_15
//
//  Created by sin on 2017/02/01.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>
struct p
{
    struct p *next;
    int x;
};

int main(int argc, const char * argv[]) {
    struct p* p1 = malloc(sizeof(struct p));
    p1->x = 1;
    p1->next = malloc(sizeof(struct p));
    printf("%d\n", p1->next->x);
    
    return 0;
}

/* =================== */
/* Answer              */
/* =====================
 
 d) 0
 
 [Result]
 
 
 */
