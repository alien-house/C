//
//  main.c
//  Problem4
//
//  Created by sin on 2017/02/01.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>

void callLine(void);

int main(int argc, const char * argv[]) {
    
    callLine();
    
    return 0;
}

void callLine(void){
//    static int i = 0;
//    
//
//    char inputArray[5]={};
//    
//    
//    if(i < 5){
//        inputArray[i] = n;
//        i++;
//    }
//    
    
    
    char n = '*';
    while(1){
        printf("enter line \\n:");
        scanf("%c",&n);
        if (n == 'a'){
            break;
        }
        
    }
}



//int fixedLines(){
//    
//}
