//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//16/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//f)1 2 3 X 5 6 7 X … X 401 402 403

#include <stdio.h>
    
   void main(){
       
      int numero = 1 , contador , resultado;

      for (contador = 0; contador <= 402; contador++){

         resultado = numero % 4;

         if(resultado == 0){
            printf("x ");
         }else{
            printf("%d ", numero);
         }

         numero++;
      }
      return 0;
   }