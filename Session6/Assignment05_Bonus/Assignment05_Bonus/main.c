//
//  main.c
//  Assignment05_Bonus
//
//  Created by sin on 2017/01/24.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>
// Bonus
void optional(int num[], int target);

int main(int argc, const char * argv[]) {
    /* ----------------------- */
    // Bonus Problem (optional)
    /* ----------------------- */
    int num[20] = {
        2, 341, 423, 34, 1, 49, 80, 490, 98, 33,
        504, 111, 624, 478, 5, 765, 987, 35, 29, 44
    };
    int target = 626;
    optional(num, target);
        
    return 0;
}

void optional(int num[], int target){
    int check = 0;
    for (int i = 0; i < 20; i++) {
        for (int a = 0; a < 20; a++) {
            int nums = num[i] + num[a];
            if(nums == target){
                check++;
                printf("%2d:number num[%d] and num[%d] = %d \n", i, num[i], num[a], nums);
            }
        }
    }
    if(check == 0){
        printf("There is no such a number here!\n");
        
    }
    
    
}
