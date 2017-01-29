//
//  main.c
//  Problem3_6
//
//  Created by sin on 2017/01/28.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i = 10;
    int *p = &i;
    printf("%d \n", *p++);
    
    return 0;
}
