#include <stdio.h>
#include <string.h>
int main()
{
	/*
	主要用于删除输入的字符串中的空格
	*/
	
	int enter_string(char a[]);
	int delete_string(char a[],char b);
	int print_string(char a[]);
	static char a[80],b=' ';
	enter_string(a);
	delete_string(a,b);
	print_string(a);
	return 0;

}
int enter_string(char a[])
{
	gets(a);
	return 0;
}
int delete_string(char a[],char b)
{
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			for(int j=i;a[j]!='\0';j++)
			a[j]=a[j+1];
		}
			
	}
	return 0;
}
int print_string(char a[])
{
	for(int i=0;a[i]!=0;i++)
	{
		printf("%c",a[i]);
	}
	printf("\n");
	return 0;
}