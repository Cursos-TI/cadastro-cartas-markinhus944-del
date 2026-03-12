#include <stdio.h>
  #include <string.h> // para usar strcspn
    int main() {
    int Populacao,Numero_de_pontos_turisticos;
    char Estado[50],Nome_da_cidade[50],Codigo_da_carta[50];
    float Area_em_km2,PIB;

    printf("Digite o nome da Cidade:\n");
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

printf("\nNome da Cidade:%s Estado: %s",Nome_da_cidade,Estado  );
printf("\nCodigo da Carta:%s\nPopulacao:%d \nN Pontos Turistico:%d",Codigo_da_carta,Populacao,Numero_de_pontos_turisticos);
printf("\nArea-Km2:%.2f km2",Area_em_km2);
printf("\nPIB:%.2f Bilhoes",PIB);

   return 0;
}