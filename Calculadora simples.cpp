#include <stdio.h>
//criar umacalculadora simples
int main(){
	float a, b, c;
	char opcao;
	printf("informe um valor qualquer:" );
	scanf("%f", &a);
	printf("informe a opera��o matematica:(+ ,- ,* ou /)");
	scanf(" %c", &opcao);
	printf("informe otro valor qualquer: ");
	scanf("%f", &b);
	if (opcao == '+'){
		c= a + b;	
	}
	else if (opcao == '-'){
		c= a - b;
	}
	else if (opcao == '*'){
		c= a * b;
	}
	else if (opcao == '/'){
		c= a / b;
		if (b != 0){
			c = a / b;
		}
		else{
			printf("Erro: Divis�o por zero nao e permtida");
			return 1;
		}
		}else{
			printf("Erro: Opera��o invalida");
			return 1;
		}
		printf("Resultado: %.2f\n", c);
	}
