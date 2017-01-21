//
//  main.c
//  Method
//
//  Created by sin on 2017/01/19.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>

//function declaration
void printSum(int num1, int num2);
void printName(char fistname, char lastname);
int factorial(int num);
void printDigit(int num2);
void printDigit2(int num);

int main(int argc, const char * argv[]) {
    
//    printSum(2,10);
    
//    int num = 0;
//    num = factorial(4);
    //printf("num is %d",num);
    
    printf("\n");
    
    
    printf("========\n");
    
    
    int num2 = 887219;
    printDigit(num2);
    
    
    
    printf("\n");
    
    
//    char a[] = "Shinji";
//    char b[] = "Nakai";
//    printf("Hello!\n %c %c",a ,b);
//    printName(a, b);
    return 0;
}

void printDigit(int num2){
    int digit;
    printf("%d",num2);
    printf("\n");
    while (num2 != 0){
        digit = num2 % 10;
        num2 = num2 / 10;
        printf("%d",digit);
        printf("\n");
    };
}

void printDigit2(int num){
    for (int num; num > 0; num = num / 10) {
        int reminder;
        reminder = num % 10;
        printf("%d",reminder);
        printf("\n");
    }
}









// fucntion difinition
// void : just print something, not return
void printName(char fistname, char lastname){
    printf("Hello!\n %c %c",fistname,lastname);
    
}

void printSum(int num1, int num2){
    int sum = num1 + num2;
    printf("result is %d",sum);
    printf("\n");
}

int factorial(int num){
    int n = 1;
    for (int i = num; i > 0; i--) {
        n = n * i;
        printf("n is %d",n);
        printf("\n");
    }
    return n;
}





