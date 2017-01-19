//
//  main.c
//  Assignment01_170117(edit and before)
//
//  Created by Shinji on 2017/01/16.
//  Copyright © 2017 sin. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "time.h"

unsigned getRandInterval(unsigned begin, unsigned end);


int main(int argc, const char * argv[]) {
    
    /* ======================= */
    /* optional                */
    /* ======================= */
    
    /* (1) What is argc? ================
    
       Argument count(command line arguments).
       Total of argument. */
    
     
    /* (2) What is argv[]? ==============
    
       Argument vector.
       (array of strings representing command line arguments)
     
       If you want to excute your file with arguments, you can write like this "$ ./a.out 123". */
    
    
    /* (3) How to use argc and argv? ====
     
       gcc main.c (compiler)
       $ ./a.out 123 (excute with argument) */
    
     
    /* (4) Provide an example =========== */
    int i;
    printf("argc is %d\n", argc);
    for ( i = 0; i < argc; i++) {
        printf("%d order of argument = %s\n", i, argv[i]);
    }
    // When you excute (3), you will see the result below.
    /* Result
     argc is 2
     0 order of argument = ./a.out
     1 order of argument = 123
     */
    
    /*
     Columns
     If you don't need any arguments, you can also write just "int main(void){}".
     */
    
    
    /* ======================= */
    // Problem1
    /* ======================= */
    //(1)
    int a; //declaration statement
    a = 10; // assignment statement
    
    //(2)
    printf("Problem1(2)\n");
    printf("%d\n", a + 10);
    printf("%d\n", a + 12);
    printf("%d\n", a + 14);
    printf("%d\n", a + 16);
    printf("%d\n", a + 18);
    printf("%d\n", a + 20);
    printf("%d\n", a + 22);
    printf("%d\n", a + 24);
    printf("%d\n", a + 26);
    printf("%d\n", a + 28);
    
    //(3)
    printf("Problem1(3)\n");
    a = a * 2;
    for (i = 0; i < 10; i++) {
        printf("%d\n", a + ( i * 2 ));
    }
    
    //(4)
    printf("Problem1(4)\n");
    a = a * 2;
    for (i = 0; i < 200; i++) {
        printf("%d\n", ( i * 2 ));
    }
    
    
    /* ======================= */
    // Problem2
    /* ======================= */
//    srand((unsigned)(time(NULL)));
//    long counter;
//    counter = getRandInterval(0, 100);
//    printf("%ld\n", counter);
//    
//    //Using a for-loop, print the first 10 even number that are bigger than counter.
//    printf("Problem2\n");
//    
//    for (i = 0; i < 10; i++) {
//        printf("%ld\n", counter);
//    }
//    
//    //Print all even numbers which are bigger than the counter and less than 200.
//    for (i = 0; i < 200; i++) {
//        printf("%ld\n", counter);
//    }
//    
//    
    
    /* ======================= */
    // Problem3(Edit)(1)
    /* ======================= */
//    int age;
//    printf("Hi, Please enter your age:");
//    scanf("%d",&age);
//    
//    if(age < 20){
//        printf("Your age is less than 20");
//    }else if(age >= 20){
//        printf("your age is greater than or equal 20");
//    }
//    
//    printf("You are %d !", age);
    
    
    /* ======================= */
    // Problem3(Edit)(2)
    /* ======================= */
//    int sex;
//    printf("Please enter your sex(girl:1, boy:2):");
//    scanf("%d",&sex);
//    if(sex == 1){
//        printf("Are you Emma?");
//    }else{
//        printf("Are you Taro?");
//    }
    
    
    /* ======================= */
    // Problem3(Edit)(3)
    /* ======================= */
//    int number;
//    int digit = 0;
//    printf("Please enter your favarite number(0-9999):");
//    scanf("%d",&number);
//    while(number!=0){
//        number = number / 10;
//        printf("%d\n", number);
//        ++digit; // repeat
//    }
//    printf("your digit of number = %d\n", digit);
//
//    
    
    /* ======================= */
    // Problem3(Edit)(4)
    /* ======================= */
//    int number2;
//    printf("Please enter your favarite number(0-200):");
//    scanf("%d",&number2);
//    if(number2 > 200){
//        printf("Your number is bigger than 200");
//    }else if(number2 <= 200 && number2 >= 0){
//        if(number2 % 2 == 0){
//            printf("The number is even");
//        }else{
//            printf("The number is odd");
//        }
//    }else{
//        printf("Your number is smaller than 0");
//    }
//    printf("\n");
    
    
    
    /* === */
    
    
    
    /* ======================= */
    // Problem3(before)
    /* ======================= */
    printf("Problem3\n");
    long counter2;
    counter2 = getRandInterval(5, 10);
    
    char e = '*';
    for (long i = counter2; i > 0; i--) {
        for (long a = i; a > 0; a--) {
            printf("%c",e);
        }
        printf("\n");
    }
    
    /* ======================= */
    // Problem4(before)
    /* ======================= */
    printf("Problem4\n");
    long counter3;
    counter3 = getRandInterval(4, 11);
    
    for (long i = 0; i < counter3; i++) {
        for (long a = i+1; a > 0; a--) {
            printf("%c",e);
        }
        
        printf("\n");
    }
    
    /* ======================= */
    // Problem5(before)
    /* ======================= */
    printf("Problem5\n");
    int counter4 = getRandInterval(8, 14);
    
    if(counter4 % 2 != 0){
        counter4 = counter4 + 1;
    }
    printf("%d\n",counter4);
    
    int dif = 0;
    
    for(int cnt=counter4; cnt >= 1; cnt /= 2){
        
        dif = counter4 - cnt;
        for (int i = 0; i < (dif / 2); i++) {
            printf(" ");
        }
        
        for(int cnt1 = cnt; cnt1 > 0; cnt1--){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
    
    /* ======================= */
    // Problem extra in 1/18 lecture
    /* ======================= */
    printf("Problem extra\n");
    int counter5 = getRandInterval(3, 18);
    printf("%d\n",counter5);
    int r = 0;
    for(int i = counter5; i > 0; i-=2){
        for(int j = i; j < (counter5 - r); j++){
            printf(" ");
        }
        for(int j = i; j > 0; j--){
            printf("*");
        }
        printf("\n");
        r++;
    }
    printf("\n");
    
    
    return 0;
    
}


unsigned getRandInterval(unsigned begin, unsigned end){
    unsigned range = (end - begin) + 1;
    unsigned limit = (RAND_MAX) - ((RAND_MAX) % range);
    unsigned randVal = rand();
    while(randVal >= limit)
        randVal = rand();
    return(randVal % range) + begin;
}



