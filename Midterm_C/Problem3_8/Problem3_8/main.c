//
//  main.c
//  Problem3_8
//
//  Created by sin on 2017/01/28.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
  
    int x = 4;
    int *p = &x;
    int *k = p++;
//    printf("%d \n", p);
//    printf("%d \n", k);
    int r = p - k;
    printf("%d \n", r);
    
    return 0;
}
