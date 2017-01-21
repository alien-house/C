//
//  main.c
//  Assignment04
//
//  Created by sin on 2017/01/19.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "time.h"
#include <string.h>

// problem1(1)
void printInt(int num);
// problem1(2)
void printFloat(float num);
// problem2(1)
int intSum(int num1, int num2);
// problem2(2)
int intBigger(int num1, int num2);
// problem3
int intBetween(int num1, int num2);
// problem4(1)
int intCalculator(int num1, int num2, char op);
// problem5(1)
void printStarDesc(int num1);
// problem5(2)
void printStarAsc(int num1);
// problem5(3)
void printStarInTriangle(int num1);
// problem6
void printSwap(int num1, int num2);
// problem7
void intAllPrimeNum(int num1, int num2);
// problem8
void printCheckNum();
// bonus problem
void printWelcomeBoard(char *name, int length);
// bonus problem2
void printWelcomeBoardWhite(char *name, int length);

int main(int argc, const char * argv[]) {
    
    /* ======================= */
    // Problem1
    /* ======================= */
    
    // (1) Write a function which takes an integer number at prints it.
    printInt(123);
    
    // (2) Write a function which takes a float number and prints it.
    printFloat(123.1123);
    
    
    /* ======================= */
    // Problem2
    /* ======================= */
    
    // (1) Write a function which takes two integer numbers and returns the sum of two numbers.
    int sum = intSum(111,111);
    printf("problem2(1): sum is %d", sum);
    printf("\n");
    
    // (2) Write a function which takes two integer and returns the one which is bigger than the other one. If they are equal the function will return one of them.
    int bigger = intBigger(1341,1341);
    printf("problem2(2): bigger is %d", bigger);
    printf("\n");
    
    
    /* ======================= */
    // Problem3
    /* ======================= */
    // (1) Returns the number of numbers between the two input numbers (excluding the input numbers) and
    int between = intBetween(5,15);
    printf("problem3(1): between is %d", between);
    printf("\n");
    
    
    /* ======================= */
    // Problem4
    /* ======================= */
    
    int calculator = intCalculator(9, 4, '%');
    printf("problem4(1): cal %d",calculator);
    printf("\n");
    
    
    /* ======================= */
    // Problem5
    /* ======================= */
    printStarDesc(4);
    printStarAsc(4);
    printStarInTriangle(10);
    
    
    /* ======================= */
    // Problem6
    /* ======================= */
    printSwap(9, 4);
    
    
    /* ======================= */
    // Problem7
    /* ======================= */
    intAllPrimeNum(1,97);
    
    
    /* ======================= */
    // Problem8
    /* ======================= */
//    printCheckNum();
    
    
    /* ======================= */
    // Bonus Problem (optional)
    /* ======================= */
    char *str = "Shinji";
    const int numname = 6;
    printWelcomeBoard(str,numname);
    // Q. How can I send a plural char or long char?
    
    printWelcomeBoardWhite(str,numname);
    
    
    return 0;
}



/* ----------------------- */
// problem1(1)
/* ----------------------- */
void printInt(int num){
    printf("problem1(1): printInt:num is %d", num);
    printf("\n");
}


/* ----------------------- */
// problem1(2)
/* ----------------------- */
void printFloat(float num){
    printf("problem1(2): printFloat:num is %f", num);
    printf("\n");
}


/* ----------------------- */
// problem2(1)
/* ----------------------- */
int intSum(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}


/* ----------------------- */
// problem2(2)
/* ----------------------- */
int intBigger(int num1, int num2){
    if(num1 >= num2){
        return num1;
    }else{
        return num2;
    }
}


/* ----------------------- */
// problem3(1)
/* ----------------------- */
int intBetween(int num1, int num2){
    int sum;
    // why puls 1 is because the first number isn't counted.
    for (int i = num1 + 1; i < num2; i++) {
        // (2) prints all numbers between these two input numbers.
        printf("problem3(2): %d",i);
        printf("\n");
        sum++;
    }
    // (3) prints the average of the numbers between the two input numbers..
    int av = ( num1 + num2 ) / 2;
    printf("problem3(3): average %d",av);
    printf("\n");
    
    return sum;
}


/* ----------------------- */
// problem4(1)
/* ----------------------- */
int intCalculator(int num1, int num2, char op){
    int cal;
    switch (op) {
        case '+':
            cal = num1 + num2;
            break;
        case '-':
            cal = num1 - num2;
            break;
        case '*':
            cal = num1 * num2;
            break;
        case '/':
            cal = num1 / num2;
            break;
        default:
            cal = num1 % num2;
            break;
    }
    return cal;
}


/* ----------------------- */
// problem5(1)
/* ----------------------- */
void printStarDesc(int num1){
    printf("Problem5(1)\n");
    for (long i = num1; i > 0; i--) {
        for (long a = i; a > 0; a--) {
            printf("*");
        }
        printf("\n");
    }
}


/* ----------------------- */
// problem5(2)
/* ----------------------- */
void printStarAsc(int num1){
    printf("Problem5(2)\n");
    for (long i = 0; i < num1; i++) {
        for (long a = i+1; a > 0; a--) {
            printf("*");
        }
        printf("\n");
    }
}


/* ----------------------- */
// problem5(3)
/* ----------------------- */
void printStarInTriangle(int num1){
    printf("Problem5(3)\n");
    //If num1 is odd, it will be even.
    if(num1 % 2 != 0){
        num1 = num1 + 1;
    }
    int dif;
    for (int cnt = num1; cnt >= 1; cnt /= 2){
        dif = num1 - cnt;
        for (int i = 0; i < (dif / 2); i++) {
            printf(" ");
        }
        for(int cnt1 = cnt; cnt1 > 0; cnt1--){
            printf("*");
        }
        printf("\n");
    }
}


/* ----------------------- */
// problem6
/* ----------------------- */
void printSwap(int num1, int num2){
    printf("problem6 : Swap\n");
    printf("before: num1=%d num2=%d ",num1, num2);
    printf("\n");
    int swap = num1;
    num1 = num2;
    num2 = swap;
    printf("after : num1=%d num2=%d ",num1, num2);
    printf("\n");
}


/* ----------------------- */
// problem7
// Write a function which takes two numbers and returns all prime numbers between the two numbers.
/* ----------------------- */
void intAllPrimeNum(int num1, int num2){
    
    int allPnum = 0;
    for (int i = num1; i <= num2; i++) {
        
        switch (i) {
            case 1:
                break;
            case 2:
            case 3:
            case 5:
            case 7:
                allPnum++;
                printf("problem7 prime: %d", i);
                printf("\n");
                break;
            default:
                //odd
                if(i % 2){
                    //  checking prime number
                    if(i % 3 && i % 5 && i % 7){
                        allPnum++;
                        printf("problem7 prime: %d", i);
                        printf("\n");
                    }
                }
                break;
        }
    }
    
    // Q. How can I send back multiple return value?
    
}



/* ----------------------- */
// Problem8
/* ----------------------- */
void printCheckNum(){
    
    printf("problem8:\n");
    int num;
//    int num = 95;
    printf("Please input any number:");
    scanf("%d",&num);

    // (1) Whether the number is odd or even.
    if(num % 2){
        printf("your number %d is odd!", num);
        printf("\n");
    }else{
        printf("your number %d is even!", num);
        printf("\n");
    }
    
    // (2) Whether the number is dividend of 3.
    int num2 = num % 3;
    if(num2 == 0){
        printf("your number %d is dividend of 3!", num);
        printf("\n");
    }
    
    // (3) Whether the number if dividend of 7.
    int num3 = num % 7;
    if(num3 == 0){
        printf("your number %d is dividend of 7!", num);
        printf("\n");
    }
    
    // (4) Whether the number is a prime number.
    switch (num) {
        case 2:
        case 3:
        case 5:
        case 7:
            printf("Your chosen number is prime!(^ ^)congrats!");
            printf("\n");
            break;
        default:
            //odd
            if(num % 2){
                //  checking prime number
                if(num % 3 && num % 5 && num % 7){
                    printf("Your chosen number is prime number!\\(^o^)/");
                    printf("\n");
                }else{
                    printf("@@OOoomg! your number is normal (- - ;");
                    printf("\n");
                }
            }else{
                printf("OOoomg! your number is normal ..@o@..");
                printf("\n");
            }
            break;
    }
}


/* ----------------------- */
// Bonus Problem (optional)
/* ----------------------- */
void printWelcomeBoard(char *name, int length){
    
    printf("Bonus Problem:\n");
    
    char hello[256]    = "Hello";
    char *names      = name;
    char welcome[256]  = "Welcome";
    char tobox[256]    = "To";
    char ciccc[256]    = "CICCC";
    
    if(length <= 6){
        length = 7;
    }
    //vartical
    for (int i = 0; i < 7; i++) {
        //holizen
        for (int a = 0; a < length + 2; a++) {
            if(a < 1){
                printf("**");
            }
            switch (i) {
                case 1:
                    printf("%c",hello[a]);
                    if(!hello[a])printf("*");
                    break;
                case 2:
                    printf("%c",names[a]);
                    if(!names[a])printf("*");
                    break;
                case 3:
                    printf("%c",welcome[a]);
                    if(!welcome[a])printf("*");
                    break;
                case 4:
                    printf("%c",tobox[a]);
                    if(!tobox[a])printf("*");
                    break;
                case 5:
                    printf("%c",ciccc[a]);
                    if(!ciccc[a])printf("*");
                    break;
                default:
                    printf("*");
                    break;
            }
            
        }
        printf("\n");
    }
};


/* ----------------------- */
// Bonus Problem (optional2)
/* ----------------------- */
void printWelcomeBoardWhite(char *name, int length){
    printf("Bonus Problem 2:\n");
    
    char hello[256]    = "Hello";
    char *names        = name;
    char welcome[256]  = "Welcome";
    char tobox[256]    = "To";
    char ciccc[256]    = "CICCC";
    
    if(length <= 6){
        length = 7;
    }
    //vartical
    for (int i = 0; i < 7; i++) {
        //holizen
        for (int a = 0; a < length + 2; a++) {
            // 最初の列だけ
            if((a < 1) ){
                printf("*");
                if((i >= 1 && i < 6) && a == 0){printf(" ");}
            }
            if(a == length + 1){
                printf("*");
            }
            switch (i) {
                case 1:
                    printf("%c",hello[a]);
                    if( a == length ){
                        printf(" ");
                    }else if(!hello[a]){
                        printf(" ");
                    };
                    break;
                case 2:
                    printf("%c",names[a]);
                    if( a == length ){
                        printf(" ");
                    }else if(!names[a]){
                        printf(" ");
                    };
                    break;
                case 3:
                    printf("%c",welcome[a]);
                    if( a == length ){
                        printf(" ");
                    }else if(!welcome[a]){
                        printf(" ");
                    };
                    break;
                case 4:
                    printf("%c",tobox[a]);
                    if( a == length ){
                        printf(" ");
                    }else if(!tobox[a]){
                        printf(" ");
                    };
                    break;
                case 5:
                    printf("%c",ciccc[a]);
                    if( a == length ){
                        printf(" ");
                    }else if(!ciccc[a]){
                        printf(" ");
                    };
                    break;
                default:
                    printf("*");
                    break;
            }
            
        }
        printf("\n");
    }
    
    
    //    int iSize = sizeof(names);
    //    for (int i = 0; i < iSize; i++) {
    //        printf("iSize + %d\n",i);
    //    }
    //

    
};




