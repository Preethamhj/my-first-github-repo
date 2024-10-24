
#include<stdio.h>
#include<string.h>
void read(char* p1,char* p2)
{
 printf("enter the string 1 \n");
 scanf("%s",p1);
 printf("enter the string 2 \n");
 scanf("%s ",p2);

  }
  void display(char* p1,char * p2)
  {
      printf("string 1= %s \n",p1);
      printf(" string 2= %s \n",p2);


  }
  void display1(char* p1)
  {

      printf("string 1=%s \n",p1);
  }
void Strcat(char *p1,char *p2)
{

    while(*p1!='\0')
        p1++;
    while(*p2!='\0')
    {

        *p1=*p2;
        *p1++;
        *p2++;

    }
    *p1='\0';

}
int main()
{

    char s1[20],s2[20];
    char *ps1=s1;
    char *ps2=s2;
    read(ps1,ps2);
    display(ps1,ps2);
    printf("the string after appending \n");
    Strcat(ps1,ps2);
    display1(ps1);
     for(int i=0;i<strlen(ps1);i++)
    {
        printf("%c \n",*(ps1+i));
    }
    return 0;
}
