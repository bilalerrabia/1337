#include <unistd.h>


void only_a(void)
{
	write(1,"a",1);
}

int main(void){

	only_a();
}
