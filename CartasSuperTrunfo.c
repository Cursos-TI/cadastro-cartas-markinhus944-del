#include <stdio.h>
  #include <string.h> // para usar strcspn
    int main() {
  int Populacao,Numero_de_pontos_turisticos;
int Populacao2,Numero_de_pontos_turisticos2;

char Estado[50],Nome_da_cidade[50],Codigo_da_carta[50];
char Estado2[50],Nome_da_cidade2[50],Codigo_da_carta2[50];

float Area_em_km2,PIB;
float Area_em_km22,PIB2;
float densidade_populacional,pib_percapita;
float densidade_populacional2,pib_percapita2;
    printf("(Carta 1) Digite o nome da Cidade:\n");
    fgets(Nome_da_cidade,sizeof(Nome_da_cidade),stdin);
    Nome_da_cidade[strcspn(Nome_da_cidade, "\n")] = '\0'; // remove o ENTER do fgets

  printf("Digite o nome do estado:\n");
  fgets(Estado,sizeof(Estado),stdin);
  Estado[strcspn(Estado, "\n")] = '\0'; // remove o ENTER do fgets

  printf("Digite o Codigo da Carta:)\n");
  scanf("%s", Codigo_da_carta);
  
    printf("Digite o Numero Total da Populacao:\n");
    scanf("%d",&Populacao);

    printf("Digite o Numero total de pontos turisticos:\n");
scanf("%d",&Numero_de_pontos_turisticos);

printf("Digite a Area em km2:\n");
scanf("%f",&Area_em_km2);

printf("Digite O PIB da cidade:\n");
scanf("%f",&PIB);
getchar();


printf("(Carta 2) Digite o nome da Cidade:\n");
    fgets(Nome_da_cidade2,sizeof(Nome_da_cidade2),stdin);
    Nome_da_cidade2[strcspn(Nome_da_cidade2, "\n")] = '\0'; // remove o ENTER do fgets

  printf("Digite o nome do estado:\n");
  fgets(Estado2,sizeof(Estado2),stdin);
  Estado2[strcspn(Estado2, "\n")] = '\0'; // remove o ENTER do fgets

  printf("Digite o Codigo da Carta:)\n");
  scanf("%s", Codigo_da_carta2);
  
    printf("Digite o Numero Total da Populacao:\n");
    scanf("%d",&Populacao2);

    printf("Digite o Numero total de pontos turisticos:\n");
scanf("%d",&Numero_de_pontos_turisticos2);

printf("Digite a Area em km2:\n");
scanf("%f",&Area_em_km22);

printf("Digite O PIB da cidade:\n");
scanf("%f",&PIB2);

pib_percapita = (PIB * 1000000000) / Populacao;
densidade_populacional = Populacao / Area_em_km2;

pib_percapita2 = (PIB2 * 1000000000) / Populacao2 ;
densidade_populacional2 = Populacao2 / Area_em_km22 ;








// Mostra carta 1

printf("\n---Carta 1: %s ---", Nome_da_cidade);
printf("\nNome da Cidade:%s Estado: %s",Nome_da_cidade,Estado  );
printf("\nCodigo da Carta:%s\nPopulacao:%d \nN Pontos Turistico:%d",Codigo_da_carta,Populacao,Numero_de_pontos_turisticos);
printf("\nArea-Km2:%.2f km2",Area_em_km2);
printf("\nPIB:%.2f Bilhoes",PIB);
printf("\nDensidade Populacional:%.2f",densidade_populacional);
printf("\nPib Per_Capito:%.2f",pib_percapita);

// MOstra carta 2
printf("\n---Carta 2: %s ---", Nome_da_cidade2);
printf("\nNome da Cidade:%s Estado: %s",Nome_da_cidade2,Estado2  );
printf("\nCodigo da Carta:%s\nPopulacao:%d \nN Pontos Turistico:%d",Codigo_da_carta2,Populacao2,Numero_de_pontos_turisticos2);
printf("\nArea-Km2:%.2f km2",Area_em_km22);
printf("\nPIB:%.2f Bilhoes",PIB2);
printf("\nDensidade Populacional:%.2f",densidade_populacional2);
printf("\nPib Per_Capito:%.2f",pib_percapita2);




   return 0;
}