#include<unistd.h>

int main()
{
	char c = 'a';
	char m;
	while(c <= 'z')
	{
		if(c % 2==0)
		{
			m = c - 32;
		   write(1,&m,1);
		}
		else
			write(1,&c,1);
	c++;
	}
	write(1,"\n",1);
	return 0;
}
