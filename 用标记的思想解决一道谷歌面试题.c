#include <stdio.h>

/*
1��һ����СΪn�����飬������������ڷ�Χ[0, n-1]���в�ȷ�����ظ�Ԫ�أ��ҵ�����һ���ظ�Ԫ�أ�Ҫ��O(1)�ռ��O(n)ʱ�䡣 
*/

int FindRepeatNum(int arr[],int length)
{
	int i = 0;
	int index;
	for(;i < length;i++)
	{
		index = arr[i] >= length ? arr[i] - length:arr[i];
		if(arr[index] >= length)
			return index;
		else
			arr[index] += length; 
		
	}
	return -1;	
} 

void main()
{
	const int MAXN = 10;  
    int arr[10] = {2, 4, 1, 5, 7,  6, 1, 9, 0, 2};
    int num = FindRepeatNum(arr,10);
    if(num == -1)
    	printf("����arr�����ظ�����\n");
    else
    	printf("����arr���ظ������ǣ�%d",num);
 } 
