#include <stdio.h>
#include <math.h>
#include "babacaoquadrado.h"
#include "namoralaoquadrado.h"
#include "menus.h"

int main(){
	int a, b, c, menu, fim, segundo_menu, terceiro_menu;
	menu = principal();
	do
	if ((menu==1) || (menu==2)){
	printf("Digite a: "); scanf("%d", &a);
	printf("Digite b: "); scanf("%d", &b);
	printf("Digite c: "); scanf("%d", &c);
		if (menu==2){
			soma_produto(a, b, c);
			segundo_menu = menu_babaca();
			if (segundo_menu==1){
				menu=2;
			} else{
				terceiro_menu = conversao();
				if (terceiro_menu==1){
					menu=1;
				} else{
					fim=1;
				}
			}
		} else if(menu==1){
			bhaskaras_way(a, b, c);
			segundo_menu = menu_namoral();
			if (segundo_menu==1){
				menu=1;
			} else{
				terceiro_menu = virei_babaca();
				if (terceiro_menu==1){
					menu=2;
				} else{
					fim=1;
				}
			}
		}
    } else if (menu==3){
    	faq();
    	while(getchar()!='\n');{
        	getchar();
    	}
    	menu = principal();
    } else if(menu==4){
		fim = 1;
	} else{
    	printf("DIGITE UMA OPCAO VALIDA OTARIO!\n");
    	menu = principal();
    }
    while(fim!=1);
	return 0;
}
