#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define N 4

int main ()
{
	setlocale(LC_ALL, "portuguese");//com essa instrução o compilador adiciona ao texto impresso as regras de acentuação e pontuação.
	
	int matriz[N][N], cont, aux=0, aux2=0, aux3=0, aux4=0, cont1e3=0, cont1e2=0, cont1e4=0;
	int cont2e4=0, cont2e3=0, cont4e3=0, cont2=0, cont3=0, cont4=0, tamanho=0;	
	int aux1a2=0,aux1a3=0,aux1a4=0,aux2a1=0, aux2a3=0, aux2a4=0, aux3a1=0, aux3a2=0, aux3a4=0, aux4a1=0, aux4a2=0, aux4a3=0;	
	
	for(int linha=0;linha<N;linha++)
	{
		for(int coluna=0;coluna<N;coluna++)
		{
			printf("insira o valor da linha [%d], coluna[%d]",linha,coluna);//inseri dois %d para ficar bem claro qual linha e qual coluna esta sendo preenchida.
			scanf(" %d", &matriz[linha][coluna]);
			if(linha==coluna)//com essa estrutura condicional consigo determinar que a matriz principal vai ter todos os seus elementos iguais a 1.
			{
				matriz[linha][coluna]=1;
			}
		}
	}
	for(int linha=0;linha<N;linha++)
	{
		for(int coluna=0;coluna<N;coluna++)
		{
			printf("%d\t",matriz[linha][coluna]);
		}
		printf("\n");//com esse \n consigo organizar a matriz para o usuário para que ele a veja como é realmente.
	}//esse for serve para mostrar a matriz ao usuário.
	
	aux4=aux4;
	cont=0;
	for(int linha=0;linha<1;linha++)
	{
		for(int coluna=0;coluna<N;coluna++)
		{
			if(matriz[linha][coluna]==1)//AQUI CONTO AS SAIDAS QUE A CIDADE POSSUI.
			{
				cont++;
			}
			if(matriz[linha][coluna]==1 && coluna==0 && linha!=coluna)//com esse if consigo contar se há estrada chegando a cidade 1.
			{
				aux++;
			}
			if(matriz[linha][coluna]==1 && coluna==1 && linha!=coluna)
			{
				aux2++;
				cont1e2++;
				aux1a2++;
			}
			if(matriz[linha][coluna]==1 && coluna==2 && linha!=coluna)
			{
				aux3++;
				cont1e3++;
				aux1a3++;
			}
			if(matriz[linha][coluna]==1 && coluna==3 && linha!=coluna)
			{
				aux4++;
				cont1e4++;
				aux1a4++;
			}
		}
		cont=cont-1;
	}//com esse for consigo mostrar as ligações da primeira cidade, pois travo a linha no número zero que simboliza a primeira cidade, e mostro onde tem 1 mostrando conexões.
	
	
	if(cont>0)
	{
	printf("\na primeira cidade tem %d estradas saindo dela\n\n",cont);
	}
	
	
	aux4=aux4;
	for(int linha=1;linha<2;linha++)
	{
		for(int coluna=0;coluna<N;coluna++)
		{
			if(matriz[linha][coluna]==1)
			{
				cont2++;
			}
			if(matriz[linha][coluna]==1 && coluna==0 && linha!=coluna)//com esse if consigo contar se há estrada chegando a cidade 1.
			{
				aux++;
				cont1e2++;
				aux2a1++;
			}
			if(matriz[linha][coluna]==1 && coluna==1 && linha!=coluna)
			{
				aux2++;
			}
			if(matriz[linha][coluna]==1 && coluna==2 && linha!=coluna)
			{
				aux3++;
				cont2e3++;
				aux2a3++;
			}
			if(matriz[linha][coluna]==1 && coluna==3 && linha!=coluna)
			{
				aux4++;
				cont2e4++;
				aux2a4++;
			}
		}
		cont2=cont2-1;
	}//com esse for mostro as ligações da segunda cidade.
	
	
	if(cont2>0)
	{
		printf("\na segunda cidade tem %d estradas saindo dela\n\n",cont2);
	}
	
	
	aux4=aux4;
	for(int linha=2;linha<3;linha++)
	{
		for(int coluna=0;coluna<N;coluna++)
		{
			if(matriz[linha][coluna]==1)
			{
				cont3++;
			}
			if(matriz[linha][coluna]==1 && coluna==0 && linha!=coluna)//com esse if consigo contar se há estrada chegando a cidade 1.
			{
				aux++;
				cont1e3++;
				aux3a1++;
			}
			if(matriz[linha][coluna]==1 && coluna==1 && linha!=coluna)
			{
				aux2++;
				cont2e3++;
				aux3a2++;
			}
			if(matriz[linha][coluna]==1 && coluna==2 && linha!=coluna)
			{
				aux3++;
			}
			if(matriz[linha][coluna]==1 && coluna==3 && linha!=coluna)
			{
				aux4++;
				cont4e3++;
				aux3a4++;
			}
		}
		cont3=cont3-1;
	}//com esse for mostro as ligações da terceira cidade.
	
	
	if(cont3>0)
	{
		printf("\na terceira cidade tem %d estradas saindo dela\n\n",cont3);
	}
	
	aux4=aux4;
	for(int linha=3;linha<4;linha++)
	{
		for(int coluna=0;coluna<N;coluna++)
		{
			if(matriz[linha][coluna]==1)
			{
				cont4++;
			}
			if(coluna==0 && matriz[linha][coluna]==1 && linha!=coluna)
			{
				aux++;
				cont1e4++;
				aux4a1++;
			}
			if(matriz[linha][coluna]==1 && coluna==1 && linha!=coluna)
			{
				aux2++;
				cont2e4++;
				aux4a2++;
			}
			if(matriz[linha][coluna]==1 && coluna==2 && linha!=coluna)
			{
				aux3++;
				cont4e3++;
				aux4a3++;
			}
			if(matriz[linha][coluna]==1 && coluna==3 && linha!=coluna)
			{
				aux4++;
			}
		}
		cont4=cont4-1;
	}//com esse for mostro as conexões da quarta cidade.

	
	if(cont4>0)
	{
		printf("\na quarta cidade tem %d estradas saindo dela\n\n",cont4);
	}	
	
	
	
	//DAQUI EM DIANTE TRATO DAS VIAS QUE CHEGAM AS CIDADES.
	
	
			
	if(aux>0)//aqui mostro a quantidade de vias que chegam a primeira cidade
	{
		printf("\na primeira cidade tem %d vias chegando a ela\n\n",aux);		
	}	
	
	
	if(aux2>0)//aqui mostro a quantidade de vias que chegam a segunda cidade
	{
		printf("\na segunda cidade tem %d vias chegando a ela\n\n",aux2);		
	}
	
	
	if(aux3>0)
	{
		printf("\na terceira cidade tem %d vias chegando a ela.\n\n",aux3);
	}
	
	
	if(aux4>0)
	{
		printf("\na quarta cidade tem %d vias chegando a ela\n\n",aux4);
	}
	
	
	if(aux>aux2 && aux>aux3 && aux>aux4)
	{
		printf("\na primeira cidade é a que mais tem ruas chegando até ela\n\n.");
	}
	
	
	if(aux2>aux && aux2>aux3 && aux2>aux4)
	{
		printf("\na segunda cidade é a que mais tem ruas chegando até ela\n\n.");
	}
	
	
	if(aux3>aux && aux3>aux2 && aux3>aux4)
	{
		printf("\na segunda cidade é a que mais tem ruas chegando até ela\n\n.");
	}
	
	
	if(aux4>aux && aux4>aux3 && aux4>aux2)
	{
		printf("\na segunda cidade é a que mais tem ruas chegando até ela\n\n.");
	}
	
	if(aux==aux2 && aux==aux3 && aux==aux4)
	{
		printf("\ntodas as cidades tem o mesmo número de ruas chegando até ela\n");
	}
	
	
	//AQUI COMEÇO A TRATAR DAS VIAS DE MÃO DUPLA:
	
	if(cont1e3==2)
	{
		printf("\nAs cidades 1 e 3 tem via de mão dupla.\n\n ");
	}
	if(cont1e2==2)
	{
		printf("\nAs cidades 1 e 2 tem via de mão dupla.\n\n");
	}
	if(cont1e4==2)
	{
		printf("\nAs cidades 1 e 4 tem via de mão dupla.\n\n");
	}
	
	//VIAS DE MÃO DUPLA DA CIDADE 2:
	
	if(cont2e4==2)
	{
		printf("\nA via entre as cidades 2 e 4 são de mão dupla.\n\n");
	}
	if(cont2e3==2)
	{
		printf("\nA via entre as cidades 2 e 3 são de mão dupla.\n\n");
	}
	
	//VIAS DE MÃO DUPLA DA CIDADE TRÊS
	
	if(cont4e3==2)
	{
		printf("\nA via entre as cidades 4 e 3 é de mão dupla.\n\n");
	}
	
	//CIDADES QUE ESTÃO ISOLADAS:
	
	//CIDADE 1:
	
	if(cont==0 && aux==0)
	{
		printf("\nA primeira cidade é isolada.\n\n");
	}	
	
	//CIDADE 2:
	
	if(cont2==0 && aux2==0)
	{
		printf("\nA segunda cidade é isolada.\n\n");
	}
	
	//CIDADE 3:
	
	if(cont3==0 && aux3==0)
	{
		printf("\nA terceira cidade é isolada.\n\n");
	}
	
	//CIDADE 4:
	
	if(cont4==0 && aux4==0)
	{
		printf("\nA quarta cidade é isolada\n\n");
	}
	
	//CIDADES QUE NÃO POSSUEM SAIDA:
	
	//PRIMEIRA CIDADE:
	
	if(cont==0 && aux>0)
	{
		printf("\nA primeira cidade não possue saída.\n\n");
	}
	
	//SEGUNDA CIDADE:
	
	if(cont2==0 && aux2>0)
	{
		printf("\nA segunda cidade não tem saída\n\n");
	}
	
	//TERCEIRA CIDADE:
	
	if(cont3==0 && aux3>0)
	{
		printf("\nA terceira cidade não tem saída.\n\n");
	}
	
	//QUARTA CIDADE:
	
	if(cont4==0 && aux4>0)
	{
		printf("\nA quarta cidade não tem saída.\n\n");
	}
	
	//CIDADES QUE POSSUEM SAIDA, POREM NÃO TEM ENTREADA:
	
	//PRIMEIRA CIDADE:
	
	if(cont>0 && aux==0)
	{
		printf("\nA primeira cidade não tem entreda.\n\n");
	}
	
	//SEGUNDA CIDADE:
	if(cont2>0 && aux2==0)
	{
		printf("\nA segunda cidade não tem entrada.\n\n");
	}
	
	//TERCEIRA CIDADE:
	
	if(cont3>0 && aux3==0)
	{
		printf("\nA terceira cidade não tem entrada\n\n");
	}
	
	//QUARTA CIDADE:
	
	if(cont4>0 && aux4==0)
	{
		printf("\nA quarta cidade não tem entrada.\n\n");
	}
	
	printf("\nDigite o tamanho da rota que você deseja fazer:\n");
	scanf("%d",&tamanho);
	
	int vet[tamanho],contador1=0,contador2=0,contador3=0,contador4=0;
	
	printf("\nInsira a rota desejada\n");
	
	for(int i=0;i<tamanho;i++)
	{
	scanf("%d", &vet[i]);
	
	if(vet[i]==1 && i!=0)
	{
		contador1++;
	}
	
	if(vet[i]==2 && i!=0)
	{
		contador2++;
	}
	
	if(vet[i]==3 && i!=0)
	{
		contador3++;
	}
	
	if(vet[i]==4 && i!=0)
	{
		contador4++;
	}
	}
	
	
	//DAQUI EM DIANTE COMEÇO A COMPARAR O NÚMERO DE CHEGADAS EXISTENTES COM A ROTA ESTABELECIDA PELO ABENÇOADO USUÁRIO.
	
	
	if(contador1<=aux && contador2<=aux2 && contador3<=aux3 && contador4<=aux4)
	{
		printf("\nsua rota é possível camarada\n\n");
	}
	
	if(contador1>aux || contador2>aux2 || contador3>aux3 || contador4>aux4)
	{
		printf("\nsua rota é impossível\n\n");
	}
	
	//DAQUI EM DIANTE É VERIFICADO SE É POSSÍVEL IR DE UMA CIDADE A OUTRA
	
	int partida=0, chegada=0;
	
	printf("\ninsira a cidade de partida\n\n");
	scanf("%d",&partida);	
	
	printf("\ninsira a cidade de destino:\n\n");
	scanf("%d",&chegada);	

	if(partida==1 && chegada==2 && aux1a2==1 || partida==1 && chegada==3 && aux1a3==1 || partida==1 && chegada==4 && aux1a4==1 || partida==2 && chegada==3 && aux2a3==1 || partida==2 && chegada==4 && aux2a4==1 || partida==2 && chegada==1 && aux2a1==1 || partida==3 && chegada==1 && aux3a1==1 || partida==3 && chegada==2 && aux3a2==1 || partida==3 && chegada==4 && aux3a4==1 || partida==4 && chegada==1 && aux4a1==1 || partida==4 && chegada==2 && aux4a2==1 || partida==4 && chegada==3 && aux4a3==1)
	{
		printf("\né possivel devido as estradas existentes\n\n");
	}
	else
	{
		printf("\nnão é possível\n\n");
	}
	
	//DAQUI EM DIANTE RESOLVO A QUESTÃO D
	
	int cidade=0, result=0;
	
	printf("\nEscolha a cidade que deseja averiguar quantas cidades tem ligação direta com ela\n\n");
	scanf("%d",&cidade);
	
	if(cidade==1)
	{
		result=aux2a1+aux3a1+aux4a1;
		printf("\na primeira cidade tem %d cidades com ligação direta com ela\n\n",result);
		if(aux2a1>0)
		{
			printf("\na cidade 1 \n\n");
		}
		if(aux3a1>0)
		{
			printf("\na cidade 3\n\n");
		}
		if(aux4a1>0)
		{
			printf("\na cidade 4\n\n");
		}
	}
	
	if(cidade==2)
	{
		result=aux1a2+aux3a2+aux4a2;
		printf("\na segunda cidade tem %d cidades com ligação direta com ela\n\n",result);
		if(aux1a2>0)
		{
			printf("\na cidade 1\n\n");
		}
		if(aux3a2>0)
		{
			printf("\na cidade 3\n\n");
		}
		if(aux4a2>0)
		{
			printf("\na cidade 4\n\n");
		}
	}
	
	if(cidade==3)
	{
		result=aux1a3+aux2a3+aux4a3;
		printf("\na terceira cidade tem %d cidades com ligação direta com ela\n\n",result);
		if(aux1a3>0)
		{
			printf("\na cidade 1\n\n");
		}
		if(aux2a3>0)
		{
			printf("\na cidade 2\n\n");
		}
		if(aux4a3>0)
		{
			printf("\na cidade 4\n\n");
		}	
	}
	if(cidade==4)
	{
		result=aux1a4+aux2a4+aux3a4;
		printf("\na terceira cidade tem %d cidades com ligação direta com ela\n\n",result);
		if(aux1a4>0)
		{
			printf("\na cidade 1\n\n");
		}
		if(aux2a4>0)
		{
			printf("\na cidade 2\n\n");
		}
		if(aux3a4>0)
		{
			printf("\na cidade 3\n\n");
		}
	}
	return 0;
}
