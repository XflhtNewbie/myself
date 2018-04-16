#include"ldy.h"
void filewrite(ACCOUNT *acco,int n)
{
    FILE *fp;
    int i=0;
    fp=fopen("C:\\PLAY OJ\\隐私信息管理系统\\ldy.txt","w");
    while(i<n)
    {
        fwrite(&acco[i],sizeof(ACCOUNT),1,fp);
        i++;
    }
    fclose(fp);
    printf("---Write successfully!---\n");
}
