#include <stdio.h>

char *ft_strrev(char* str){
	
	int i=0,len=0;
	while(str[i]){
	i++;
	len++;
	}
	int cont=len/2;
	i=0;
	char tmp;
	while(cont>0){	
		tmp=str[i];
		str[i]=str[len-i-1];
		str[len-i-1]=tmp;
		cont--;
		i++;

	}
	return str;

}
