//
//  main.c
//  Midterm1_38
//
//  Created by sin on 2017/01/26.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>

void foo(int *p);

int main(int argc, const char * argv[]) {
    int i = 97;
    int *p = &i;
//    printf("p is %p \n", &i);
    foo(&i);
//    printf("p is %p \n", p);
    printf("%d \n", *p);//  answer is 97... why is not 2?
}

void foo(int *p){
//    printf("p is %d \n", *p);
    int j = 2;
    p = &j; // アドレス自体を変更しているからか...中身は変わってない。影響を受けない
//    *p = j; //　&iの先を変更するから、変えることができる
    printf("%d \n", *p);
}

