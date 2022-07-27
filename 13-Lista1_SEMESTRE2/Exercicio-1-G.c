//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//16/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//g)0c 0b 0a 4c 4b 4a 8c … 1024c 1024b 1024a

#include <stdio.h>
    
    void main(){
       
       int numero = 0 , contador , resultado;

        for (contador = 0; contador <= 1024; contador++){

            resultado = numero % 4;

            if(resultado == 0){
                printf("%dc ", numero);
                printf("%db ", numero);
                printf("%da ", numero);
            }
            numero++;
        }
       return 0;
    }