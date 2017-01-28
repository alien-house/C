//
//  main.c
//  Midterm1_48
//
//  Created by sin on 2017/01/26.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int k; // sometime might be 0, but sometimes not 0....
    {
       int k;
       for (k = 0; k < 10; k++);printf("%d \n",k);
        //bodyがなくてもエラーではない
    }
    
    return 0;
}
