#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 100

char buf[BUFSIZE];//ungetch�Ļ����� 
int bufp = 0;

void main(){
	test();
}

int getch(void)
{
	printf("come in getch\n");
	return (bufp > 0)?buf[--bufp]:getchar();//���ungetch������Ϊ�գ������getchar�������ж�ȡ 
}

void ungetch(int c)
{
	if(bufp >= BUFSIZE)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++] = c;//���˻صĴ洢���������� 
}
