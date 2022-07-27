#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id, idade;
    char sexo;
    char nome[30], sobrenome[30];
    char tipo_sanguineo[3];
    float peso;
    char estado[3];
    char telefone[14];

    int id_busca;

    FILE *arq;

    do
    {
        arq = fopen("pessoa2.csv", "r");

        if (arq == NULL)
        {
            printf("Erro ao abrir o arquivo!");
            return 1;
        }


        //id;nome;sobrenome;tipo_sanguineo;peso;estado;telefone

        printf("Informe o codigo a buscar: ");
        scanf("%d", &id_busca);

        while (fscanf(arq, "%d ", &id) != EOF)
        {
            fscanf(arq, "%s ", &nome); // até encontrar um \t
            fscanf(arq, "%s ", &sobrenome);
            fscanf(arq, "%s ", &tipo_sanguineo);
            fscanf(arq, "%f ", &peso);
            fscanf(arq, "%s ", &estado);
            fscanf(arq, "%s", &telefone);

            if (id_busca == id)
            {
                printf("ID: %d \n", id);
                //printf("nome: %s %s \n", nome, sobrenome);
                printf("nome: %s \n", nome);
                printf("sobrenome: %s \n", sobrenome);
                printf("sangue: %s \n", tipo_sanguineo);
                printf("peso: %.2f \n", peso);
                printf("estado: %s \n", estado);
                printf("telefone: %s \n\n\n", telefone);
            }
        }

        fclose(arq);
    }
    while (id_busca > 0);
    return 0;
}