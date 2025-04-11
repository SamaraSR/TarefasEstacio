#include <stdio.h>
#include <locale.h>// biblioteca para correção ortografica geografica


int main() {
	
	setlocale(LC_ALL, "Portuguese");

	char estado1, estado2;
	char codigo_da_carta1[5], codigo_da_carta2[5]; 
	char nome_da_cidade1[50], nome_da_cidade2[50]; 
	unsigned long int populacao1, populacao2;
	int n_pontos_turisticos1, n_pontos_turisticos2;
	float area1, area2, pib1, pib2, densidade_populacional1, densidade_populacional2, pib_per_capita1, pib_per_capita2, super_poder1, super_poder2, inverso_densidade1, inverso_densidade2 ;

	printf("*** DESAFIO SUPER TRUNFO ***\n\n");
	printf("Vamos inserir os dados de duas cartas....\n\n");

	// Carta 1----------------------------------------------------------
	printf("---- CARTA 1 ----\n\n");

	printf("Digite o Estado: uma letra de A a H: ");
	scanf(" %c", &estado1); 

	printf("\nDigite o Código da carta (letra do estado e número): ");
	scanf(" %s", codigo_da_carta1);	

	printf("\nDigite o nome da Cidade: ");
	scanf(" %s", nome_da_cidade1);	

	printf("\nQual o nº de habitantes da cidade? ");
	scanf(" %lu", &populacao1);

	printf("\nQual a área da Cidade? ");
	scanf(" %f", &area1);

	printf("\nDigite o PIB da Cidade: ");
	scanf(" %f", &pib1);

	printf("\nQual a quantidade de pontos turísticos que a Cidade tem? ");
	scanf(" %d", &n_pontos_turisticos1);
	
	// Calculos densidade populacional e pib per capita
	
	densidade_populacional1 = populacao1 / area1;
	
	pib_per_capita1 = pib1 /populacao1;
	
	inverso_densidade1 = 1 / densidade_populacional1;
	
	super_poder1 = (float) (populacao1 + area1 + pib1 + n_pontos_turisticos1 + pib_per_capita1 + inverso_densidade1);
	
	printf("\n\n");
	
	// Carta 2----------------------------------------------------------
	printf("---- CARTA 2 ----\n\n");

	printf("Digite o Estado: uma letra de A a H: ");
	scanf(" %c", &estado2); 

	printf("\nDigite o Código da carta (letra do estado e número): ");
	scanf(" %s", codigo_da_carta2);	

	printf("\nDigite o nome da Cidade: ");
	scanf(" %s", nome_da_cidade2);	

	printf("\nQual o nº de habitantes da cidade? ");
	scanf(" %lu", &populacao2);

	printf("\nQual a área da Cidade? ");
	scanf(" %f", &area2);

	printf("\nDigite o PIB da Cidade: ");
	scanf(" %f", &pib2);

	printf("\nQual a quantidade de pontos turísticos que a Cidade tem? ");
	scanf(" %d", &n_pontos_turisticos2);
	
	// Calculos densidade populacional e pib per capita
	
	densidade_populacional2 = populacao2 / area2;
	
	pib_per_capita2 = pib2 /populacao2;
	
	inverso_densidade2 = 1 / densidade_populacional2;
	
	super_poder2 = (float) (populacao2 + area2 + pib2 + n_pontos_turisticos2 + pib_per_capita2 + inverso_densidade2);
	
	printf("\n\n");

	// Exibição dos dados da CARTA1------------------------------------------------
	
	printf("\n\nCarta 1: \n");
	printf("Estado: %c \n", estado1);
	printf("Código: %s \n", codigo_da_carta1);
	printf("Nome da Cidade: %s \n", nome_da_cidade1);
	printf("População: %lu \n", populacao1);
	printf("Área: %.2f km²\n", area1);
	printf("PIB: %.2f bilhões de reais\n", pib1);
	printf("Número de Pontos Turísticos: %d \n", n_pontos_turisticos1);
	printf("Densidade Populacional: %.2f hab/km²\n" , densidade_populacional1 );
	printf("PIB per Capita: %.2f reais\n" , pib_per_capita1 );
	
	// Exibição dos dados da CARTA2------------------------------------------------
	printf("\n\nCarta 2: \n");
	printf("Estado: %c \n", estado2);
	printf("Código: %s \n", codigo_da_carta2);
	printf("Nome da Cidade: %s \n", nome_da_cidade2);
	printf("População: %lu \n", populacao2);
	printf("Área: %.2f km²\n", area2);
	printf("PIB: %.2f bilhões de reais\n", pib2);
	printf("Número de Pontos Turísticos: %d \n", n_pontos_turisticos2);
	printf("Densidade Populacional: %.2f hab/km²\n" , densidade_populacional2 );
	printf("PIB per Capita: %.2f reais\n" , pib_per_capita2 );

    printf("\n\n\n");
    
    //resultado das comparações 1 = verdadeiro e 0 = falso-------------------------
    
    printf("*** RESULTADO ***\n\n");
    printf("Comparação de Cartas:\n\n");
    printf("População: Carta1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta1 venceu (%d)\n", n_pontos_turisticos1 > n_pontos_turisticos2);
	printf("Densidade Populacional: Carta1 venceu (%d)\n", densidade_populacional1 < densidade_populacional2);
	printf("PIB per Capita: Carta1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
	printf("Super Poder: Carta1 venceu (%d)\n", super_poder1 > super_poder2);
    

	return 0;
}
