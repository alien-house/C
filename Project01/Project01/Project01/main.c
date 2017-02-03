//
//  main.c
//  Project01
//
//  Created by sin on 2017/02/02.
//  Copyright © 2017年 shinji. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void readStudent(void);
void showMenuOptions(void);
void showLoginView(void);

#define MAXTEXT 50

int main(int argc, const char * argv[]) {
    readStudent();
    //    showLoginView();
    //    showMenuOptions();
    
    return 0;
}


void showLoginView(void){
    char* username = malloc(sizeof(char *) * MAXTEXT);
    char* password = malloc(sizeof(char *) * MAXTEXT);
    printf("************************************************************\n");
    printf("Please enter your account to login:\n");
    printf("************************************************************\n");
    printf("Username:\n");
    scanf("%s", username);
    printf("Password:\n");
    scanf("%s", password);
    if(username == "" && password == ""){
        //gotomenu
    }
    
}



void readStudent(void){
//    char com[] = "User:”";
    //char* domain = "/Users/shinji/Mydata/personalmarketing/english/canada/school/CICCC/subject/401/Project01/Project01/Project01/";
    char file_name[] = "/Users/shinji/Mydata/personalmarketing/english/canada/school/CICCC/subject/401/Project01/Project01/Project01/Accounts.txt";
    //    strcat( domain , file_name);
    
    FILE *fp;
    char s[100];
    char userdata[100][100];
    char s_user[] = "User:";
    char s_pass[] = "Pass:";
    char *p;
    
    char str3[128] = "";
    char *p1, *p2;
    size_t len,len2;
    
    fp = fopen( file_name, "r" );
    if( fp == NULL ){
        printf( "%sIt's not opend file!\n", file_name );
        exit(1);
    }
    
    int i = 0;
    while( fgets( s, 100, fp ) != NULL ){
        p = strstr(s, s_user);
        if(p == NULL){
        }else{
            p1 = s;
            len = strlen(s_user);
            while((p2 = strstr(p1,s_user)) != NULL) { // 削除文字列がなくなるまでループ
                strncat(str3,p1,p2 - p1); // 削除文字列を除いて連結
                p1 = p2 + len; // ポインタの更新
            }
            
            strncpy( userdata[i], p1+1, 7 ); //p1の先頭+3の位置から5文字をusenumにコピー
            userdata[i][7] = '\0'; //でも文字数指定って..だめなきがする
            i++;
        }
    }
    
    fclose( fp );
    
    for (int a = 0; a < 15; a++) {
        printf( "%d :%s \n", a, userdata[a] );
    }
    
};
