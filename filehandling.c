#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE* fp1;
    FILE* fp2;
    int ch;
    if((fp1=fopen("data.txt","r"))==NULL)
    {
        printf("The file does not exist\n");
        exit(0);
    }
    fp2=fopen("data1.txt","w");
    if(fp2==NULL)
    {
        printf("error to open the file");
    }


    while((ch=fgetc(fp1))!=EOF)
    {
       fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
}
