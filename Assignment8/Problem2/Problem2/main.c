//
//  main.c
//  Problem2
//
//  Created by sin on 2017/02/01.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int ptr = 0;
    while (ptr <= arr[9]){
        printf("ptr points to %d\n", ptr);
        ptr++; // ptr now points to the next element
    }
    
    return 0;
}

/*
void main (void)
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *ptr = &arr[0];
    while (ptr <= &arr[9])
    {
        printf("ptr points to %d\n", *ptr);
        ptr++; // ptr now points to the next element
    }
}
*/
