//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//16/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//c)30 40 50 60 … 180

#include <stdio.h>
    
    void main(){
       
        int numero = 30;

        while (1 == 1){
           
            printf("%d ", numero);

            numero = numero + 10 ;

            if (numero == 190){
                break ;
            }
        }
        return 0;
    }