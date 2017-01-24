//
//  main.c
//  Challenge10
//
//  Created by sin on 2017/01/22.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define DATA_SIZE 10

void showBarChart(void);
void showOneBar(int barLength);
void setDataValues(void);

int dataSet[DATA_SIZE];

int main(int argc, const char * argv[]) {
    setDataValues();
    showBarChart();
    
    return 0;
}

void setDataValues(void){
    srand((unsigned int)time(NULL));
    for (int i = 0; i < DATA_SIZE; i++) {
        dataSet[i] = rand() % 50;
    }
}

void showBarChart(void){
    for (int i = 0; i < DATA_SIZE; i++) {
        showOneBar(dataSet[i]);
    }
}

void showOneBar(int barLength){
    printf("%3d:", barLength);
    
    for (int i = 0; i < barLength; i++) {
        printf("●");
    }
    putchar('\n');
    
}
