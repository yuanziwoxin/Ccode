#include <stdio.h>
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
	temp=*qt1;//�����"*"��ʾָ�����˼��*qt1����ʾָ�����qt1ָ������α�������Ϊa����
	*qt1=*qt2;
	*qt2=temp;
	return 0;
}
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