#include <stdio.h>

int main()
{
//Usando FOR para mover a torre para a direita 5x
printf("--- Movendo a Torre ---\n");
for (int i = 1; i <= 5; i++)
{
    printf(" Direita\n");
   
}
printf("\n");
printf("\n");
    
//Mover Bispo 5 casas na diagonal para cima e à direita (Usando while)
    printf("=== Movendo o bispo ===\n");
    int diagonal = 1;
    while (diagonal <= 5)
    {
        printf("Cima, Direita\n");
        diagonal++;
        
    }
    printf("\n");
    printf("\n");
        
//Movendo a rainha 8 casas para a esquerda (usando DO-While)
        printf("*** Movendo a Rainha ***\n");
        int rainha = 1;
        do
        {
            printf("Esquerda\n");
            rainha++;
        } while (rainha <= 8);

//Movendo cavalo 
            printf("~~~ Movendo o Cavalo ~~~");
            int cavaloBaixo;

            for (cavaloBaixo = 0; cavaloBaixo <= 2; cavaloBaixo++)
            {
                printf("Baixo\n");
                int cavaloEsquerda;
                for (cavaloEsquerda = 0; cavaloEsquerda <= 1; cavaloEsquerda++);
                {
                    printf("esquerda\n");
                }
            }

        return 0;
        

}
