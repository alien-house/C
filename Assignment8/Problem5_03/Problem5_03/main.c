//
//  main.c
//  Problem5_03
//
//  Created by sin on 2017/02/01.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>
void func();

int main(int argc, const char * argv[]) {
    
    static int b = 20;
    func();
    
    return 0;
}

void func(){
    static int b;
    printf("%d", b);
}


/* =================== */
/* Answer              */
/* =====================

 a) Output will be 0
 
 [Result]
 static変数はそのブロック内でしか使用できない？

*/
