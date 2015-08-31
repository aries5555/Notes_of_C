//GOOGLE������
//һ����СΪn�����飬������������ڷ�Χ[0, n-1]���в�ȷ�����ظ�Ԫ�أ��ҵ�����һ���ظ�Ԫ�أ�Ҫ��O(1)�ռ��O(n)ʱ�䡣
//By MoreWindows (http://blog.csdn.net/MoreWindows)
#include <stdio.h>
const int NO_REPEAT_FLAG = -1;
void Swap(int &x, int &y)
{
	int t = x;
	x = y;
	y = t;
}
//�����ڻ��������ҳ������е�һ���ظ�Ԫ�ء�
int RadixSort(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		while (i != a[i])
		{
			if (a[i] == a[a[i]])
				return a[i];
			Swap(a[i], a[a[i]]);
		}
	}
	return NO_REPEAT_FLAG;
}
void PrintfArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	putchar('\n');
}
int main()
{
	printf("    �׻������㷨ϵ��֮ʮ һ����Ȥ��GOOGLE������ \n");      
	printf(" -- by MoreWindows( http://blog.csdn.net/MoreWindows ) --\n\n"); 

	const int MAXN = 4;
	int a[MAXN] = {2, 1, 3,2};
	//int a[MAXN] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	printf("����Ϊ: \n");
	PrintfArray(a, MAXN);

	int nRepeatNumber = RadixSort(a, MAXN);
	if (nRepeatNumber != NO_REPEAT_FLAG)
		printf("���������ظ�Ԫ�أ���Ԫ��Ϊ%d\n", nRepeatNumber);
	else
		printf("������û���ظ�Ԫ��\n");
	return 0;
}
