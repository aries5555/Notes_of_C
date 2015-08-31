#include <stdio.h>
/*
1���鲢����ġ��顯�ǵݹ�ĺ��壬�������Ǻϲ��ĺ���
2��������ֳ�����С�飬�ٵݹ�ؽ�ÿ��С��ֳ�����С�飬ֱ��С����ֻ��һ��Ԫ�أ����ǾͿ�����ΪС��������ģ�Ȼ������ڵ�����С��ϲ� 
*/ 

int arr[] = {12,34,656,122,990,1};

void merge_array(int arr[],int first,int mid,int last,int tmp[])//�ϲ����ڵ�����С�� 
{
	int i = first, j = mid + 1;
	int m = mid, n = last;
	int k = 0;
	while(i <= m && j <= n)//�����������ĸ�Ԫ�ش�ȡ�ĸ���ֱ��ȡ��һ������ȡ����������Ϊֹ�� 
	{
		if(arr[i] <= arr[j])
			tmp[k++] = arr[i++];
		else
			tmp[k++] = arr[j++];
	}
	
	while(i <= m)
		tmp[k++] = arr[i++];
	while(j <= n)
		tmp[k++] = arr[j++];
	for(i = 0;i < k;i++)
		arr[first + i] = tmp[i];
}

void merge_sort(int arr[],int first,int last,int tmp[])//�ݹ�ؽ�С��ֿ���ʹÿ��С�������� 
{
	if(first < last)
	{
		int mid = (first + last)/2;
		merge_sort(arr,first,mid,tmp);
		merge_sort(arr,mid + 1,last,tmp);
		merge_array(arr,first,mid,last,tmp);
	}
}

void main()
{
	int n = sizeof(arr)/sizeof(arr[0]);
	int p[n];
	merge_sort(arr,0,n - 1,p);
	int index;
	for(index = 0;index < n;index++)
	{
		printf("%d\n",arr[index]);
	}
} 
