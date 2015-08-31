#include <stdio.h>
/*
1�������ԣ���һ�������У�ÿ��������һ�����������i < j������a[i] > a[j]����� a[i] �� a[j]��һ��������
2���򵥵ķ���ȥ�������ԣ��㷨���Ӷ��� O(N^2)�����ù鲢�����˼��ȥ�������ԣ��㷨���Ӷ��� O(N*LogN); 
3�����ַ����ǰ�һ�������ȷֳ�һ�����������飬�ںϲ����ڵ���������ʱ��ȥѡ�����������н�С��Ԫ�أ����ѡ������ߵģ��� ������ǰ�ģ��򲻷��������Ե�Ҫ�����ѡ������ұߵļ���������ģ�
��˵��ѡ������Ԫ�غ�������Ǹ������Ƚϵ�Ԫ�ؼ��������֮���Ԫ�ض�����������ԡ� 

*/ 

int n_count;

void AdjustArr(int arr[],int first, int mid, int last,int tmp[])
{
	int i = first, j = mid;
	int k = mid + 1, l =last;
	int m = 0;
	while(i <= j&&k <= l)
	{
		if(arr[i] <= arr[k])
			tmp[m++] = arr[i++];
		else
		{
			tmp[m++] = arr[k++];
			n_count += j - i + 1; //a[j]��a[i]��a[i + 1]......a[mid]������������ԡ� 
		}
	}
	while(i <= j)
		tmp[m++] = arr[i++];
	while(k <= l)
		tmp[m++] = arr[k++]; 
	for(i = 0;i < m;i++)
		arr[i+first] = tmp[i];
}

void merge_sort(int arr[],int first,int last,int tmp[])
{
	if(first < last)
	{
		int mid = (first + last)/2;
		merge_sort(arr,first,mid,tmp);
		merge_sort(arr,mid + 1,last,tmp);
		AdjustArr(arr,first,mid,last,tmp);
	}
}

void main()
{
	int arr[8] = {1, 7, 2, 9, 6, 4, 5, 3};
	int tmp[8];
	merge_sort(arr,0,7,tmp);
	printf("����arr�������Եĸ����ǣ� %d",n_count);
}
