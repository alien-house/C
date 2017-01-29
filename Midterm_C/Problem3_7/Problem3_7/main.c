//
//  main.c
//  Problem3_7
//
//  Created by sin on 2017/01/28.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int x = 4, y, z;
    y = --x;
    z = x--;
    printf("%d%d%d", x, y, z);
    
    return 0;
}
