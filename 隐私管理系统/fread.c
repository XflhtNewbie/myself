#include"ldy.h"
int fileread(ACCOUNT *acco)
{
    int i;
    FILE *fp;
    fp=fopen("C:\\PLAY OJ\\隐私信息管理系统\\ldy.txt","r");
    i=0;
    while(!feof(fp))
    {
        if(fread(&acco[i],sizeof(ACCOUNT),1,fp)!=1)
            break;
        i++;
    }
    fclose(fp);
    printf("Read successfully!\n");
    return i;
}

