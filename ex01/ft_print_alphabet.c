#include <unistd.h>

void ft_putchar(char c);

void ft_print_alphabet(void) {
	char start;
	char end;

	start = 'a';
	end ='z';
	while(start <= end) {
		ft_putchar(start);
		start++;
	}
}

void ft_putchar(char c) {
	write(1, &c, 1);
}
	return(0);
} 
