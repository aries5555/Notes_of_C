#include <stdio.h>
/*
1��һ����СΪn�����飬������������ڷ�Χ[0, n-1]���в�ȷ�����ظ�Ԫ�أ��ҵ�����һ���ظ�Ԫ�أ�Ҫ��O(1)�ռ��O(n)ʱ�䡣

 */ 
 
int FindRepeatNum(int arr[],int MAXN)
{
	int i = 0;
	int j = 0;
	//int tmp;
	for(;i < MAXN;i++)
	{
		while(i != arr[i])
		{
			if(arr[i] == arr[arr[i]])
				return arr[i];
			int tmp = arr[arr[i]];
			arr[arr[i]] = arr[i];
			arr[i] = tmp;
			
		}
	}
	return -1;
}



void main()
{
    int arr[4] = {2, 1, 3,2};
    int num = FindRepeatNum(arr,4);
    if(num == -1)
    	printf("����arr�����ظ�����\n");
    else
    	printf("����arr���ظ������ǣ�%d",num);
 } 


