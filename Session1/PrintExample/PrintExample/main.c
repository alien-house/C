//
//  main.c
//  PrintExample
//
//  Created by sin on 2017/01/16.
//  Copyright © 2017年 sin. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a;
    int b;
    float test;
    
    //float c,d;
    
    float c;
    float d;
    char e;
    
    
    a = 15;
    b = a / 2;
    test = b;
    
    //printing integer and float
    
    printf("%0.4f\n",test);
    printf("%d\n",b);
    printf("%10d\n",b);  //10 digits to reserve for the output
    printf("%010d\n",b);  //10 digits to reserve for the output, empty spaces are filled by 0
    
    c = 150.3;
    d = c / 3;
    printf("%0.12f\n",d);  //width and percision
    printf("%0.4f\n",d);  //width and percision
    printf("%0.2f\n",d);  //
    
    //printing integer and float
    e = '*';
    
    printf("%c\n",e); // to text
    printf("%c%c\n",e,e);
    
    printf("\n");
    printf("\t");
    printf("\v");
    
    //    \n (newline)
    //    \t (tab)
    //    \v (vertical tab)
    //    \f (new page)
    //    \b (backspace)
    //    \r (carriage return)
    //    \n (newline)
    
    return 0;
}
