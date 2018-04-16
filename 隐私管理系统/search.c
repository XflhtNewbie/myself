#include"ldy.h"
void search(ACCOUNT *acco,int n)
{
    int i=0,flag=0;
    char s[30];
    printf("Please input what you want to search:\n");
    scanf("%s",s);
    for(i=0; i<n; i++)
    {
        if(cmp(s,acco[i].name)==1)
        {
            printf("\tNumber:%d\n",i+1);
            printf("\tLocation:%s\n",acco[i].loca);
            printf("\tDescription:%s\n",acco[i].descrp);
            printf("\tName:%s\n",acco[i].name);
            printf("\tPassword:%s\n",acco[i].psword);
            printf("\n");
            flag=1;
        }
    }
    if(flag==0)
    printf("Sorry,there is nothing!\n");

}
