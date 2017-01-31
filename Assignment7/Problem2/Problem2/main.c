//
//  main.c
//  Problem2
//
//  Created by sin on 2017/01/30.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>
int distance(int x, int y);
void printPoint(int x, int y);

struct point{
    int x;
    int y;
};

int main(int argc, const char * argv[]) {
    int num = distance(2,9);
    printf("%d ", num);
    return 0;
}


int distance(int x, int y){
    return (x^2 + y^2)^1/2;
}

void printPoint(int x, int y){
    printf("[%d,%d]", x, y);
}

void average(int x, char array){
}

void vectorAverage(int x, char array){
}
