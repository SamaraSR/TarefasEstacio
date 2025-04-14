#include <stdio.h>
#include <locale.h>// biblioteca para correção ortografica geografica


int main() {
	
	setlocale(LC_ALL, "Portuguese");

	char estado1, estado2;
	char codigo_da_carta1[5], codigo_da_carta2[5]; 
	char nome_da_cidade1[50], nome_da_cidade2[50];	
	int n_pontos_turisticos1, n_pontos_turisticos2, populacao1, populacao2, escolha;
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
	scanf(" %d", &populacao1);

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
	scanf(" %d", &populacao2);

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
	printf("População: %d \n", populacao1);
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
	printf("População: %d \n", populacao2);
	printf("Área: %.2f km²\n", area2);
	printf("PIB: %.2f bilhões de reais\n", pib2);
	printf("Número de Pontos Turísticos: %d \n", n_pontos_turisticos2);
	printf("Densidade Populacional: %.2f hab/km²\n" , densidade_populacional2 );
	printf("PIB per Capita: %.2f reais\n" , pib_per_capita2 );

    printf("\n\n\n");
    
    printf("*** Agora é hora do desafio! ***\n\n");
    printf("Escolha qual dos atributos será usado para comparar as cartas:\n\n");
    printf("1 - População.\n");
    printf("2 - Área.\n");
    printf("3 - PIB.\n");
    printf("4 - Nº de Pontos Turísticos.\n");
    printf("5 - Densidade demográfica\n\n");
    printf("Escolha: ");
    scanf("%d", &escolha);
	    
    printf("\n\n");
    
    
    printf("Carta1: %s x Carta2: %s.\n", nome_da_cidade1, nome_da_cidade2);
    
    switch(escolha){
    	
    case 1:    	
        printf("Atributo escolhido: População\n");
        printf("Carta1: População %d  x Carta2: População %d .\n", populacao1, populacao2);
        
        if (populacao1 > populacao2)
            printf("** Carta1 Venceu!! **\n");
        else if (populacao1 < populacao2)
            printf("** Carta2 Venceu!! **\n");
        else
            printf("** Empate!! **\n");
        break;

    case 2:    	
    	printf("Atributo escolhido: Área\n");
    	printf("Carta1: área %.2f km² x Carta2: área %.2f km².\n", area1, area2);
    	
        if (area1 > area2)
            printf("** Carta1 Venceu!! **\n");
        else if (area1 < area2)
            printf("** Carta2 Venceu!! **\n");
        else
            printf("** Empate!! **\n");
        break;

    case 3:    	
        printf("Atributo escolhido: PIB\n");
        printf("Carta1: PIB %.2f bilhões de reais x Carta2: PIB %.2f bilhões de reais\n", pib1, pib2);
        
        if (pib1 > pib2)
            printf("** Carta1 Venceu!! **\n");
        else if (pib1 < pib2)
            printf("** Carta2 Venceu!! **\n");
        else
            printf("** Empate!! **\n");
        break;

    case 4:    	
        printf("Atributo escolhido: Nº de Pontos Turísticos\n");
        printf("Carta1: %d x Carta2: %d.\n", n_pontos_turisticos1, n_pontos_turisticos2);
        
        if (n_pontos_turisticos1 > n_pontos_turisticos2)
            printf("** Carta1 Venceu!! **\n");
        else if (n_pontos_turisticos1 < n_pontos_turisticos2)
            printf("** Carta2 Venceu!! **\n");
        else
            printf("** Empate!! **\n");
        break;

    case 5:    	
        printf("Atributo escolhido: Densidade demográfica\n");
        printf("Carta1:  %.2f hab/km² x  %.2f hab/km²\n", densidade_populacional1, densidade_populacional2);
        
        if (densidade_populacional1 < densidade_populacional2)
            printf("** Carta1 Venceu!! **\n");
        else if (densidade_populacional1 > densidade_populacional2)
            printf("** Carta2 Venceu!! **\n");
        else
            printf("** Empate!! **\n");
        break;

    default:
        printf("Escolha inválida.\n");
        break;
}
   
    
    /*resultado das comparações 1 = verdadeiro e 0 = falso-------------------------
    
    printf("*** RESULTADO ***\n\n");
    printf("Comparação de Cartas:\n\n");
    printf("População: Carta1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta1 venceu (%d)\n", n_pontos_turisticos1 > n_pontos_turisticos2);
	printf("Densidade Populacional: Carta1 venceu (%d)\n", densidade_populacional1 < densidade_populacional2);
	printf("PIB per Capita: Carta1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
	printf("Super Poder: Carta1 venceu (%d)\n", super_poder1 > super_poder2);    
   
    printf("\n----------------------------------------------------------\n");
    
    //Comparação das cartas com lógica if / else (atributo escolhido é o número de pontos turísticos-----------------------
    
    printf("Comparação de cartas (Atributo: Nº de pontos turísticos):\n\n");
    
    if(n_pontos_turisticos1 > n_pontos_turisticos2){
    	printf("Carta 1 - %s: %d\n", nome_da_cidade1, n_pontos_turisticos1);
    	printf("Carta 2 - %s: %d\n\n", nome_da_cidade2, n_pontos_turisticos2);
    	printf("Resultado: Carta 1 - (%s) venceu!\n", nome_da_cidade1);
	}else{
		printf("Carta 1 - %s: %d\n", nome_da_cidade1, n_pontos_turisticos1);
    	printf("Carta 2 - %s: %d\n\n", nome_da_cidade2, n_pontos_turisticos2);
    	printf("Resultado: Carta 2 - (%s) venceu!\n", nome_da_cidade2);
	}*/

	return 0;
}
