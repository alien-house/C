//
//  main.c
//  scan
//
//  Created by sin on 2017/01/17.
//  Copyright © 2017年 sin. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    //age
    int age;
    printf("Hi !");
    scanf("%d",&age);
    
    if(age < 20){
        printf("yang");
    }else if(age >= 20 && age < 40){
        printf("Your are not that young");
        
    }else{
        printf("ohnnn");
    }
    
    printf("You are %d !", age);
    
    return 0;
}
