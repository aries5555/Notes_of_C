#include <stdio.h> 

int arr[] = {12,34,656,122,990,1};
void select_sort(int arr[], int n)
{
	int i, j, MinIndex;
	for(i = 0;i < n;i++)
	{
		MinIndex = i;//ÿ��ѭ��Ϊiѡ��һ������Ҫ���ֵ���� �� i+1,i+2,i+3.......n-1��������ѡ��һ����С��ֵ������0,1,2...i����Ϊ�������� 
		for(j = i + 1;j < n;j++)
		{
			if(arr[j] < arr[MinIndex])
				MinIndex = j;
		}
		int tmp = arr[i];
		arr[i] = arr[MinIndex];
		arr[MinIndex] = tmp;
	}
 } 


void main()
{
	int n = sizeof(arr)/sizeof(arr[0]);
	select_sort(arr,n);
	int index;
	for(index = 0;index < n;index++)
	{
		printf("%d\n",arr[index]);
	}
}
