#include <stdio.h>
#include <string.h>

char* calcularnivel(int vitorias, int derrotas){
	int saldo = vitorias - derrotas;
	char* nivel;
	
	if(vitorias<10){
		nivel="Ferro";
	}else if (vitorias<=20){
		nivel="Bronze";
	}else if (vitorias<=50){
		nivel="Prata";
	}else if(vitorias<=80){
	nivel="Ouro";
	}else if (vitorias<=90){
		nivel="Diamante";
	}else if (vitorias<=100){
		nivel="Lendario"; 
	}else{
		nivel="Imortal";
	}
	
	static char result[100];
	sprintf(result, "O  Heroi tem saldo de %d esta no nivel de %s", saldo,nivel);
	return result;
	
}
	
int main(){
	int vitorias, derrotas;
	
	printf("Digite o numero de vitorias:\n");
	scanf("%d", &vitorias);
	printf("Digite o numero de derrotas:\n");
	scanf("%d", &derrotas);
	
	char* mensagem = calcularnivel(vitorias, derrotas);
    printf("%s\n", mensagem);
	
	return 0;
}
