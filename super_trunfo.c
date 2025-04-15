
#include <stdio.h>
#include <locale.h>// biblioteca para correção ortografica geografica


int main() {
	
	setlocale(LC_ALL, "Portuguese");

	char nome_do_pais1[50], nome_do_pais2[50];	
	int n_pontos_turisticos1, n_pontos_turisticos2, populacao1, populacao2, escolha1, escolha2;
	float area1, area2, pib1, pib2, densidade_populacional1, densidade_populacional2, pib_per_capita1, pib_per_capita2, super_poder1, super_poder2, inverso_densidade1, inverso_densidade2, atributo1_carta1, atributo2_carta1, atributo1_carta2, atributo2_carta2, total1, total2 ;

	printf("*** DESAFIO SUPER TRUNFO ***\n\n");
	printf("Vamos inserir os dados de duas cartas....\n\n");

	// Carta 1----------------------------------------------------------
	printf("---- CARTA 1 ----\n\n");
	
	printf("\nDigite o nome do País: ");
	scanf(" %s", nome_do_pais1);	

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

	printf("\nDigite o nome do País: ");
	scanf(" %s", nome_do_pais2);	

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
	printf("---------------------------------------------------------------------\n");
	printf("Carta 1:\n\n");
	printf("Nome do País: %s \n", nome_do_pais1);
	printf("População: %d \n", populacao1);
	printf("Área: %.2f km²\n", area1);
	printf("PIB: %.2f bilhões de reais\n", pib1);
	printf("Número de Pontos Turísticos: %d \n", n_pontos_turisticos1);
	printf("Densidade Populacional: %.2f hab/km²\n" , densidade_populacional1 );
	printf("PIB per Capita: %.2f reais\n" , pib_per_capita1 );
	
	// Exibição dos dados da CARTA2------------------------------------------------
	printf("\n\nCarta 2:\n\n");	
	printf("Nome do País: %s \n", nome_do_pais2);
	printf("População: %d \n", populacao2);
	printf("Área: %.2f km²\n", area2);
	printf("PIB: %.2f bilhões de reais\n", pib2);
	printf("Número de Pontos Turísticos: %d \n", n_pontos_turisticos2);
	printf("Densidade Populacional: %.2f hab/km²\n" , densidade_populacional2 );
	printf("PIB per Capita: %.2f reais\n" , pib_per_capita2 );
	printf("---------------------------------------------------------------------");

    printf("\n\n\n");
    
    // escolha de atributos para comparar cartas. atributo 1
    
    printf("*** Agora é hora do desafio! ***\n\n");
    printf("* Escolha dois atributos que será usado para comparar as cartas:\n");
    printf("- 1º Atributo:\n\n");
    printf("1 - População.\n");
    printf("2 - Área.\n");
    printf("3 - PIB.\n");
    printf("4 - Nº de Pontos Turísticos.\n");
    printf("5 - Densidade demográfica\n\n");
    printf("Escolha: ");
    scanf("%d", &escolha1);
	printf("---------------------------------------------------------------------");    
    printf("\n\n");
    
    printf("- 2º Atributo:\n\n");	
    printf("1 - População.\n");
    printf("2 - Área.\n");
    printf("3 - PIB.\n");
    printf("4 - Nº de Pontos Turísticos.\n");
    printf("5 - Densidade demográfica\n\n");
    printf("Escolha: ");
    scanf("%d", &escolha2);
    printf("---------------------------------------------------------------------");
    printf("\n\n");
    
    //Garantir que escolha atributos diferentes para a comparação
    if(escolha1 == escolha2){
    	
    	printf("Deve escolher atributos diferentes!\n\n");
    	
	}else{
		  printf("Carta1: %s x Carta2: %s.\n\n", nome_do_pais1, nome_do_pais2);
    
    //primeiro atributo
    switch(escolha1){
    	
    case 1:		
		
        printf("1º Atributo escolhido: População\n\n");
        printf("Carta1: População %d  x Carta2: População %d .\n\n", populacao1, populacao2);
        
        atributo1_carta1 = populacao1;
        atributo1_carta2 = populacao2;
        
        if (populacao1 > populacao2)
            printf("** Carta1 Venceu!! **\n");
        else if (populacao1 < populacao2)
            printf("** Carta2 Venceu!! **\n");
        else
            printf("** Empate!! **\n");
        break;

    case 2:    	
    	printf("1º Atributo escolhido: Área\n\n");
    	printf("Carta1: área %.2f km² x Carta2: área %.2f km².\n\n", area1, area2);
    	
    	atributo1_carta1 = area1;
    	atributo1_carta2 = area2;
    	
        if (area1 > area2)
            printf("** Carta1 Venceu!! **\n");
        else if (area1 < area2)
            printf("** Carta2 Venceu!! **\n");
        else
            printf("** Empate!! **\n");
        break;

    case 3:    	
        printf("1º Atributo escolhido: PIB\n\n");
        printf("Carta1: PIB %.2f bilhões de reais x Carta2: PIB %.2f bilhões de reais\n\n", pib1, pib2);
        
        atributo1_carta1 = pib1;
    	atributo1_carta2 = pib2;
        
        if (pib1 > pib2)
            printf("** Carta1 Venceu!! **\n");
        else if (pib1 < pib2)
            printf("** Carta2 Venceu!! **\n");
        else
            printf("** Empate!! **\n");
        break;

    case 4:    	
        printf("1º Atributo escolhido: Nº de Pontos Turísticos\n\n");
        printf("Carta1: %d x Carta2: %d.\n\n", n_pontos_turisticos1, n_pontos_turisticos2);
        
        atributo1_carta1 = n_pontos_turisticos1;
    	atributo1_carta2 = n_pontos_turisticos2;
        
        if (n_pontos_turisticos1 > n_pontos_turisticos2)
            printf("** Carta1 Venceu!! **\n");
        else if (n_pontos_turisticos1 < n_pontos_turisticos2)
            printf("** Carta2 Venceu!! **\n");
        else
            printf("** Empate!! **\n");
        break;

    case 5:    	
        printf("1º Atributo escolhido: Densidade demográfica\n\n");
        printf("Carta1:  %.2f hab/km² x  %.2f hab/km²\n\n", densidade_populacional1, densidade_populacional2);
        
        atributo1_carta1 = densidade_populacional1;
    	atributo1_carta2 = densidade_populacional2;
        
        if (densidade_populacional1 < densidade_populacional2)
            printf("** Carta1 Venceu!! **\n");
        else if (densidade_populacional1 > densidade_populacional2)
            printf("** Carta2 Venceu!! **\n");
        else
            printf("** Empate!! **\n");
        break;

    default:
        printf("\nEscolha inválida.\n");
        break;
	}   
	
	printf("\n\n");
	
	//Segundo atributo
    switch(escolha2){
    	
    case 1:		
		
        printf("2º Atributo escolhido: População\n\n");
        printf("Carta1: População %d  x Carta2: População %d .\n\n", populacao1, populacao2);
        
        atributo2_carta1 = populacao1;
        atributo2_carta2 = populacao2;
        
        if (populacao1 > populacao2)
            printf("** Carta1 Venceu!! **\n");
        else if (populacao1 < populacao2)
            printf("** Carta2 Venceu!! **\n");
        else
            printf("** Empate!! **\n");
        break;

    case 2:    	
    	printf("2º Atributo escolhido: Área\n\n");
    	printf("Carta1: área %.2f km² x Carta2: área %.2f km².\n\n", area1, area2);
    	
    	atributo2_carta1 = area1;
        atributo2_carta2 = area2;
    	
        if (area1 > area2)
            printf("** Carta1 Venceu!! **\n");
        else if (area1 < area2)
            printf("** Carta2 Venceu!! **\n");
        else
            printf("** Empate!! **\n");
        break;

    case 3:    	
        printf("2º Atributo escolhido: PIB\n\n");
        printf("Carta1: PIB %.2f bilhões de reais x Carta2: PIB %.2f bilhões de reais\n\n", pib1, pib2);
        
        atributo2_carta1 = pib1;
        atributo2_carta2 = pib2;
        
        if (pib1 > pib2)
            printf("** Carta1 Venceu!! **\n");
        else if (pib1 < pib2)
            printf("** Carta2 Venceu!! **\n");
        else
            printf("** Empate!! **\n");
        break;

    case 4:    	
        printf("2º Atributo escolhido: Nº de Pontos Turísticos\n\n");
        printf("Carta1: %d x Carta2: %d.\n\n", n_pontos_turisticos1, n_pontos_turisticos2);
        
        atributo2_carta1 = n_pontos_turisticos1;
        atributo2_carta2 = n_pontos_turisticos2;
        
        if (n_pontos_turisticos1 > n_pontos_turisticos2)
            printf("** Carta1 Venceu!! **\n");
        else if (n_pontos_turisticos1 < n_pontos_turisticos2)
            printf("** Carta2 Venceu!! **\n");
        else
            printf("** Empate!! **\n");
        break;

    case 5:    	
        printf("2º Atributo escolhido: Densidade demográfica\n\n");
        printf("Carta1:  %.2f hab/km² x  %.2f hab/km²\n\n", densidade_populacional1, densidade_populacional2);
        
        atributo2_carta1 = densidade_populacional1;
        atributo2_carta2 = densidade_populacional2;
        
        if (densidade_populacional1 < densidade_populacional2)
            printf("** Carta1 Venceu!! **\n");
        else if (densidade_populacional1 > densidade_populacional2)
            printf("** Carta2 Venceu!! **\n");
        else
            printf("** Empate!! **\n");
        break;

    default:
        printf("\nEscolha inválida.\n");
        break;
	}   
	
		//calcular total dos atributos
		
		//carta1
		total1 = atributo1_carta1 + atributo2_carta1;
		
		printf("\n\nA soma dos atributos da carta1 é: %.2f\n", total1);
		
		//carta2
		total2 = atributo1_carta2 + atributo2_carta2;
		
		printf("\nA soma dos atributos da carta2 é: %.2f\n", total2);
		
		if(total1 == total2){
			printf("\n\n** EMPATE NA RODADA **\n");
			
		}else if(total1 > total2){
			
			printf("\n\n** CARTA 1 VENCEU A RODADA!! **\n");
			
		}else{
			printf("\n\n** CARTA 2 VENCEU A RODADA!! **\n");
		}
	
		} 
    
    
	return 0;
}
