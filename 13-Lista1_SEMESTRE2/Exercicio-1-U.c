//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//21/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//u)Receba a medida de um ângulo em graus e determine
    //a)Em qual quadrante ele está localizado;
    //b)O número de voltas no círculo trigonométrico
    //c)O sentido da volta (anti-horário ou horário).
       //Observações:
        //a)Se ele estiver em cima de um dos eixos explicite entre quais quadrantes ele se encontra.
        //b)Considere ângulos entre -720 e 720. Caso a medida informada não estiver nesse intervalo dê uma mensagem.

#include <stdio.h>
#include <stdlib.h>
   
    void main(){
       
        int angulo, angulo_aux;

        printf("Entre com o Angulo: ");
            scanf("%d", &angulo);

        if(angulo > 720 || angulo < -720){
            printf("Angulo Acima do permitido !!");

        }else if(angulo > 360 || angulo < -360){

            if(angulo > 0){
                printf("Volta sentido: ANTI-HORARIO\n");
                angulo_aux = angulo - 360;
            }else if(angulo < 0){
                printf("Volta sentido: HORARIO\n");
                angulo_aux = angulo + 360;
                angulo_aux = angulo_aux * (-1);
            }

            if(angulo_aux > 0 && angulo_aux < 90){
                printf("O angulo %d esta no quadrante 1\n", angulo);
            }else if (angulo_aux > 90 && angulo_aux < 180){
                printf("O angulo %d esta no quadrante 2\n", angulo);
            }else if (angulo_aux > 180 && angulo_aux < 270){
                printf("O angulo %d esta no quadrante 3\n", angulo);
            }else if (angulo_aux > 270 && angulo_aux < 360){
                printf("O angulo %d esta no quadrante 4\n", angulo);
            }
            else if(angulo_aux == 0 || angulo_aux == 360){
                printf("O angulo %d esta ente os quadrantes 1 e 4\n", angulo);
            }else if(angulo_aux == 90){
                printf("O angulo %d esta ente os quadrantes 1 e 2\n", angulo);
            }else if(angulo_aux == 180){
                printf("O angulo %d esta ente os quadrantes 2 e 3\n", angulo);
            }else if(angulo_aux == 270){
                printf("O angulo %d esta ente os quadrantes 3 e 4\n", angulo);
            }


            if(angulo == 360 || angulo == -360){
                printf("O angulo deu duas volta no circulo trigonometrico");
            }else if(angulo_aux > 0 && angulo_aux <= 90){
                printf("O angulo %d deu uma volta e %d/360 avos de volta ", angulo, angulo_aux);
            }else if (angulo_aux > 90 && angulo_aux <= 180){
                printf("O angulo %d deu uma volta e %d/360 avos de volta", angulo, angulo_aux);
            }else if (angulo_aux > 180 && angulo_aux <= 270){
                printf("O angulo %d deu uma volta e %d/360 avos de volta", angulo, angulo_aux);
            }else if (angulo_aux > 270 && angulo_aux < 360){
                printf("O angulo %d deu uma volta e %d/360 avos de volta", angulo, angulo_aux);
            }

        }else if(angulo < 360 || angulo > -360){

            if(angulo > 0){
                printf("Volta sentido: ANTI-HORARIO\n");
            }else if(angulo < 0){
                printf("Volta sentido: HORARIO\n");
            }
            if(angulo > 0 && angulo < 90){
                printf("O angulo %d esta no quadrante 1\n", angulo);
            }else if (angulo > 90 && angulo < 180){
                printf("O angulo %d esta no quadrante 2\n", angulo);
            }else if (angulo > 180 && angulo < 270){
                printf("O angulo %d esta no quadrante 3\n", angulo);
            }else if (angulo > 270 && angulo < 360){
                printf("O angulo %d esta no quadrante 4\n", angulo);
            }
            else if(angulo == 0 || angulo == 360){
                printf("O angulo %d esta ente os quadrantes 1 e 4\n", angulo);
            }else if(angulo == 90){
                printf("O angulo %d esta ente os quadrantes 1 e 2\n", angulo);
            }else if(angulo == 180){
                printf("O angulo %d esta ente os quadrantes 2 e 3\n", angulo);
            }else if(angulo == 270){
                printf("O angulo %d esta ente os quadrantes 3 e 4\n", angulo);
            }

            if(angulo == 360 || angulo == -360){
                printf("O angulo deu uma volta no circulo trigonometrico");
            }else if(angulo > 0 && angulo <= 90){
                printf("O angulo %d deu %d/360 avos de volta", angulo, angulo);
            }else if (angulo > 90 && angulo <= 180){
                printf("O angulo %d deu %d/360 avos de volta", angulo, angulo);
            }else if (angulo > 180 && angulo <= 270){
                printf("O angulo %d deu %d/360 avos de volta", angulo, angulo);
            }else if (angulo > 270 && angulo < 360){
                printf("O angulo %d deu %d/360 avos de volta", angulo, angulo);
            }
            
        }
    return 0;
    }