#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


 char * ft_strcpy(char*dest,char*src) // 00
{
    int i=0;
    while(src[i])
    {
        dest[i]=src[i];
        i++;
    }
    dest[i]='\0';
    return dest;
}

char * ft_strncpy(char*dest,char*src,unsigned int n)//01
{
    int i=0;
    while(i<n)
    {
        dest[i]=src[i];
        i++;
    }
    dest[i]='\0';
    return dest;
}

int ft_str_is_alpha(char *str) //02
{
    int i=0;
    while(str[i])
    {
        if(str[i]<'a' || str[i]>'z'){
            return 0;
        }
        i++;
    }
    return 1;
}

int ft_str_is_numeric(char *str) //03
{
    int i=0;
    while(str[i])
    {
        if(str[i]<'0' || str[i]>'9'){
            return 0;
        }
        i++;
    }
    return 1;
}

int ft_str_is_lowercase(char * str){ //04
    int i=0;
    while(str[i]){
        if(str[i]<'a'||str[i]>'z')
            return 0;
        i++;
    }
    return 1;
}

int ft_str_is_uppercase(char * str){ //05
    int i=0;
    while(str[i]){
        if(str[i]<'A'||str[i]>'Z')
            return 0;
        i++;
    }
    return 1;
}

int ft_str_is_printable(char* str){  //06
    int i=0;
    while(str[i]){
        if(str[i]<32 || str[i]>126)
            return 0;
        i++;
    }
    return 1;
}

char* ft_strupcase(char* str){  //07
    int i=0;

    while(str[i]){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]-=32;
        }
        i++;
    }

    return str;
}

char* ft_strlowcase(char* str){  //08
    int i=0;

    while(str[i]){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i]+=32;
        }
        i++;
    }

    return str;
}

char * ft_strcapitalize(char *str){ //09
    int i=0;
    if(str[0]=='\0') return str;
    while(str[i+1] != '\0'){
        if(str[i]==' ' || str[i]=='+' ||str[i]=='-')

            if(str[i+1]>='a' && str[i+1]<='z')
                str[i+1]-=32;
        i++;
    }
    if(str[0]>='a' && str[0]<='z')  
        str[0]-=32;
    return str;
}

unsigned int ft_strlcpy(char*dest,char * src,unsigned int size){ //10
    int i=0;
    while(i<size-1){
        dest[i]=src[i];
        i++;
    }
    int j=0;
    while(src[j]){
        j++;
    }
    dest[i]='\0';
    return j;
}

int main(void)
{
    // char name[]="bilal";
    char name1[]="bilalerrabia";
    char name2[20];
    printf("%d",ft_strlcpy(name2,name1,5));
    printf("%s",name2);

// printf("%s",ft_strlowcase(name1));

}


