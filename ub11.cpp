#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int x,y,z,t;
	printf("�п�J�T�Ӿ��:\n"); 
	scanf("%d%d%d",&x,&y,&z);
	
		if(x>y)
        {t=x;x=y;y=t;}/*�洫x,y����*/
		if(y>z)
	    {t=y;y=z;z=t;}/*�洫z,y����*/
		if(x>z)
		{t=z;z=x;x=t;}/*�洫x,z����*/
		if(x>y)
        {t=x;x=y;y=t;}/*�b�P�_�åB�洫x,y����*/
	printf("�Ѥp��j��:%d,%d,%d\n",x,y,z);
	system("pause");
	return 0;
}


