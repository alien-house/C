//
//  main.c
//  arrayPointer
//
//  Created by sin on 2017/01/25.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>

int arrayNumber(int numbers[]);
//int arrayNumberPointer(int* numbers);


int main(int argc, const char * argv[]) {
    
    int numbers[4] = {10,20,30,40};
    arrayNumber(numbers);
    
    
//    arrayNumberPointer(*numbers);
    
    // insert code here...
    return 0;
}

int arrayNumber(int numbers[]){
    
    //変数の*がある場合はその値。アドレスじゃない。
    int num  = *numbers+10;
    int num4 = *(numbers)+10;
    int num3 = *(&numbers[0])+10;
    int num2 = **(&numbers)+10;
    
//    printf("%d\n", *(&numbers[1]) );
    
    printf("%d\n",num );
    printf("%d\n",num4 );
    printf("%d\n",num2 );
    printf("%d\n",num3 );
    
    return num;
}


//int arrayNumberPointer(int* numbers){
//    
//    printf("%d\n",numbers );
//    return 0;
//    
//}


