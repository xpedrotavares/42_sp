/*
*	O programa sempre tem um ponto de entrada que em C se chama 	"função main" 

*	int main() // => é a declaração da function main	
	{
		// => o que fará a function main
	}

*	A leitura de um arquivo .c é sempre de cima para baixo

*	Para o computador entender nosso código, ou seja, compilar precisamaos no terminal: $gcc file_name.c

*	Para compilar $gcc -Wall -Wextra -Werror main.c file_name.c

*	Passar norma $norminette -R CheckForbiddenSourceHeader 		ft_print_alphabet.c 
*/


void ft_ultimate_ft(int *********nbr)
{
	int* 1 = 42;
	int** 2 = &1;
	int*** 3 = &2;
	int**** 4 = &3;
	int***** 5 = &4;
	int****** 6 = &5;
	int******* 7 = &6;
	int******** 8 = &7;
	int********* 9 = &8;
	*********nbr = &9; 
	write(1, *********nbr, 1);
}

int            main(void)
{
    printf("quarenta e dois: %d\n", *********nbr);
}
