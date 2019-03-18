//programa pra baixar os saves de ps2;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define m "main.exe"
int main()
{
	char codigo [20], m[]="main.exe ";
	//m="main.exe";
	printf("buscador de saves para ps2\n digite o codigo do jogo \n");
	//for (int i=0; i<=9; i++)
	gets(codigo);
	strcat (m ,codigo);
	//strcpy(codigo, m);
	//printf("%s", m );
	system(m);
	
}
