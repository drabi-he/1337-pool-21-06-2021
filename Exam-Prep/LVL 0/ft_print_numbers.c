#include<unistd.h>

void ft_print_numbers(void)
{
	write(1,"0123456789",10);
}

//do not send main
int main()
{
	ft_print_numbers();
	return 0;
}
