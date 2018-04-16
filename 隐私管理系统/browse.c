#include"ldy.h"
void browse(ACCOUNT *acco,int n)
{
    int i=0;
    if(n==0)
        printf("\nSorry,you have no record to browse!\n");
    else
    {
        printf("*********************ACCOUNT*********************\n");
        while(i<n)
        {
            printf("\n");
            printf("\tNumber:%d\n",i+1);
            printf("\tLocation:%s\n",acco[i].loca);
            printf("\tDescription:%s\n",acco[i].descrp);
            printf("\tName:%s\n",acco[i].name);
            printf("\tPassword:%s\n",acco[i].psword);
            i++;
            printf("\n");
        }
        printf("**************************************************\n\n");
    }
}
