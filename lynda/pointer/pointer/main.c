//
//  main.c
//  pointer
//
//  Created by sin on 2017/01/22.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a = 123;
    /*
    //メモリ上のある番地（例えば1000番地）に変数aとしての領域を確保し、その領域に 123 を格納する」ということになります。
      a  : 123  (変数)
      &a : 1000 (アドレス)
    
    //　ポインタとは変数のアドレスを記憶する変数。
    
    //使い方
      (1)宣言 int *p;
      (2)値（アドレス）の設定 p = &a; *が付かないことに注意
      (3)使用 *pは「ポインタpの指すアドレスの中身のこと」
    
    */
    
    /*
     http://www9.plala.or.jp/sgwr-t/c/sec10-2.html
     
     */
    
    
    
//    int size = 15;
//    int *ptr;
//    ptr = &size;
//    
//    //Use the value at the address stored in the pointer
//    printf("Address %x contains %d \n", ptr, *ptr);
//    
    
    
    //
//    int sizes[] = {15, 20, 30};
//    int *ptr = sizes;
//    
//    ptr++;
//    ptr--;
//    
    
    
    
    //
    
    
    int data[] = {15, 20, 30, 45, 60, 80};
    
    int *ptr = data;  //ptr points to start of array
    printf("data[] starts at address %x with value %d\n", ptr, *ptr);
    
    //Calculate the length of the array
    int numElements = sizeof(data) / sizeof(int);
    printf("There are %d elements in data[]\n", numElements);
    
    for(int i=0; i<numElements; i++){
        printf("Address %x stores value %d\n", ptr, *ptr);
        ptr++;
    }

    
    
    
    return 0;
}
