int principal(){
	int opcao;

	printf("\n=======================\n");
	printf("BABACAO 3000\n");
	printf("=======================\n\n");
	printf("Ola obrigado por estar usando o Babacao 3000!\n");
	printf("O Babacao 3000 eh um programa que lhe mostra as\n");
	printf("duas raizes de uma equação do segundo grau,\n");
	printf("podendo ser por 'Soma e Produto', a forma babaca, \n");
	printf("ou por Bhaskara, a forma namoral.\n\n");

	printf("Menu Principal\n\n");
	printf("Escolha uma das opcoes:\n");
	printf("1) Sou namoral e quero Bhaskara\n");
	printf("2) Uso Linux e quero Soma e Produto\n");
	printf("3) Por que Babacao 3000?\n\n");
	printf("Escolho a opcao: "); scanf("%d", &opcao);

	return opcao;
}

void faq(){
	printf("\n=======================\n");
	printf("PQ BABACAO 3000?\n");
	printf("=======================\n\n");
	printf("Porque esse programa eh inutil,\n");
	printf("nao tem motivo pra querer fazer um\n");
	printf("codigo que de as raizes da equacao por\n");
	printf("soma e produto, ha n ser que eu queira me\n");
	printf("exibir pelas minhas pifeas habilidades em C\n");
	printf("usando meu liux, que na real eh um arch fake.\n");
	printf("Por que entao eu fiz voce pergunta?\n");
	printf("Pq to com muito tempo livre, \n");
	printf("Estava sem oq fazer e pensei em fazer\n");
	printf("essa merda, na real era so pra fazer\n");
	printf("a parte de soma e produto, fiquem muito\n");
	printf("curioso em saber se teria como fazer uma\n");
	printf("forma simples, e rapida, de fazer o codigo\n");
	printf("'pensar' em contas para chegar no resultado.\n");
	printf("No final valeu as poucas horas investidas nesse\n");
	printf("'projeto', se eh q posso chama-lo assim.\n");
	printf("Mesmo assim, obrigado por ter usado esse lixo\n");
	printf("de codigo, por mais inutil q seja me orgulho dele :)\n\n");
	printf("PS.: QUEM USA LINUX EH BABACA!\n");
	printf("PS. 2: Se quiser me dar um emprego estou aceitando propostas!\n");
	printf("PS. 3: Um dia serei da google pq to devendo um carro pro Andre\n");
	printf("       espero poder mostrar isso na minha entrevista!\n\n");
	printf("Email: tem no perfil do github, n seja preguicoso ;)\n");
	printf("Voltar? ->");
}
int menu_babaca(){
	int opcao;

	printf("Voce deseja descobrir mais raizes, Sr. Babacao?\n"); 
	printf("1) Sim, pois sou babaca!\n");
	printf("2) Nao, cansei de ser babacao!\n");
	printf("Escolho a opcao: "); scanf("%d", &opcao);

	return opcao;
}
int menu_namoral(){
	int opcao;

	printf("Voce deseja descobrir mais raizes?\n"); 
	printf("1) Sim, por Bhaskara.\n");
	printf("2) Nao.\n");
	printf("Escolho a opcao: "); scanf("%d", &opcao);

	return opcao;
}
int virei_babaca(){
	int opcao;

	printf("Voce deseja descobrir mais raizes de uma forma babaca? Depois nao tem como voltar!\n"); 
	printf("1) Sim, desejo ser um babacao!\n");
	printf("2) Nao, so quero sair do programa.\n");
	printf("Escolho a opcao: "); scanf("%d", &opcao);

	return opcao;
}
int conversao(){
	int opcao;

	printf("Voce deseja descobrir mais raizes de forma nao babaca?\n"); 
	printf("1) Sim, cansei de ser babacao!\n");
	printf("2) Nao, ainda sou babaca mas so quero sair do programa.\n");
	printf("Escolho a opcao: "); scanf("%d", &opcao);

	return opcao;
}