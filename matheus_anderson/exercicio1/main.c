#include <stdio.h>

int main() {
	//	1. Escreva um programa de controle de senha que d� tr�s chances de acerto ao usu�rio; se ele n�o conseguir, o programa deve avisar que o cart�o foi bloqueado.
	int tentativas=0, senha=0, validador=0;
	
	printf("Crie sua senha: ");
	scanf("%d",&senha);
	printf("\n---------------------------------------\n\n");
	
	tentativas=0;
	
	do{
		if(tentativas==0){
			printf("Insira a sua senha: ");
			scanf("%d",&validador);
		}else{
			printf("Senha incorreta, tente novamente: ");
			scanf("%d",&validador);
		}
		
		tentativas++;
	}while(tentativas<3 && senha!=validador);

	if(tentativas==3 && senha!=validador){
		printf("Cartao bloqueado!!");
	}else{
		printf("Concluido!!");
	}
	
	return 0;
}
