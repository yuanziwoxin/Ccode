#include <stdio.h>
//Example3����������������Ȼ������ͨ�����ú����Լ�����ָ�������ֵ�������������������򣨽��������ʧ�ܣ�
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
	//�������������û��С�����˳��������У�����ԭ�������
	//��Ϊ������ʵ�ε�ֵ��p1��p2�����ݸ��������β�(qt1��qt2),Ȼ�������βε�ֵ����ָ�������ֵ--��ַ�������˽���,
	//���ǽ���֮����β�ֵ�����ܷ��ظ�֮ǰ������ʵ�β��޸����ǵ�ֵ��
	//(��ע�⣺ʵ�����β�֮������ݴ����ǡ����򡱵�ֵ���ݣ�ʵ�ο��Ըı��βε�ֵ�������ββ����Ըı�ʵ�ε�ֵ);
	printf("%d %d\n",*p1,*p2);
    printf("%d %d\n",a,b);//ͬ�ϣ���Ϊa��b��û�н���ֵ��
	return 0;
}
//����ָ�������ֵ������ַ��
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
	printf("%s\n",p);//������Ϊabc,��Ϊ��һ������whileѭ��ʱi=3,ע��p[3]='\0'��������������
	                 //��i++֮��i=4�������ڶ���whileѭ��֮����ʹp[4]=q[2]='z',Ȼ��ǰ���н��������������ѽ����ˣ����������z��;
	return 0;
}
*/

/*
//example2:
int main()
{
	//�������������������ú�������ָ������С�����������
	int swap(int *qt1,int *qt2);
	int *p1,*p2,a,b;
	printf("please enter two integer:\n");
    scanf("%d%d",&a,&b);
	p1=&a;
	p2=&b;
	if(a>b)
		swap(p1,p2);
	printf("%d %d\n",*p1,*p2);//ע�������*p1��ֵ��ʵ����a,*p2��ֵ����b,��Ϊָ�����p1ָ��ľ�������a;
	printf("%d %d\n",a,b);//Ч��������һ��
	return 0;
}
//���ｻ��ֻ�ǰ�a��b��ֵ�������ˣ���û�н���ָ�����qt1��qt2��ֵ
int swap(int *qt1,int *qt2)
{
	int temp;
	temp=*qt1;//�����"*"��ʾָ�����˼��*qt1����ʾָ�����qt1ָ������ͱ�������Ϊa����
	*qt1=*qt2;
	*qt2=temp;
	return 0;
}*/

/*
//example1:
int main()
{
	
	//������������������ָ������С�����������
	
	int *p1,*p2,*p,a,b;
	printf("Please enter two integer:\n");
	scanf("%d%d",&a,&b);
	p1=&a;
	p2=&b;
	if(a>b)
	{//��a����bʱ������ָ�������ֵ������ַ����ԭ��ָ������a��ָ�����p1����ָ��b,ԭ��ָ������b��ָ�����p2����ָ��a;	 
		p=p1;
		p1=p2;
		p2=p;
	}
	printf("%d %d\n",*p1,*p2);//�����ɹ�
	printf("%d %d\n",a,b);//a��b��ȻΪԭ����ֵ
	return 0;
}
*/