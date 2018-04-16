#include"ldy.h"
int menu_select()
{
    char s[3];
    int c;
    printf("\n     ********Main Menu********\n");
    printf("        1.Input information\n");
    printf("        2.Browse information\n");
    printf("        3.Search for information\n");
    printf("        4.Delete information\n");
    printf("        5.Modify imformation\n");
    printf("        6.Write file\n");
    printf("        7.quit\n");
    printf("        *************************\n\n");
    do
    {
        printf("   Please select operations 1-7:");
        scanf("%s",s);
        c=atoi(s);
    }
    while(c<0||c>7);
    return c;
}
int main()
{
    int n=0,j=0,flag=0;
    ACCOUNT account[20];
    char password[10];
    n=fileread(account);
    printf("Please input your password:");
    while(j<3)
    {
        gets(password);
        if(check(password)==0)
        {
            printf("        Password correctly!\n      Welcome to the program!");
            flag=1;
            break;
        }
        else
        {
            printf("Sorry,please input again:");
            j++;
        }
    }
    if(flag==0)
    {
        printf("You are illegal user!\n");
        return 0;
    }
    for(;;)
    {
        switch(menu_select())
        {
            case 1:n=input(account,n);break;
            case 2:browse(account,n);break;
            case 3:search(account,n);break;
            case 4:n=Delete(account,n);break;
            case 5:n=modify(account,n);break;
            case 6:filewrite(account,n);break;
            case 7:filewrite(account,n),exit(0);
        }
    }
    return 0;
}
