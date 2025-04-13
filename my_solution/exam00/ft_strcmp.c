#include <stdio.h>
int ft_strcmp(char *s1,char *s2)
{
	int len1=0,len2=0,i=0;
//	while(s1[i]){
//
//		len1++;
//		i++;
//
//	}
//	i=0;
//	while(s2[i]){
//		len2++;
//		i++;
//	
//	}
//	i=0;
//	len1=(len1>=len2)?len1:len2;
//	while(len1>0){
//		
//		if(s1[i]!=s2[i]){
//			return s1[i]-s2[i];
//		}
//		i++;
//		len1--;
//	}

	while(s1[i] && s2[i] && s1[i]==s2[i]){
	i++;
	}
	return s1[i]-s2[i];
}


int main(){

printf("%d",ft_strcmp("cat","cats"));


}












