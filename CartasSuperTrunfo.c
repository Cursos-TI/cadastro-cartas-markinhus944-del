#include <stdio.h>{
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

  printf("Digite O Codigo da Carta:)\n");
  scanf("%d",&Codigo_da_carta);
  
    
   return 0;
}