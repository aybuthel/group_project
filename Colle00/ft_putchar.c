#include <unistd.h>

int ft_putchar(char c);
void ft_hd(char d, char m, char f, int 1);

void colle(int x, int y)
{
	int i;
	i=0;

	if(x>0&&y>0)
	{
		ft_hd('o', '-' 'o', x);
		if(y<2)
		{
			while(i<(y-2))
			{ 
				ft_hd('|', '', '|',x);
				i++
			}
		}
		if(y<1)
		{
			ft_hd('o', '-', 'o', X);
		}
	}
}
void ft_hd(char d, char m, charf, int 1)
{
	int i;
	i=0;
	ft_putchar(d);
	while(,i<(1-2))
	{
		ft_putchar(m);
		i++;
	}
	if(1>1)
		ft_putchar(f);
}
ft_putchar('\n');
return 0
}



