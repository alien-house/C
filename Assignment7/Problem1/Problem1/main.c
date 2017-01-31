//
//  main.c
//  Problem1
//
//  Created by sin on 2017/01/30.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>

//(1)
struct date{
    int day;
    int month;
    int year;
};

//(2)
struct machine{
    int name;
    char* memory;
};

//(3)
struct time{
    int day;
    int month;
    int year;
};



int main(int argc, const char * argv[]) {
    
    //(1)
    struct date* dates;
    dates = (struct date*)  malloc(sizeof(struct date));
    dates->day = 10;
    
    printf("(1) : %d \n", dates->day);
    
    
    //(2)
    struct machine* mpu641;
    mpu641 = (struct machine*)  malloc(sizeof(struct machine));
    
    char CPUtype[] = {};
    mpu641->memory = CPUtype;
    mpu641->name = 10;
    printf("(2) : %p \n", mpu641->memory);
    printf("(2) : %d \n", mpu641->name);
    
    //(3)
    //(3)-1
    struct time* times;
    times = (struct time*)  malloc(sizeof(struct time));
    //(3)-2
    times->day = 10;
    printf("(3) : %d \n", times->day);
    
    
    //(3)-3
    struct time* sample[10];
    for (int i = 0; i < 10; i++) {
        sample[i] = (struct time*)  malloc(sizeof(struct time));
    }
    //(3)-4
    sample[2]->month = 12;
    
    //(3)-5~6
    int* sampleP;
    for (int i = 0; i < 10; i++) {
        sampleP[i] = &sample[i];
        printf("%p \n", sampleP[i]);
        printf("%d ", sample[i]->day);
        printf("%d ", sample[i]->month);
        printf("%d \n", sample[i]-> year);
    }
    
    
    printf("//================== \n");
    sample[1]->day = 10;
    sample[1]->month = 2;
    sample[1]->year = 1965;
    
    for (int i = 0; i < 10; i++) {
        sampleP[i] = &sample[i];
        printf("%p \n", sampleP[i]);
        printf("%d ", sample[i]->day);
        printf("%d ", sample[i]->month);
        printf("%d \n", sample[i]-> year);
    }
    
    
    
    
    return 0;
}






