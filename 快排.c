#include <stdio.h>
/*
1�������������ȴ��������ҳ�һ����������Ȼ��������б���������ŵ��������棬�ѱ���С�����ŵ��������棬�ٶ����������������������ֱ������ֻ��һ������ 
2�����η� 
*/

int arr[] = {12,34,656,122,990,1};

int AdjustArray(int arr[],int l,int r)
{
	int i = l,j = r;
	int x = arr[i];
	while(i<j)
	{
		while(i < j&&arr[j] > x) //������ĩβ�ҳ��Ȼ�����С���� 
			j--;
		if(i<j)
		{
			arr[i] = arr[j];
			i++;
		}
		while(i < j&&arr[i] < x)//�����俪ͷ�ҳ��Ȼ���������� 
			i++;
		if(i < j)
		{
			arr[j] = arr[i];
			j--;
		}
	}
	arr[i] = x;
	return i;
 } 
 
 void quick_sort(int arr[], int l, int r)
 {
 	if(l < r)
 	{
 		int i = AdjustArray(arr,l,r);//��������߶��Ǳ���С�������������ұ߶��Ǳ�����������Ի�������λ��Ϊ�磬�ֳ��������䣬�ڽ����������� 
 		quick_sort(arr,l,i - 1);//i�ǻ���������Ӧ����ȥ������ 
 		quick_sort(arr,i + 1,r);
	 }
 }
 
 void main()
{
	int n = sizeof(arr)/sizeof(arr[0]);
	quick_sort(arr,0,n - 1);
	int index;
	for(index = 0;index < n;index++)
	{
		printf("%d\n",arr[index]);
	}
} 
