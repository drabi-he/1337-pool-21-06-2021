#include <unistd.h>

int main(int ac,char *av[])
{
	int j =0;
	int k =0;

	if(ac == 2)
	{
		while(av[1][j])
		{   k =0;
			if(av[1][j] >='a' && av[1][j] <= 'z')
			{
				while(k <= av[1][j] - 'a')
				{
					write(1,&av[1][j],1);
					k++;
				}
			}
			else if(av[1][j] >='A' && av[1][j] <= 'Z')
			{
				while(k <= av[1][j] - 'A')
				{
					write(1,&av[1][j],1);
					k++;
				}
			}
			else
				write(1,&av[1][j],1);
			j++;
		}
	}
	write(1,"\n",1);
	return 0;
}
