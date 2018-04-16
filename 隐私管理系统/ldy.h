#ifndef ldy_INCLUDED
#define ldy_INCLUDED
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct account
{
    char loca[40];
    char descrp[10];
    char name[30];
    char psword[10];
}ACCOUNT;
int check(char password[10]);
int input(ACCOUNT *acco,int n);
void browse(ACCOUNT *acco,int n);
int cmp(char s[30],char name[30]);
void search(ACCOUNT *acco,int n);
int Delete(ACCOUNT *acco,int n);
int modify(ACCOUNT *acco,int n);
void filewrite(ACCOUNT *acco,int n);
int fileread(ACCOUNT *acco);
#endif // ldy_INCLUDED
