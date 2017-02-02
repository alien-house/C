//
//  main.c
//  Problem5_01
//
//  Created by sin on 2017/02/01.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>
void m();
int main(int argc, const char * argv[]) {
    m();
    m();
    return 0;
}
void m(){
    static int x = 5;
    x++;
    printf("%d", x);
}

/* =================== */
/* Answer              */
/* =====================
 
 a) 6 7
 
 [Result]
 staticで作成すると、その関数内（ブロック内）での値を保持できる。
 
 */
