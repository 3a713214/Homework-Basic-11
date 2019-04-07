#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int x,y,z,t;
	printf("叫块俱计:\n"); 
	scanf("%d%d%d",&x,&y,&z);
	
		if(x>y)
        {t=x;x=y;y=t;}/*ユ传x,y*/
		if(y>z)
	    {t=y;y=z;z=t;}/*ユ传z,y*/
		if(x>z)
		{t=z;z=x;x=t;}/*ユ传x,z*/
		if(x>y)
        {t=x;x=y;y=t;}/*耞ユ传x,y*/
	printf("パ:%d,%d,%d\n",x,y,z);
	system("pause");
	return 0;
}


