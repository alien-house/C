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
      &a : 5fbff788 (アドレス)
    
    //　ポインタとは変数のアドレスを記憶する変数。
    
    // How to use
      (1)宣言 int *p;
      (2)値（アドレス）の設定 p = &a; *が付かないことに注意
      (3)使用 *pは「ポインタpの指すアドレスの中身のこと」
    */
    
    /*
     http://www9.plala.or.jp/sgwr-t/c/sec10-2.html
     */
    
    
    int size = 15;
    int *ptr; // When it's declear, just put on *
    ptr = &size; // setting to an address(needed *)
    printf("ptr is : %x \n",ptr);
    printf("*ptr is : %d \n",*ptr); //use the value at the address stored in the pointer. needed *.
    
    int *size2 = 15;
    printf("size2 is : %d \n",size2);
    
    
    
    int data[4];
    int *p = data + 2;
    printf("data is : %d \n",data); // first of array address
    printf("data(p) is : %d \n",p);
    printf("data(*p) is : %d \n",*p);
    
    
//    int array[4] = {34,62,55,43};
//    int *arrayP = array; //arrayの一番はじめのアドレスはそのまま入れてOK
//    int *aP = array + 2; // arrayにそのまま数を足せばアドレスになる
//    printf("array is aP : %d \n",*aP); //使うときは*を忘れずに
//    
//    while (*arrayP != '\0') { // 文字列じゃなくても...\0はあり？
//        printf("array is : %d \n", *arrayP);
//        arrayP++; //そのまま足していけば次の配列へアドレスを進める
//    }
//    
//    //文字列で取るときは char *array..のように*をつける
//    char *charArray[3] = {"abcde","fghij","okiuhl"};
//
//    for (int i = 0; i < 3; i++) {
//        printf("%s\n", charArray[i]);
//    }
    
    
    
    //
//    int sizes[] = {15, 20, 30};
//    int *ptr = sizes;
//    
//    ptr++;
//    ptr--;
//    
    
    
    
    //
    
    
//    int data[] = {15, 20, 30, 45, 60, 80};
//    
//    int *ptr = data;  //ptr points to start of array
//    printf("data[] starts at address %x with value %d\n", ptr, *ptr);
//    
//    //Calculate the length of the array
//    int numElements = sizeof(data) / sizeof(int);
//    printf("There are %d elements in data[]\n", numElements);
//    
//    for(int i=0; i<numElements; i++){
//        printf("Address %x stores value %d\n", ptr, *ptr);
//        ptr++;
//    }

    
    
    
    return 0;
}
