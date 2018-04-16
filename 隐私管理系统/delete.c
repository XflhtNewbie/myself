#include"ldy.h"
int Delete(ACCOUNT *acco,int n)
{
    int i=0;
    char k[5];
    char s[15];
    printf("Please input what you want to delete:\n");
    scanf("%s",s);
    while(i<n&&strcmp(acco[i].name,s))
        i++;
    if(i==n)
        printf("\nSorry,there is nothing to delete!\n");
    else
    {
        printf("\tNumber:%d\n",i+1);
        printf("\tLocation:%s\n",acco[i].loca);
        printf("\tDescription:%s\n",acco[i].descrp);
        printf("\tName:%s\n",acco[i].name);
        printf("\tPassword:%s\n",acco[i].psword);
        printf("\n");
        do
        {
            printf("Are you sure to delete this record?(y/n):");
            scanf("%s",k);
        }while(k[0]!='y'&&k[0]!='n');
        if(k[0]!='n')
        {
            strcpy(acco[i].loca,acco[i+1].loca);
            strcpy(acco[i].descrp,acco[i+1].descrp);
            strcpy(acco[i].name,acco[i+1].name);
            strcpy(acco[i].psword,acco[i+1].psword);
        }
        printf("\nDelete successfully!\n");
    }
    return n-1;
}
