#include <stdio.h>

int ft_atoi(const char *str){
	int i=0,num=0;
	while(str[i]){
		if(str[i]>='0' && str[i]<='9'){
			num=num*10+(int)(str[i]-'0');
		}else return num;
		i++;
	}

return num;
}


int main(){

 char* str="23345n5";
 printf("%d",ft_atoi(str));


}
