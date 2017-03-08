#include <stdio.h>
//Example3：输入两个整数，然后以求通过调用函数以及交换指针变量的值对这两个整数进行排序（结果：排序失败）
int main()
{
	int swap(int *qt1,int *qt2);
	int *p1,*p2,a,b;
	printf("Please enter two integer:\n");
	scanf("%d%d",&a,&b);
	p1=&a;
	p2=&b;
	if(a>b)
	swap(p1,p2);
	//输出的两个数并没从小到大的顺序进行排列，而是原样输出；
	//因为虽两个实参的值（p1和p2）传递给了两个形参(qt1和qt2),然后两个形参的值（即指针变量的值--地址）进行了交换,
	//但是交换之后的形参值并不能返回给之前的两个实参并修改它们的值，
	//(请注意：实参与形参之间的数据传递是“单向”的值传递，实参可以改变形参的值，但是形参不可以改变实参的值);
	printf("%d %d\n",*p1,*p2);
    printf("%d %d\n",a,b);//同上（因为a和b并没有交换值）
	return 0;
}
//交换指针变量的值（即地址）
int swap(int *qt1,int *qt2)
{
	int *temp;
	temp=qt1;
	qt1=qt2;
	qt2=temp;
	return 0;
}
/*
int main()
{
	char p[10]="abc";
	char q[]="xyz";
	int i=0;
	while((*(p+i))!='\0') 
		i++;
	int j=0;
	i++;
	while((*(q+j))!='\0')
	{
		*(p+i)=*(q+j);
		j++;
	}
	printf("%s\n",p);//输出结果为abc,因为第一个跳出while循环时i=3,注意p[3]='\0'（即结束符），
	                 //再i++之后i=4，经过第二个while循环之后则使p[4]=q[2]='z',然而前面有结束符，所以早已结束了，不会输出‘z’;
	return 0;
}
*/

/*
//example2:
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
	temp=*qt1;//这里的"*"表示指向的意思，*qt1即表示指针变量qt1指向的整型变量（即为a）；
	*qt1=*qt2;
	*qt2=temp;
	return 0;
}*/

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