#include <stdio.h>

void main()
{
	int i,Max,m,a,b;
	Max = 3000;
	for(a = 1;a<Max;a++)
	{
		for(i = 1,b = 0;i <= a/2;i++)
			if(!(a%i))
				b+=i;
		for(i = 1,m = 0;i <= b/2;i++)
			if(!(b%i))
				m+=i;
		if(a==m&&a < b)//֮������a<b����a!=b��Ϊ�˷�ֹ�����ظ� 
			printf("%d,%d��������---\n",a,b);
	}


	
} 
