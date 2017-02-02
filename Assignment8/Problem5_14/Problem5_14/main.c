//
//  main.c
//  Problem5_14
//
//  Created by sin on 2017/02/01.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>
struct p{
    struct p *next;
    int x;
};

int main(int argc, const char * argv[]) {
    
    struct p *p1 = calloc(1, sizeof(struct p));
    p1->x = 1;
    p1->next = calloc(1, sizeof(struct p));
    
    printf("%d\n", p1->next->x);
    
    return 0;
}

/* =================== */
/* Answer              */
/* =====================
 
 d) 0
 
 [Result]
 
 入れ続けることができる？
 でも次の要素を代入して何になるのだろう？
 
 */
