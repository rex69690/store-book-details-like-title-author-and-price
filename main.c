#include <stdio.h>
//declaring a structure named book
struct book
{
char title [20];
char author [20];
int price ;
}s[3];
int main()
{
  int i;
  for(i=0;i<3;i++)
    {
    printf("enter book input: \n ");
    gets(s[i].title);
    gets(s[i].author);
    scanf("%d",&s[i].price);
    getchar();
    }
  for(i=0;i<3;i++)
  {
    printf("Title: %s\n Author: %s\n Price: %d\n",s[i].title,s[i].author,s[i].price);
  }
  return 0;
}
