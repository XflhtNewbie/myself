int cmp(char s[30],char name[30])
{
    int i,j;
    for(i=0;s[i]!=0;i++)
        for(j=0;name[j]!=0;j++)
        if(s[i]==name[j])
        return 1;
    return 0;
}
