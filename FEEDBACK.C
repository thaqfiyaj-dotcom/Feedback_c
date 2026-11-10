#include<stdio.h>
int main()
{
char ch;
FILE*fp;
fp=fopen("Feedback.txt","w");
if(fp==NULL)
{
printf("File opening ending\n");
return 0;
}
fprintf(fp,"Feedback about the c program\n");
fprintf(fp,"C is very basic language\n");
fprintf(fp,"C is very important language\n");
fprintf(fp,"It is a high level language\n");
fprintf(fp,"It is useful to improve our programming skills\n");
fprintf(fp,"It is use to improve our career opportunity\n");
fclose(fp);
fp=fopen("Feedback.txt","a");
if(fp==NULL)
{
printf("File opening ending\n");
return 0;
}
fprintf(fp,"Feedback about the c sir");
fprintf(fp,"Our c programming sir teaches us with great patients and dedication.\n");
fprintf(fp,"He makes even complicated topics easy to understand through simple explanation and practical examples.\n");
fprintf(fp,"He encourages every students to participate,practise coding and think logical.\n");
fprintf(fp,"His friendly approach makes us to feel comfortable to asking doubts.\n");
fprintf(fp,"We truly appreciate his efforts in making programming an enjoyable learning experience\n");
fclose(fp);
fp=fopen("Feedback.txt","r");
if(fp==NULL)
{
printf("File opening ending\n");
return 0;
}
while((ch=fgetc(fp))!=EOF);
{
printf("%c",ch);
}
fclose(fp);
return 0;
}
