#include <stdio.h>
#include <stdlib.h>

int m_atoi(char s[])
{
	int i,n,sign;
	for(i = 0;isspace(s[i]);i++)//�ǿո�Ϊ�棬�����ո�
	 	;
	sign = (s[i] == '-') ? -1:1;//�Ƿ��Ǹ���
	if(s[i] == '+'||s[i] == '-')//�������� 
		i++; 
	for(n = 0;isdigit(s[i]);i++)
		n = 10 * n + (s[i] - '0');
	return n * sign;
}

double m_atof(char s[])
{
	int i,sign;
	double n , power;
	for(i = 0;isspace(s[i]);i++)
		;
	sign = (s[i] == '-')?-1:1;
	for(n = 0.0;isdigit(s[i]);i++)
		n = n * 10.0 + (s[i] - '0');
	if(s [i] == '.')//ȷ��С���� 
		i++;
	for(power = 1.0;isdigit(s[i]);i++){
		n = n * 10.0 + (s[i] - '0');//�Ⱥ���С���� 
		power *= 10.0;
	}
		
	return sign * n / power;//���� 
}
void main()
{
	printf("""  -231""��:%d",m_atoi("  -231"));
	printf("""   23.9""��%.1f",m_atof("   23.9"));
}
