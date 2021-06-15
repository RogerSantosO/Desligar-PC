#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int op, cancel=1;


int main(){
	inicio:
	system("cls");
	setlocale(LC_ALL,"Portuguese");
	printf("Escolha uma opção para desligar o Windows:");
	printf("\n\n1- Desligar o Windows em 1 hora");
	printf("\n\n2- Desligar o Windows em 2 horas");
	printf("\n\n3- Desligar o Windows em 3 horas");
	printf("\n\n4- Desligar o Windows em 5 minutos");
	printf("\n\n5- Desativar agendamento de desligamento do sistema");
	printf("\n\nA opção desejada é: ");
	scanf("%d",&op);
	switch(op){
		case 1:
			system("shutdown -s -t 3600");
			printf("\n\nO Windows será desligado em 1 hora");
			break;
		case 2:
			system("shutdown -s -t 7200");
			printf("\n\nO Windows será desligado em 2 horas");
			break;
		case 3:
			system("shutdown -s -t 10800");
			printf("\n\nO Windows será desligado em 3 horas");
			break;
		case 4:
			system("shutdown -s -t 300");
			printf("\n\nO Windows será desligado em 5 minutos");
			break;
		case 5:
			system("shutdown -a");
			printf("\n\nO desligamento foi cancelado");
			break;
	}
	if(op==5){
		return 0;
	}
	printf("\n\ndigite 1 se você deseja cancelar o desligamento e escolher outra opção: ");
	scanf("%d",&cancel);
	if(cancel == 1){
		system("shutdown -a");
		goto inicio;
	}
	return 0;
}
