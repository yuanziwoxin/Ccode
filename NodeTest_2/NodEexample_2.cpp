#include <stdio.h>
//Example4:������ʵ�Σ�ָ��������βΣ�
int main()
{//����5����������Ϊ���е�ǰn��������С�����������
	
	int sort(int *a,int n);//ָ��������β�
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
//ָ��������β�
int sort(int *a,int n)
{
	int k;
	//ѡ�����򷨣���1����һ�֣����ҳ�������������С������������͵�һ��������λ�ã�
	//            ��2���ڶ��֣���һ�������䣬�ڵڶ����������һ����֮���ҳ���С������������͵ڶ���������λ�ã�
	//			   (3) �ظ����ϲ�����ֱ������(n-1)������Ϊֹ����ʱ���ź���ǰ(n-1)������˳�����һ������Ȼ�����ģ�
	for(int i=0;i<n;i++)
	{
		k=i;
		for(int j=i+1;j<n;j++)
			if(*(a+k) > *(a+j)) k=j;//�ҳ���a[i+1]��a[n-1]֮�����С������λ�ã�(��ʵ�Ͼ��ǰ�*(a+k)��a[k]�ȼۣ���ͬ)
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
//Example3��ָ�������ʵ�Σ�ָ��������βΣ�
int main()
{//����5����������Ϊ���е�ǰn��������С�����������
	
	int sort(int *a,int n);//ָ��������β�
	int array[5],num,*p;
	p=array;//ָ�����pָ��array[0];
	printf("Please enter 5 number:\n");
	for(int i=0;i<5;i++)
		scanf("%d",p++);//������������δ洢��ָ�����p��ָ��Ĵ洢��Ԫ�У�
	printf("How many numbers do you want to sort:\n");
	scanf("%d",&num);
	sort(p,num);
	p=array;//�ؼ�һ����ע��һ��Ҫ���½�ָ�����p��ֵΪ&array[0];��Ϊ������һ��forѭ��p��ֵΪ&array[5];
	for(int j=0;j<5;j++)
	{
		printf("%d\t",*p);
		p++;
	}
	printf("\n");
	return 0;
}
//ָ��������β�
int sort(int *a,int n)
{
	int k;
	//ѡ�����򷨣���1����һ�֣����ҳ�������������С������������͵�һ��������λ�ã�
	//            ��2���ڶ��֣���һ�������䣬�ڵڶ����������һ����֮���ҳ���С������������͵ڶ���������λ�ã�
	//			   (3) �ظ����ϲ�����ֱ������(n-1)������Ϊֹ����ʱ���ź���ǰ(n-1)������˳�����һ������Ȼ�����ģ�
	for(int i=0;i<n;i++)
	{
		k=i;
		for(int j=i+1;j<n;j++)
			if(*(a+k) > *(a+j)) k=j;//�ҳ���a[i+1]��a[n-1]֮�����С������λ�ã�(��ʵ�Ͼ��ǰ�*(a+k)��a[k]�ȼۣ���ͬ)
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
//Example2��ָ�������ʵ�Σ����������βΣ�
int main()
{//����5����������Ϊ���е�ǰn��������С�����������
	
	int sort(int a[],int n);
	int array[5],num,*p;
	p=array;//ָ�����pָ��array[0];
	printf("Please enter 5 number:\n");
	for(int i=0;i<5;i++)
		scanf("%d",p++);//������������δ洢��ָ�����p��ָ��Ĵ洢��Ԫ�У�
	printf("How many numbers do you want to sort:\n");
	scanf("%d",&num);
	sort(array,num);
	p=array;//�ؼ�һ����ע��һ��Ҫ���½�ָ�����p��ֵΪ&array[0];��Ϊ������һ��forѭ��p��ֵΪ&array[5];
	for(int j=0;j<5;j++)
	{
		printf("%d\t",*p);
		p++;
	}
	printf("\n");
	return 0;
}
//�������β�
int sort(int a[],int n)
{
	int k;
	//ѡ�����򷨣���1����һ�֣����ҳ�������������С������������͵�һ��������λ�ã�
	//            ��2���ڶ��֣���һ�������䣬�ڵڶ����������һ����֮���ҳ���С������������͵ڶ���������λ�ã�
	//			   (3) �ظ����ϲ�����ֱ������(n-1)������Ϊֹ����ʱ���ź���ǰ(n-1)������˳�����һ������Ȼ�����ģ�
	for(int i=0;i<n;i++)
	{
		k=i;
		for(int j=i+1;j<n;j++)
			if(a[k]>a[j]) k=j;//�ҳ���a[i+1]��a[n-1]֮�����С������λ�ã�
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
//Example1: ��������ʵ�Σ����������βΣ�
int main()
{//����5����������Ϊ���е�ǰn��������С�����������
	
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
	//ѡ�����򷨣���1����һ�֣����ҳ�������������С������������͵�һ��������λ�ã�
	//            ��2���ڶ��֣���һ�������䣬�ڵڶ����������һ����֮���ҳ���С������������͵ڶ���������λ�ã�
	//			   (3) �ظ����ϲ�����ֱ������(n-1)������Ϊֹ����ʱ���ź���ǰ(n-1)������˳�����һ������Ȼ�����ģ�
	for(int i=0;i<n;i++)
	{
		k=i;
		for(int j=i+1;j<n;j++)
			if(a[k]>a[j]) k=j;//�ҳ���a[i+1]��a[n-1]֮�����С������λ�ã�
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