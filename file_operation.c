#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char s[100],fname[20];
    printf("enter the file name to read and display its content (like file.txt):");
    scanf("%s",fname);
    fp=fopen(fname,"r");
    if(fp==NULL)
    {
        printf("error in opening file..!!!");
        getch();
        exit(0);
    }
    while(fgets(s,99,fp)!=NULL)
    {
        printf("%s",s);
    }
    printf("\n");
    fclose(fp);
    getch();
}
