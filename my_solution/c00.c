#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)   //00
{
	write(1,&c,1);
}

void ft_print_alphabet(void)  //01
{
	char c='a';
	while(c!='z'+1)
	{
	write(1,&c,1);
	write(1,"\n",1);
	c++;
	}
}

void ft_print_reverse_alphabet(void){  //02
	char c='z';
	while(c!='a'-1)
	{
	write(1,&c,1);
	write(1,"\n",1);
	c--;
	}
}

void ft_print_numbers(void){  //03

	write(1,"0123456789\n",11);

}

void ft_is_negative(int n)  //04
{

	if(n<0) write(1,"N",1);
	else 	write(1,"P",1);
}

void ft_print_comb(void){  //05
	char a='0',b='1',c='2';

	while(a!='8'){
		while(b!='9'){
			while(c!='9'+1){
				if(a!=b && a!=c && b!=c){
					write(1,&a,1);
					write(1,&b,1);
					write(1,&c,1);
					write(1,", ",2);
				}
				c++;
			}
			b++;
			c='2';
		}
		a++;
		b='1';
	}


}

void ft_print_comb2(void){  //06
	char a='0',b='1';
	while(a!=':'){
		while(b!=':'){
			write(1,"00 ",3);
			write(1,&a,1);
			write(1,&b,1);
			write(1,", ",2);		
			b++;
		}
		a++;
		b='1';
	}
	 a='0';
	 b='1';
	while(a!=':'){
		while(b!=':'){
			write(1,", ",2);
			write(1,&a,1);
			write(1,&b,1);
			b++;
		}
		a++;
		b='1';
	}
}


int main(){

}
