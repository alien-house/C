//
//  main.c
//  Assignment05
//
//  Created by sin on 2017/01/23.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>
// Problem1
void printArray(int array[]);
// Problem2
void inputPrintArray(void);
// Problem3
int inputPrintArrayInt(int n[]);
// Problem4
float returnArrayFloat(float n[]);
// Problem5
void printArrayOddEven(int n[]);
// Problem6
int returnArraySearch(int n[], int s);

// Problem7
void printArrayFunc(int values[]);
int returnArraySum(int values[]);
float returnArrayAverage(int values[]);
int returnArrayBigNum(int values[]);
int returnArrayMinNum(int values[]);
void showMenu(void);
//void menuOptions(int values[]);
void showMenuOptions(void);

// Bonus
void optional(void);

int main(int argc, const char * argv[]) {
    // good programaer is always doing initialze.
    
    /* ----------------------- */
    // Problem1
    /* ----------------------- */
    // printf( "arrayの要素数 %lu\n", sizeof array/sizeof(int) );
    int array[] = {4,6,8,9,7};
//    printArray(array);
    
    /* ----------------------- */
    // Problem2
    /* ----------------------- */
//    inputPrintArray();
    
    /* ----------------------- */
    // Problem3
    /* ----------------------- */
    inputPrintArrayInt(array);
    
    /* ----------------------- */
    // Problem4
    /* ----------------------- */
//    float arrayFloat[] = {23.4,12.53,253.111,42.5,76.7};
//    float betnNum = returnArrayFloat(arrayFloat);
//    printf("the difference is %.3f \n",betnNum);
//    printf("\n");
    
    /* ----------------------- */
    // Problem5
    /* ----------------------- */
//    printArrayOddEven(array);
    
    
    /* ----------------------- */
    // Problem6
    /* ----------------------- */
//    int snum = returnArraySearch(array, 7);
//    printf("The returned value is %d \n",snum);
//    printf("\n");
    
    
    
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
    
    //showMenu();
    
    
    
    /* ----------------------- */
    // Bonus Problem (optional)
    /* ----------------------- */
    optional();
    
    
    
    
    
    
    return 0;
}


/* ======================= */
// Problem 1
/* ======================= */
void printArray(int array[]){
    printf("==========================\n");
    printf("Problem 1 \n");
    printf("==========================\n");
    for (int i = 0; i < 5; i++) {
        printf("array[%d]: %d \n",i,array[i]);
    }
    printf("\n");
}

/* ======================= */
// Problem 2
/* ======================= */
void inputPrintArray(void){
    int n = 5;
    printf("==========================\n");
    printf("Problem 2 \n");
    printf("==========================\n");
    printf("Please input 5 numbers\n");
    int array[5];
    for (int i = 0; i < 5; i++) {
        printf("%d number?:",i+1);
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("number original order: %d \n",array[i]);
    }
    for (int i = n-1; i >= 0; i--) {
        printf("number reverse order: %d \n",array[i]);
    }
    printf("\n");
}

/* ======================= */
// Problem 3
/* ======================= */
int inputPrintArrayInt(int n[]){
    printf("==========================\n");
    printf("Problem 3 \n");
    printf("==========================\n");
    int an[5];
    for (int i = 0; i < 5; i++) {
        an[i] = n[i];
        printf("umbers[%d]: %d \n", i, an[i]);
    }
    printf("\n");
}

/* ======================= */
// Problem 4
/* ======================= */
float returnArrayFloat(float n[]){
    printf("==========================\n");
    printf("Problem 4 \n");
    printf("==========================\n");
    float maxmun = 0;
    float minmun = n[0];
    for (int i = 0; i < 5; i++) {
        if(maxmun < n[i]){
            maxmun = n[i];
        }
        if(minmun > n[i]){
            minmun = n[i];
        }
    }
    printf("maximum is %.3f \n",maxmun);
    printf("minimum is %.3f \n",minmun);
    return maxmun - minmun;
}

/* ======================= */
// Problem 5
/* ======================= */
void printArrayOddEven(int n[]){
    printf("==========================\n");
    printf("Problem 5 \n");
    printf("==========================\n");
    int oddNum  = 0;
    int evenNum = 0;
    for (int i = 0; i < 5; i++) {
        if(n[i] % 2){
            evenNum++;
            printf("even %d \n",n[i]);
        }else{
            oddNum++;
            printf("odd %d \n",n[i]);
        }
    }
    printf("total even numbers is %d \n",evenNum);
    printf("total odd numbers is %d \n",oddNum);
    printf("\n");
}


/* ======================= */
// Problem 6
/* ======================= */
int returnArraySearch(int n[], int s){
    printf("==========================\n");
    printf("Problem 6 \n");
    printf("==========================\n");
    int fnum = 0;
    for (int i = 0; i < 5; i++) {
        if(n[i] == s){
            fnum = n[i];
        }
    }
    if(fnum){
        printf("The found number is %d \n",fnum);
    }else{
        fnum = -1;
        printf("The number is no found\n");
    }
    return fnum;
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
//    for (int i = 0; i < 5; i++) {
//        printf("values[0]: %d \n",values[i]);
//    }
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



void optional(void){
    int num[20] = {
        2, 341, 423, 34, 1, 49, 80, 490, 98, 33,
        504, 111, 624, 478, 5, 765, 987, 35, 29, 44
    };
    int num2[20] = {
        65, 1341, 980, 3, 109, 55, 23, 354, 4, 77,
        52, 509, 1624, 900, 365, 55, 987, 56, 55, 65
    };
    
    for (int i = 0; i < 20; i++) {
        for (int a = 0; a < 20; a++) {
            int nums = num[i] + num2[a];
            if(nums > 0 && nums <= 2000){
                printf("%d:number num[%d] and num2[%d] = %d \n", i, num[i], num2[a], nums);
            }else{
                printf("sum = %d \n", nums);
            }
        }
        
    }
    
    
}



//void menuOptions(int values[]){
//    char menu;
//    
//    while (1) {
//        
//        printf("Please input menu:");
//        scanf("%s", &menu);
//        
//        if(menu == 'p'){
//            printArrayFunc(values);
//        }else if(menu == 'c'){
//            int sum = returnArraySum(values);
//        }else if(menu == 'v'){
//            float average = returnArrayAverage(values);
//        }else if(menu == 'm'){
//            int minimum = returnArrayMinNum(values);
//        }else if(menu == 'x'){
//            int biggest = returnArrayBigNum(values);
//        }else if(menu == 'q'){
//            break;
//        }else if(menu == 'n'){
//            int values = {2,3,4,5,6};
//        }
//        
//    }
//    
//}





