#include <stdio.h>

int arr [] = {123,1233321,4554};

void circle(int tmp)
{
	int m = tmp;
	int n = 0;
	while(m)
	{
		n = n * 10 + m % 10; //�Ѵ������ַ�ת����ĩβ�����ַŵ���λ 
		m /= 10; //ȥ��ĩβ���� 
		printf("this n is %d \n",n);
		printf("this m is %d \n",m);
	}
	if(n == tmp){
		printf("%d is a circle \n",tmp);
	}else{
		printf("%d is not a circle \n",tmp);
	}
}
void main()
{
		circle(arr[0]);
		circle(arr[1]);
		getch();
} 
