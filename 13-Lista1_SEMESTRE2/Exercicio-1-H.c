//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//21/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//h)2 4 8 16 … 1024

#include <stdio.h>
#include <math.h>
    
    void main(){
       
       int numero = 2 , resultado;

        while (1 == 1){

            resultado = pow(2 , numero);

            printf("%d " , resultado);
            
            if(resultado == 1024){
                break;
            }

            numero++;
            
        }

        return 0;
    }