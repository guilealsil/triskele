#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>
#include <conio.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	int i, op;
	char frase1[50] = " * Voc� sabe do que somos feitos?";
	char frase2[50] = " * Somos feitos de muitas coisas...";
	char frase3[65] = " * Temos o nosso CORPO f�sico, feito de carne, ossos e sangue.";
	char frase4[30] = " * H� mais dois componentes...";
	char frase_erro[50] = " * N�o entendi, poderia repetir?";
	
	char frase5_1[45] = " * Sim! A ALMA � uma parte importante...";
	char frase6_1[70] = " * Ela abriga nosso EU e nossas emo��es.";
	char frase7_1[100] = " * Assim como � respons�vel por manifestar nosso CORPO no plano f�sico.";
	
	char frase5_2[45] = " * Sim! A MENTE � uma parte importante...";
	char frase6_2[70] = " * Ela comanda nosso CORPO e nossas a��es no plano f�sico.";
	char frase7_2[60] = " * Mas assim como o CORPO ela tamb�m pode se exaurir.";
	
	char frase8_1[60] = " * J� que escolheu ALMA, falarei sobre a MENTE.";
	char frase8_2[60] = " * J� que escolheu MENTE, falarei sobre a ALMA.";
	
	char frase9[45] = " * Agora vou falar um pouco de voc�.";
	
	char frase10_1[70] = " * Vejo que � uma pessoa mais emotiva, ligada a sua ALMA.";
	char frase11_1[85] = " * N�o se preocupe, n�o h� nada de errado nisso.\n * Afinal de contas...";
	char frase12_1[80] = " * Ainda � poss�vel que suas emo��es andem junto de seu lado racional.";
	
	char frase10_2[70] = " * Vejo que � uma pessoa mais racional, ligada a sua MENTE.";
	char frase11_2[80] = " * Mesmo que aja apesar de suas emo��es, elas s�o parte de voc�.";
	char frase12_2[80] = " * Jamais as ignore-as, elas podem te levar mais longe do que imagina.";
	
	char frase13[90] = " * Independente de tudo, cuide muito bem do seu CORPO, sua MENTE e sua ALMA!";
	char frase14[80] = " * Pois voc� s� tem um de cada! E n�o tem como substituir.";
	char frase15[70] = " * E lembre-se... Voc� � �nico nesse mundo, diferente de todos.";
	
	char frasefinal[150] = " * O amor � uma for�a t�o real quanto a gravidade, experimente de vez em quando.";
	char trisk[90] = " * TRISKELE representa a uni�o de CORPO, MENTE e ALMA.";
	
	
	for (i = 0; i < strlen(frase1); i++){
		printf("%c", frase1[i]);
		Sleep(50);
	}
	
	printf("\n");
	getch();
	
	for (i = 0; i < strlen(frase2); i++){
		printf("%c", frase2[i]);
		Sleep(50);
	}
	
	printf("\n");
	getch();
	
	for (i = 0; i < strlen(frase3); i++){
		printf("%c", frase3[i]);
		Sleep(50);
	}
	
	printf("\n");
	getch();
	
	for (i = 0; i < strlen(frase4); i++){
		printf("%c", frase4[i]);
		Sleep(50);
	}
	
	repeat:
	printf("\n\n");
	printf("\t[1] ALMA \t [2] MENTE\n");
	printf(" * ");
	fflush(stdin);
	scanf("%d", &op);
	printf("\n");
	
	switch (op){
		case 1: //ALMA
			
			for (i = 0; i < strlen(frase5_1); i++){
				printf("%c", frase5_1[i]);
				Sleep(50);
			}
			
			printf("\n");
			getch();
			
			for (i = 0; i < strlen(frase6_1); i++){
				printf("%c", frase6_1[i]);
				Sleep(50);
			}
			
			printf("\n");
			getch();
			
			for (i = 0; i < strlen(frase7_1); i++){
				printf("%c", frase7_1[i]);
				Sleep(50);
			}
			
			printf("\n");
			getch();
			
			for (i = 0; i < strlen(frase8_1); i++){
				printf("%c", frase8_1[i]);
				Sleep(50);
			}
			
			printf("\n");
			fflush(stdin);
			getch();
			
			for (i = 0; i < strlen(frase6_2); i++){
				printf("%c", frase6_2[i]);
				Sleep(50);
			}
			
			printf("\n");
			getch();
		
			for (i = 0; i < strlen(frase7_2); i++){
				printf("%c", frase7_2[i]);
				Sleep(50);
			}
		
			printf("\n");
			getch();
			
			for (i = 0; i < strlen(frase9); i++){
				printf("%c", frase9[i]);
				Sleep(50);
			}
		
			printf("\n");
			getch();
		
			for (i = 0; i < strlen(frase10_1); i++){
				printf("%c", frase10_1[i]);
				Sleep(50);
			}
		
			printf("\n");
			getch();
		
			for (i = 0; i < strlen(frase11_1); i++){
				printf("%c", frase11_1[i]);
				Sleep(50);
			}
		
			printf("\n");
			getch();
		
			for (i = 0; i < strlen(frase12_1); i++){
				printf("%c", frase12_1[i]);
				Sleep(50);
			}
			break;
		case 2: //MENTE
					
			for (i = 0; i < strlen(frase5_2); i++){
				printf("%c", frase5_2[i]);
				Sleep(50);
			}
			
			printf("\n");
			getch();
			
			for (i = 0; i < strlen(frase6_2); i++){
				printf("%c", frase6_2[i]);
				Sleep(50);
			}
			
			printf("\n");
			getch();
			
			for (i = 0; i < strlen(frase7_2); i++){
				printf("%c", frase7_2[i]);
				Sleep(50);
			}
			
			printf("\n");
			getch();
			
			for(i = 0; i < strlen(frase8_2); i++){
				printf("%c", frase8_2[i]);
				Sleep(50);
			}
			printf("\n");
			getch();
			
			for (i = 0; i < strlen(frase6_1); i++){
				printf("%c", frase6_1[i]);
				Sleep(50);
			}
		
			printf("\n");
			getch();
			
			for (i = 0; i < strlen(frase7_1); i++){
				printf("%c", frase7_1[i]);
				Sleep(50);
			}
		
			printf("\n");
			getch();
		
			for (i = 0; i < strlen(frase9); i++){
				printf("%c", frase9[i]);
				Sleep(50);
			}
		
			printf("\n");
			getch();
		
			for (i = 0; i < strlen(frase10_2); i++){
				printf("%c", frase10_2[i]);
				Sleep(50);
			}
		
			printf("\n");
			getch();
		
			for (i = 0; i < strlen(frase11_2); i++){
				printf("%c", frase11_2[i]);
				Sleep(50);
			}
		
			printf("\n");
			getch();
		
			for (i = 0; i < strlen(frase12_2); i++){
				printf("%c", frase12_2[i]);
				Sleep(50);
			}
			break;
		default:
			
			printf("\n");
			getch();
			
			for (i = 0; i < strlen(frase_erro); i++){
				printf("%c", frase_erro[i]);
				Sleep(50);
			}
			goto repeat;
	}
	
	printf("\n");
	getch();
	
	for(i = 0; i < strlen(frase13); i++){
		printf("%c", frase13[i]);
		Sleep(50);
	}
	
	printf("\n");
	getch();
	
	for (i = 0; i < strlen(frase14); i++){
		printf("%c", frase14[i]);
		Sleep(50);
	}
	
	printf("\n");
	getch();
	
	for(i = 0; i < strlen(frase15); i++){
		printf("%c", frase15[i]);
		Sleep(50);
	}
	
	printf("\n\n");
	getch();
	
	for (i = 0; i < strlen(frasefinal); i++){
		printf("%c", frasefinal[i]);
		Sleep(80);
	}
	
	printf("\n");
	getch();
	
	for (i = 0; i < strlen(trisk); i++){
		printf("%c", trisk[i]);
		Sleep(80);
	}
	
	printf("\n\n");
	
	system ("pause");
	return 0;
}
