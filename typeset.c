#include <stdio.h>
#include <string.h>

#define N 80

void edit(char *s)
{
	int i = 0,sp = 0,w = 0,inw = 0,v = 0,r = 0;
	char buf[N], *str;
	for(;s[i] != '\0';i++){
		if(s[i]==' ')//����ո�ĸ��� 
		{
			printf("come in if\n");
			sp++;
			inw = 0;
		}
		else if(!inw)//��ǰһ���ǿո�ʱ���뷽����inw�ĳ�ʼֵ��������Ϊ����֮ǰ�趨��һ���ո� 
		{
			w++;
			inw = 1;
		}
	}
	if(w <= 1)
		return;
	v = sp / (w - 1);//����ÿ��������֮��Ŀո��� 
	r = sp % (w - 1);//����Ŀո��� 
	strcpy(buf, s);
	for(str = buf;;){
		printf("come in for\n");
		while(*str == ' ')//����Ӧ���ǵ�strָ����ַ��ǿո���ֹ���˺�Ӧ���ٶ�ָ����в��������� *str++ == ' '�Ǵ���ģ���Ϊ��ѭ������������ʱ������������whileѭ����ֹ�������str���м�һ���� 
		{
			str++;
		}
		     
		for(;*str&&*str != ' ';)
		{
			*s = *str;//�Ե����ַ����и��� 
			s++;
			str++;
		}
		if( --w == 0)
			return;
		for(i = 0;i<v;i++)
		{
			*s++ = ' ';//��ֵ�ո� 
		
		}
		if(r){
			*s++ = ' ';//��ֵ����Ŀո� 
			--r;
		}
	}
}

char input[N];


void main(){
	printf("please input....\n");
	gets(input);
	edit(input);
	printf("after editing is \n");
	printf("%s",input);
	
}
