#include<unistd.h>

int main()
{
	char c = 'z';
	char m;
	while(c >= 'a')
	{
		if(c % 2==1)
		{
			m = c - 32;
		   write(1,&m,1);
		}
		else
			write(1,&c,1);
	c--;
	}
	write(1,"\n",1);
	return 0;
}
