//
//  main.c
//  searchNumber
//
//  Created by sin on 2017/01/23.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    int numbers[] = {2,5,2,4,3,7,5,4,9,89};
    
    for (int i = 0; i <= 10; i++) {
        
        for (int a = 0; a <= 10; a++) {
            if(numbers[i] == numbers[a]){
                printf("same!:%d \n",numbers[i]);
            }
            
        }
        
    }
    
    
    
    
    return 0;
}
