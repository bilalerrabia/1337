#include <unistd.h>
#include <stdio.h>


void ft_ft(int * nbr){ //00
    *nbr=42;
}

void ft_ultimate_ft(int **********nbr){ //01
    **********nbr=42;
}

void ft_swap(int *a,int* b) {//02
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

void ft_div_mod(int a,int b,int *div,int *mod) {//03
    *div=a/b;
    *mod=a%b;

}

void ft_ultimate_div_mod(int *a,int *b){ //04
    int div=*a / *b;
    int mod=*a % *b;
    *a=div;
    *b=mod;
}

void ft_putstr(char* str){  //05
    int i=0;
    while(str[i]){
        write(1,&str[i],1);
        i++;
    }
}

int ft_strlen(char* str){  ///06
    int i=1;
    while(str[i]){
        i++;
    }
    return i;

}

 void ft_rev_int_tab(int* tab,int size){  //07
    int i=0,tmp;
    while(i<size/2){
        tmp=tab[i]; 
        tab[i]=tab[size-1-i];
        tab[size-1-i]=tmp;
        i++;
    }
 }

void ft_sort_int_tab(int *tab,int size){  //08
    int tmp;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(tab[i]>tab[j]){
                tmp=tab[j];
                tab[j]=tab[i];
                tab[i]=tmp;
            }
        }
    }
}


int main(){
    int tab[]={2,3,1,4,1,3,5,6};
    ft_sort_int_tab(tab,8);
    for(int i=0;i<8;i++)
        printf("%d,",tab[i]);
}