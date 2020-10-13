#include<stdio.h>
int main()
{
char a[100];
int i;
printf("Enter your question/ statement you have:\n");
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='w'&&a[i+1]=='h'&&a[i+2]=='a'&&a[i+3]=='t')
{
printf("Type:what");
break;
}
else if(a[i]=='w'&&a[i+1]=='h'&&a[i+2]=='e'&&a[i+3]=='n')
{
printf("Type:when");
break;
}
else if(a[i]=='w'&&a[i+1]=='h'&&a[i+2]=='o')
{
printf("Type:who");
break;
}
else if((a[i]=='d'&&a[i+1]=='o'&&a[i+2]=='e'&&a[i+3]=='s')||(a[i]=='c'&&a[i+1]=='o'&&a[i+2]=='u'&&a[i+3]=='l'&&a[i+4]=='d')||(a[i]=='i'&&a[i+1]=='s')||(a[i]=='w'&&a[i+1]=='o'&&a[i+2]=='u'&&a[i+3]=='l'&&a[i+4]=='d')||(a[i]=='c'&&a[i+1]=='a'&&a[i+2]=='n')||(a[i]=='d'&&a[i+1]=='o')||(a[i]=='a'&&a[i+1]=='r'&&a[i+2]=='e')||(a[i]=='w'&&a[i+1]=='i'&&a[i+2]=='l'&&a[i+3]=='l'))
{
printf("Type: affirmative");
break;
}
else
{printf("Type: unknown");
break;
}
}
}