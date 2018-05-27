//To fazendo merda mas fds

void soma_produto(int a, int b, int c){
	int x[4],soma, produto, x_linha, x_linha_limite,  x_duas_linhas, saida, soma_linha, produto_linha;

	soma = -b/a;
	produto = c/a;
	x_linha = -100;
	x_linha_limite= 100;

	do{
		for (int x_duas_linhas = x_linha; x_duas_linhas <= x_linha_limite; ++x_duas_linhas){

			soma_linha=x_linha+x_duas_linhas;
			produto_linha=x_linha*x_duas_linhas;

			if ((produto==produto_linha) && (soma==soma_linha)){
				x[0]=x_duas_linhas;
				x[1]=x_linha;
				saida=1;
			}else if (x_linha==100){
				x_linha=-500;
				x_duas_linhas=500;
				printf("Ops, isso vai demorar um pouco.\n");
			}else if (x_linha==-101){
				x_linha=101;
				printf("Ops, isso vai demorar um pouco..\n");
				break;
			}else if (x_linha==500){
				x_linha=-1000;
				x_duas_linhas=1000;
				printf("Ops, isso vai demorar um pouco...\n");
			}else if (x_linha==-501){
				x_linha=501;
				printf("Ops, isso vai demorar um pouco....\n");
				break;
			}else if (x_linha==1000){
				x_linha=-10000;
				x_duas_linhas=10000;
				printf("Ops, isso vai demorar um pouco.....\n");
			}else if (x_linha==-1001){
				x_linha=1001;
				printf("Ops, isso vai demorar um pouco......\n");
				break;
			}else if (x_linha==100000){
				x_linha=-100000;
				x_duas_linhas=100000;
				printf("Ops, isso vai demorar bastante.......\n");
			}else if (x_linha==-10001){
				x_linha=10001;
				printf("Ops, isso vai demorar bastante........\n");
				break;
			}else if (x_linha==1000000){
				x_linha=-1000000;
				x_duas_linhas=1000000;
				printf("Ops, isso vai demorar bastante.........\n");
			}else if (x_linha==-100001){
				x_linha=100001;
				printf("Ops, isso vai demorar bastante..........\n");
				break;
			}else if (x_linha==10000000){
				x_linha=-10000000;
				x_duas_linhas=10000000;
				printf("Ops, isso vai demorar bastante.............\n");
			}else if (x_linha==-1000001){
				x_linha=1000001;
				printf("Ops, isso vai demorar bastante..............\n");
				break;
			}else if (x_linha==100000000){
				x_linha=-100000000;
				x_duas_linhas=100000000;
				printf("Ops, isso vai demorar muito tempo, você digitou os valores corretos?...............\n");
			}else if (x_linha==-10000001){
				x_linha=10000001;
				printf("Ops, isso vai demorar muito tempo, você digitou os valores corretos?.................\n");
				break;
			}else if (x_linha==1000000000){
				x_linha=-1000000000;
				x_duas_linhas=1000000000;
				printf("Ops, isso vai demorar muito tempo, você digitou os valores corretos?..................\n");
			}else if (x_linha==-100000001){
				x_linha=100000001;
				printf("Ops, isso vai demorar muito tempo, você digitou os valores corretos?...................\n");
				break;
			}else if (x_linha==10000000000){
				x_linha=-2147483648;
				x_duas_linhas=2147483648;
				printf("Ops, isso vai demorar muito tempo, você digitou os valores corretos?....................\n");
			}else if (x_linha==-1000000001){
				x_linha=1000000001;
				printf("Ops, isso vai demorar muito tempo, você digitou os valores corretos?.....................\n");
				break;												
			}
		}

	if(x_duas_linhas==2147483648){	
		saida=1;
		x[2]=1;
	}

	x_linha++;

	} while(saida!=1);

	if(x[2]==1){
		printf("As raizes nao existem!\n");
	} else{
		printf("As raizes da equacao sao: %d e %d!\n", x[0], x[1]);
	}
}