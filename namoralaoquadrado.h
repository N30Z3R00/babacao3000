//Esse eh namoral
void bhaskaras_way(int a, int b, int c){
	int delta, x[3];

	delta = ((pow(b,2)) - (4*a*c));
	x[0] = ((-b+(sqrt(delta)))/(2*a));
	x[1] = ((-b-(sqrt(delta)))/(2*a));
	if(delta<0){
		printf("As raizes nao existem!\n");
	} else{
		printf("As raizes da equacao sao: %d e %d!\n", x[0], x[1]);
	}
}