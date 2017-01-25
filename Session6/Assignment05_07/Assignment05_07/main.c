//
//  main.c
//  Assignment05_07
//
//  Created by sin on 2017/01/24.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>
// Problem7
void printArrayFunc(int values[]);
int returnArraySum(int values[]);
float returnArrayAverage(int values[]);
int returnArrayBigNum(int values[]);
int returnArrayMinNum(int values[]);
void showMenu(void);
//void menuOptions(int values[]);
void showMenuOptions(void);

int main(int argc, const char * argv[]) {
    
    /* ----------------------- */
    // Problem7
    /* ----------------------- */
    
    // (1)
    //    int values[5];
    //    for (int i = 0; i < 5; i++) {
    //        printf("please input %d numbers:",i+1);
    //        scanf("%d",&values[i]);
    //    }
    
    // (2)
    //    printArrayFunc(values);
    
    // (3)
    //    int sum = returnArraySum(values);
    
    // (4)
    //    float average = returnArrayAverage(values);
    
    // (5)
    //    int biggest = returnArrayBigNum(values);
    
    // (6)
    //    int minimum = returnArrayMinNum(values);
    
    // (7)
    //    menuOptions(values);
    
    showMenu();
    
    return 0;
}

/* ======================= */
// Problem 7
/* ======================= */
void printArrayFunc(int values[]){
    for (int i = 0; i < 5; i++) {
        printf("number: %d \n",values[i]);
    }
}

int returnArraySum(int values[]){
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += values[i];
    }
    printf("sum is: %d \n",sum);
    return sum;
}

float returnArrayAverage(int values[]){
    float average = 0;
    average = returnArraySum(values);
    printf("Average is: %.3f \n",average / 5);
    return average / 5;
}

int returnArrayBigNum(int values[]){
    int biggest = 0;
    for (int i = 0; i < 5; i++) {
        if(biggest < values[i]){
            biggest = values[i];
        }
    }
    printf("Biggest is: %d \n",biggest);
    
    return biggest;
}

int returnArrayMinNum(int values[]){
    int minimum = values[0];
    for (int i = 0; i < 5; i++) {
        if(minimum > values[i]){
            minimum = values[i];
        }
    }
    printf("Minimum is: %d \n",minimum);
    return minimum;
}

void showMenu(void){
    
    int array[5] = { 30, 40, 20, 19, 50 };
    
    showMenuOptions();
    char input = '*'; //init none option
    scanf("%c", &input);
    
    while (input!='q') {
        
        if(input == 'p'){
            printArrayFunc(array);
        }else if(input == 'c'){
            returnArraySum(array);
        }else if(input == 'v'){
            returnArrayAverage(array);
        }else if(input == 'm'){
            returnArrayMinNum(array);
        }else if(input == 'x'){
            returnArrayBigNum(array);
        }else if(input == 'n'){
            for (int i = 0; i < 5; i++) {
                printf("Please input %d numbers:",i+1);
                scanf("%d",&array[i]);
            }
        }
        
        showMenuOptions();
        scanf("%c", &input);
    }
}


void showMenuOptions(void){
    
    printf("==========================\n");
    printf("Please select one option\n");
    printf("==========================\n");
    
    printf("Printing the array [press 'p']\n");
    printf("Printing the sum of all numbers in the array [press 'c']\n");
    printf("Printing the average of the numbers in the array [press 'v']\n");
    printf("Printing the minimum number in the array [press 'm']\n");
    printf("Printing the maximum number in the array [press 'x']\n");
    printf("Exit and terminate [press 'q']\n");
    printf("Enter a new array [press 'n']\n");
    
    printf("==========================\n");
}

