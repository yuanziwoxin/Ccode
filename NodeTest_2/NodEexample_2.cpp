#include <stdio.h>
//Example4:数组作实参，指针变量作形参；
int main()
{//输入5个整数，并为其中的前n个整数从小到大进行排序；
	
	int sort(int *a,int n);//指针变量作形参
	int array[5],num;
	printf("Please enter 5 number:\n");
	for(int i=0;i<5;i++)
		scanf("%d",&array[i]);
	printf("How many numbers do you want to sort:\n");
	scanf("%d",&num);
	sort(array,num);
	for(int j=0;j<5;j++)
	{
		printf("%d\t",array[j]);
	}
	printf("\n");
	return 0;
}
//指针变量作形参
int sort(int *a,int n)
{
	int k;
	//选择排序法：（1）第一轮：先找出所有数的中最小的数，并让其和第一个数交换位置；
	//            （2）第二轮：第一个数不变，在第二个数到最后一个数之间找出最小的数，并让其和第二个数交换位置；
	//			   (3) 重复以上操作，直到进行(n-1)轮排序为止，此时已排好了前(n-1)个数的顺序，最后一个数自然是最大的；
	for(int i=0;i<n;i++)
	{
		k=i;
		for(int j=i+1;j<n;j++)
			if(*(a+k) > *(a+j)) k=j;//找出从a[i+1]到a[n-1]之间的最小的数的位置；(事实上就是把*(a+k)和a[k]等价，下同)
			if(k!=i)
			{
				int temp;
				temp=*(a+k);
				*(a+k)=*(a+i);
				*(a+i)=temp;
			}
	}
	return 0;
}

/*
//Example3：指针变量作实参，指针变量作形参；
int main()
{//输入5个整数，并为其中的前n个整数从小到大进行排序；
	
	int sort(int *a,int n);//指针变量作形参
	int array[5],num,*p;
	p=array;//指针变量p指向array[0];
	printf("Please enter 5 number:\n");
	for(int i=0;i<5;i++)
		scanf("%d",p++);//输入的整数依次存储到指针变量p所指向的存储单元中；
	printf("How many numbers do you want to sort:\n");
	scanf("%d",&num);
	sort(p,num);
	p=array;//关键一步：注意一定要重新将指针变量p赋值为&array[0];因为经过第一个for循环p的值为&array[5];
	for(int j=0;j<5;j++)
	{
		printf("%d\t",*p);
		p++;
	}
	printf("\n");
	return 0;
}
//指针变量作形参
int sort(int *a,int n)
{
	int k;
	//选择排序法：（1）第一轮：先找出所有数的中最小的数，并让其和第一个数交换位置；
	//            （2）第二轮：第一个数不变，在第二个数到最后一个数之间找出最小的数，并让其和第二个数交换位置；
	//			   (3) 重复以上操作，直到进行(n-1)轮排序为止，此时已排好了前(n-1)个数的顺序，最后一个数自然是最大的；
	for(int i=0;i<n;i++)
	{
		k=i;
		for(int j=i+1;j<n;j++)
			if(*(a+k) > *(a+j)) k=j;//找出从a[i+1]到a[n-1]之间的最小的数的位置；(事实上就是把*(a+k)和a[k]等价，下同)
			if(k!=i)
			{
				int temp;
				temp=*(a+k);
				*(a+k)=*(a+i);
				*(a+i)=temp;
			}
	}
	return 0;
}
*/

/*
//Example2：指针变量作实参，数组名作形参；
int main()
{//输入5个整数，并为其中的前n个整数从小到大进行排序；
	
	int sort(int a[],int n);
	int array[5],num,*p;
	p=array;//指针变量p指向array[0];
	printf("Please enter 5 number:\n");
	for(int i=0;i<5;i++)
		scanf("%d",p++);//输入的整数依次存储到指针变量p所指向的存储单元中；
	printf("How many numbers do you want to sort:\n");
	scanf("%d",&num);
	sort(array,num);
	p=array;//关键一步：注意一定要重新将指针变量p赋值为&array[0];因为经过第一个for循环p的值为&array[5];
	for(int j=0;j<5;j++)
	{
		printf("%d\t",*p);
		p++;
	}
	printf("\n");
	return 0;
}
//数组作形参
int sort(int a[],int n)
{
	int k;
	//选择排序法：（1）第一轮：先找出所有数的中最小的数，并让其和第一个数交换位置；
	//            （2）第二轮：第一个数不变，在第二个数到最后一个数之间找出最小的数，并让其和第二个数交换位置；
	//			   (3) 重复以上操作，直到进行(n-1)轮排序为止，此时已排好了前(n-1)个数的顺序，最后一个数自然是最大的；
	for(int i=0;i<n;i++)
	{
		k=i;
		for(int j=i+1;j<n;j++)
			if(a[k]>a[j]) k=j;//找出从a[i+1]到a[n-1]之间的最小的数的位置；
			if(k!=i)
			{
				int temp;
				temp=a[k];
				a[k]=a[i];
				a[i]=temp;
			}
	}
	return 0;
}
*/

/*
//Example1: 数组名作实参，数组名作形参；
int main()
{//输入5个整数，并为其中的前n个整数从小到大进行排序；
	
	int sort(int a[],int n);
	int array[5],num;
	printf("Please enter 5 number:\n");
	for(int i=0;i<5;i++)
		scanf("%d",&array[i]);
	printf("How many numbers do you want to sort:\n");
	scanf("%d",&num);
	sort(array,num);
	for(int j=0;j<5;j++)
		printf("%d\t",array[j]);
	printf("\n");
	return 0;
}

int sort(int a[],int n)
{
	int k;
	//选择排序法：（1）第一轮：先找出所有数的中最小的数，并让其和第一个数交换位置；
	//            （2）第二轮：第一个数不变，在第二个数到最后一个数之间找出最小的数，并让其和第二个数交换位置；
	//			   (3) 重复以上操作，直到进行(n-1)轮排序为止，此时已排好了前(n-1)个数的顺序，最后一个数自然是最大的；
	for(int i=0;i<n;i++)
	{
		k=i;
		for(int j=i+1;j<n;j++)
			if(a[k]>a[j]) k=j;//找出从a[i+1]到a[n-1]之间的最小的数的位置；
			if(k!=i)
			{
				int temp;
				temp=a[k];
				a[k]=a[i];
				a[i]=temp;
			}
	}
	return 0;
}
*/