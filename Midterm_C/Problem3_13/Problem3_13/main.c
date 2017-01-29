//
//  main.c
//  Problem3_13
//
//  Created by sin on 2017/01/28.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>
void foo(){
    return 1;
}
void main() {
    int x = 0;
    x = foo();
    printf("%d", x);
    return 0;
}
