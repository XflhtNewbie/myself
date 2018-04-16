#include"ldy.h"
int input(ACCOUNT *acco,int n)
{
    char sign;
    int i=0;
    while(sign!='#')
    {
        printf("\nPlease input related information according to the hint.\n\n");
        printf("Input account location:");
        scanf("%s",acco[n+i].loca);
        printf("Input account description:");
        scanf("%s",acco[n+i].descrp);
        printf("Inuput account name:");
        scanf("%s",acco[n+i].name);
        printf("Input account password:");
        scanf("%s",acco[n+i].psword);
        printf("Input # to end:");
        getchar();
        scanf("%c",&sign);
        i++;
    }
    printf("input successfully!\n");
    return (n+i);
}
