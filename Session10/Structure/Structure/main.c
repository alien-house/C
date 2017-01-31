//
//  main.c
//  Structure
//
//  Created by sin on 2017/01/30.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>

//local and global variables

//defining struct 3 ways

//defining variables of type struct

// initialize the sturct
// pointer to struct

//sending struct to a function

//sending a pointer struct a function

//retuning a struct from a function

//returning an array of struct from a function ?

// struct within another struct

//struct within itself

//array of struct

//struct student
//{
//    int id;
//    char name[30];
//    float percentage;
//};

//struct student
//{
//    int id;
//    char name[30];
//    float percentage;
//} student1, student2;

struct student
{
    int id;
    char name[30];
    float percentage;
};



typedef struct
{
    int i;
    char k;
} element;

element user;

struct point
{
    int id;
    char name[30];
    float percentage;
}*point1, point2;
//
struct coordinate
{
    int id;
    char name[30];
    float percentage;
    struct nestedPoint
    {
        int i;
        int j;
    } nestedPoint1;
    
    struct coordinate* d;
    //struct coordinate d1;  //if uncomment, then it would give a complie error
};


int main(void) {
    
    struct student student1;
    struct student* student2;
    
    student2 = (struct student*) malloc(sizeof(struct student));
    
    student1.id = 10;
    
    student2->id = 10;
    
    element e1;
    
    student1.id = 1;
    
    //student1.name = "Raju";
    student1.percentage = 90.5;
    
    
    struct student* ptrToStudent;
    
    struct student students[10];
    
    for(int i=0; i<10; i++)
    {
        students[i].id = 10;
    }
    
    ptrToStudent->id = 2;
    
    point1->id = 1;
    //
}
//
//
struct student returnStruct(struct student students[])
{
    int sum = 0;
    
    students->id = 10;
    students[0].id = 10;
    
    
    for(int i=0; i<10; i++)
    {
        printf("%s", students[i].name);
    }
    
    struct student result;
    result.id = sum;
    
    return result;
}

struct student foo (struct student* student1)
{
    for(int i=0; i<10; i++)
    {
        
    }
    
    struct student str = {1, "ali", 9.0};
    printf("%d", student1->id);
    return str;
}
//
//
//
