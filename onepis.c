/******************************************************************************
               Programa para verificar qual saga e arco de One Piece
                   o usuário está de acordo com seu episódio.
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int ep;
   
     printf("Oie, estou aqui pra te ajudar a descobrir qual saga e arco de One Piece voce esta \n");
     printf ("E pra isso preciso saber: Qual episodio voce esta? \n");
     scanf ("%i",&ep );
     
     //Mar da Sobrevivência: Saga Supernovas
     // Saga East Blue
     
      if (ep <=3) { 
         printf ("Se voce esta no ep %i, entao voce esta na Saga East Blue e no Arco Romance Dawn \n\n", ep);
     }
     else { //1
      if (ep >=3 && ep <= 8) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga East Blue e no Arco Orange Town \n\n", ep);
     }
     else { //2
      if (ep >=9 && ep <= 18) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga East Blue e no Arco Vila Syrup \n\n", ep);
      }
     else { //3
      if (ep >=19 && ep <= 30) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga East Blue e na Saga East Blue e no Arco Baratie \n\n", ep);
      }
     else { //4
      if (ep >=31 && ep <= 44) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga East Blue e no Arco Arlong Park \n\n", ep);
      }
      else { //5
      if (ep >=45 && ep <= 47) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga East Blue e no Arco Historia de Capa de Buggy \n\n", ep);
      }
      else { //6
      if (ep >=48 && ep <= 53) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga East Blue e no Arco Loguetown \n\n", ep);
      }
      else { //7
      if (ep >=54 && ep <=61) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga East Blue e no Arco Dragao Milenar \n\n", ep);
      }    
      
      // Saga Alabasta
      
      else { //8
      if (ep >=62 && ep <= 63) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Alabasta e no Arco Reverse Mountain \n\n", ep);
      }
      else { //9
      if (ep >=64 && ep <= 67) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Alabasta e no Arco Whiskey Peak \n\n", ep);
      }
      else { //10
      if (ep >=68 && ep <= 69) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Alabasta e no Arco Koby e Helmeppo \n\n", ep);
      }
      else { //11
      if (ep >=70 && ep <= 77) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Alabasta e no Arco Little Garden \n\n", ep);
      }
      else { //12
      if (ep >=78 && ep <= 91) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Alabasta e no Arco Ilha Drum \n\n", ep);
      }
      else { //13
      if (ep >=92 && ep <= 130) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Alabasta e no Arco Arabasta \n\n", ep);
      }
      else { //14
      if (ep >=131 && ep <= 135) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Skypiea e no Arco Pos-Alabasta \n\n", ep);
      }
      
      // Saga Skypiea
      
      else { //15
      if (ep >=136 && ep <= 138) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Skypiea e no Arco Ilha dos Carneiros \n\n", ep);
      }
      else { //16
      if (ep >=139 && ep <= 143) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Skypiea e no Arco Nevoa Arco-Iris \n\n", ep);
      }
      else { //17
      if (ep >=144 && ep <= 152) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Skypiea e no Arco Jaya \n\n", ep);
      }
      else { //18
      if (ep >=153 && ep <= 195) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Skypiea e no Arco Skypiea \n\n", ep);
      }
      else { //19
      if (ep >=196 && ep <= 206) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Skypiea e no Arco G-8 \n\n", ep);
      }
      
      // Saga Water 7
      
      else { //20
      if (ep >=207 && ep <= 219) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Water 7 e no Arco Long Ring Long Land \n\n", ep);
      }
      else { //21
      if (ep >=220 && ep <= 224) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Water 7 e no Arco Sonho do Oceano \n\n", ep);
      }
      else { //22
      if (ep >=225 && ep <= 226) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Water 7 e no Arco Retorno de Foxy \n\n", ep);
      }
      else { //23
      if (ep >=227 && ep <= 228) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Water 7 e no Arco del Almirante Aokiji \n\n", ep);
      }
      else { //24
      if (ep >=229 && ep <= 263) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Water 7 e no Arco Water 7 \n\n", ep);
      }
      else { //25
      if (ep >=264 && ep <= 312) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Water 7 e no Arco Enies Lobby \n\n", ep);
      }
      else { //26
      if (ep >=313 && ep <= 325) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Water 7 e no Arco Pos-Enies \n\n", ep);
      }
      
      // Saga Thriller Bark
      
      else { //27
      if (ep >=326 && ep <= 336) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Thriller Bark e no Arco Ice Hunter \n\n", ep);
      }
      else { //28
      if (ep >=337 && ep <= 381) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Thriller Bark e no Arco Thriller Bark \n\n", ep);
      }
      else { //29
      if (ep >=382 && ep <= 384) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Thriller Bark e no Arco Ilha Spa \n\n", ep);
      }
      
      // Saga Guerra de Marineford
      
      else { //30
      if (ep >=385 && ep <= 407) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Guerra de Marineford e no Arco Arquipelago de Sabaody \n\n", ep);
      }
      else { //31
      if (ep >=408 && ep <= 421) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Guerra de Marineford e no Arco Amazon Lily \n\n", ep);
      }
      else { //32
      if (ep >=422 && ep <= 456) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Guerra de Marineford e no Arco Impel Down \n\n", ep);
      }
      else { //33
      if (ep >=457 && ep <= 489) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Guerra de Marineford e no Arco Marineford \n\n", ep);
      }
      else { //34
      if (ep >=490 && ep <= 516) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Guerra de Marineford e no Arco Pos-Guerra \n\n", ep);
      }
      
      // O Mar Final: A Saga do Novo Mundo
      // Saga Ilha dos Homens-Peixe
      
      else { //35
      if (ep >=517 && ep <= 522) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Ilha dos Homens-Peixe e no Arco Retorno a Sabaody \n\n", ep);
      }
      else { //36
      if (ep >=523 && ep <= 574) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Ilha dos Homens-Peixe e no Arco Ilha dos Homens-Peixe \n\n", ep);
      }
      
      // Saga Alian�a Pirata
     
      else { //37
      if (ep >=575 && ep <= 578) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Alianca Pirata e no Arco Ambicao de Z \n\n", ep);
      }
      else { //38
      if (ep >=579 && ep <= 625) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Alianca Pirata e no Arco Punk Hazard \n\n", ep);
      }
      
      else { //39
      if (ep >=626 && ep <= 628) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Alianca Pirata e no Arco Recuperando Caesar \n\n", ep);
      }
      else { //40
      if (ep >=629 && ep <= 746) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Alianca Pirata e no Arco Dressrosa \n\n", ep);
      }
      
      //Saga Yonkou
      
      else { //41
      if (ep >=747 && ep <= 750) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Yonkou e no Arco Silver Mine \n\n", ep);
      }
      else { //42
      if (ep >=751 && ep <= 779) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Yonkou e no Arco Zou \n\n", ep);
      }
      else { //43
      if (ep >=780 && ep <= 782) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Yonkou e no Arco Marinha Supernova \n\n", ep);
      }
      else { //44
      if (ep >=783 && ep <= 877) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Yonkou e no Arco Ilha Whole Cake \n\n", ep);
      }
      else { //45
      if (ep >=878 && ep <= 889) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Yonkou e no Arco Levely \n\n", ep);
      }
      else { //46
      if (ep >=890) {
         printf ("Se voce esta no ep %i, entao voce esta na Saga Yonkou e no Arco Pais de Wano \n\n", ep);
         
        //a quantidade de } e de acordo com os else's (se ha 4 elses, sao 4 } e um } pra fechar o programa) 
     }
     }
     }
     }
     }
     }
     }
     }
     }
     }
     } 
     }
     }
     }
     }
     }
     }
     }
     }
     }
     }
     } 
     }
     }
     }
     }
     }
     }
     }
     }
     }
     } 
     } 
     }
     }
     }
     }
     }
     }
     }
     }
     }
     }
     }
     }
     }
     }
    system ("pause");
    return 0;
}
