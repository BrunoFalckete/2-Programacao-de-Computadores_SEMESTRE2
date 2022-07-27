//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//16/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//e)3 5 7 9 11 … 311

#include <stdio.h>
    
   void main(){
       
       int numero = 3 , result;

       while (1 == 1){

         result = numero % 2;
        
         if (result == 1){
            printf("%d ", numero);
         }

         numero++;

         if (numero == 312){
           break ;
         }
      }
      return 0;
   }