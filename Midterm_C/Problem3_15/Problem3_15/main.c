//
//  main.c
//  Problem3_15
//
//  Created by sin on 2017/01/28.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>
int *m();

int main(int argc, const char * argv[]) {
    
    int k = m();
    printf("%d", k);
    
    return 0;
}
int *m(){
    int a[2] = {5, 8};
    return a;
}

