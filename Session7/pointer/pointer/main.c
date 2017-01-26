//
//  main.c
//  pointer
//
//  Created by sin on 2017/01/25.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int number = 5;
    int* addressOfNumber = &number; // address
    int* address;
    
    address = &number;
    // &number : address of the variable in the memory
    //&pointer;// or &&number; // address of address
    
    int** pointer2pointer; // 1001
    &pointer2pointer; // 1021
    
    int* pointer;
    *pointer;
    *(&pointer);
    
//    **(&&number); // 5
    
    
    /*
    0
    ...
    1024
    */
    
    //&number : & is pointed an address
    
    printf("the address is %p", &number);
    // %p : Hex Decimal
    
    int array[4] = {10,20,30,40}; // 4 * 4 = 16 Bytes
    char wond[4]; // char is 1 Byte
    
    printf("%p",array); // or &array[0]
    printf("%p",&(array[1]));
    printf("%p",&(array[2]));
    
    *(&array[2]); // 30 ナンバーが取れる
    
    printf("%p",*(&array) + 10);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    printf("Hello, World!\n");
    return 0;
}
