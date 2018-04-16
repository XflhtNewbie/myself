#include"ldy.h"
int modify(ACCOUNT *acco,int n)
{
    int i=0;
    printf("\nPlease input related information according to the hint.\n\n");
    printf("Input account location:");
    scanf("%s",acco[n+i].loca);
    printf("Input account description:");
    scanf("%s",acco[n+i].descrp);
    printf("Inuput account name:");
    scanf("%s",acco[n+i].name);
    printf("Input account password:");
    scanf("%s",acco[n+i].psword);
    printf("\nInsert successfully!\n");
    i++;
    return n+1;
}
