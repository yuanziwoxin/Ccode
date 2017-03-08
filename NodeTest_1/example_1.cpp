#include <stdio.h>
int main()
{
	//输入两个整数，并调用函数利用指针对其从小到大进行排序
	int swap(int *qt1,int *qt2);
	int *p1,*p2,a,b;
	printf("please enter two integer:\n");
    scanf("%d%d",&a,&b);
	p1=&a;
	p2=&b;
	if(a>b)
		swap(p1,p2);
	printf("%d %d\n",*p1,*p2);//注意这里的*p1的值其实就是a,*p2的值就是b,因为指针变量p1指向的就是整数a;
	printf("%d %d\n",a,b);//效果与上面一样
	return 0;
}
//这里交换只是把a和b的值给交换了，并没有交换指针变量qt1和qt2的值
int swap(int *qt1,int *qt2)
{
	int temp;
	temp=*qt1;//这里的"*"表示指向的意思，*qt1即表示指针变量qt1指向的整形变量（即为a）；
	*qt1=*qt2;
	*qt2=temp;
	return 0;
}
/*
//example1:
int main()
{
	
	//输入两个整数并利用指针对其从小到大进行排序
	
	int *p1,*p2,*p,a,b;
	printf("Please enter two integer:\n");
	scanf("%d%d",&a,&b);
	p1=&a;
	p2=&b;
	if(a>b)
	{//当a大于b时，交换指针变量的值（即地址），原来指向整数a的指针变量p1现在指向b,原来指向整数b的指针变量p2现在指向a;	 
		p=p1;
		p1=p2;
		p2=p;
	}
	printf("%d %d\n",*p1,*p2);//交换成功
	printf("%d %d\n",a,b);//a，b依然为原来的值
	return 0;
}
*/