#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Variaveis para aplicar a soma dos alimentos consumidos. 
float entradasoma,principalsoma,bebidasoma,sobremesasoma;

//Função criado para as entradas.
void Entrada(){
system("clear");
int opcao;
int count = 1;

    printf ("\n\n================================Cardápio================================");
    printf ("\n1 - Frango e Alho-Poró - R$12,99\n");
    printf ("2 - Souflé Gostoso de Alho-Poró - R$19,90 \n");
    printf ("3 - Canjiquinha Mineirinha - R$16,90 \n");
    printf ("========================================================================");

    printf("\nDigite a  %iº opção desejada: ", count++);
    scanf("%i", &opcao);
//switch utilizado para pegar a escolha da entrada solicitada pelo cliente. 
    switch(opcao)
    {
      case 1 :printf("Frango e Alho-Poró_______12,99.\n");entradasoma=entradasoma+12.99;;break;
        
      case 2 :printf("Souflé Gostoso de Alho-Poró_______19,90.\n");entradasoma=entradasoma+19.90;break;
        
      case 3 :printf("\nCanjiquinha Mineirinha_______16,90.\n");entradasoma=entradasoma+16.90;break;
        
      default: printf("\n\nDigite uma opção valida!!\n\n");
    }
}
//Função criada para o pratoprincipal.
void PratoPrincipal(){
system("clear");
int opcao;
int count = 1;
int pratoprincipal;

    printf ("\n\n================================Cardápio================================");
    printf ("\n1 - Baião de dois(Arroz, bacon, calabresa, feijão macassar)-R$55,00.\n");
    printf ("2 - Feijoada(Poção de arroz, vinagrete, farofa)-R$45,00.\n"); //Prato do chefe
    printf ("3 - Tilápia grelhada(poção de arroz, purê, batata frita)-R$75,00.\n");
    printf ("========================================================================");

    printf("\nDigite a  %iº opção desejada: ", count++);
    scanf("%i", &opcao);
//switch utilizado para pegar a escolha do prato principal solicitada pelo cliente.   
    switch(opcao)
    {
      case 1 :printf("Baião de dois(Arroz, bacon, calabresa, feijão macassar)_______R$55,00.\n");
        principalsoma=principalsoma+55;break;
      
      case 2 :printf("Feijoada(Poção de arroz, vinagrete, farofa)_______R$45,00.\n");
        principalsoma=principalsoma+45;break;

      case 3 :printf("Tilápia grelhada(poção de arroz, purê, batata frita)_______R$75,00.");    principalsoma=principalsoma+75;break;

      default: printf("\n\nDigite uma opção valida!!\n\n");
    }
}
//Função criada para a Sobremesa.
void Sobremesa(){
  system("clear");
  int opcao;
  int count = 1;
    printf ("\n\n================================Cardápio================================");
    printf ("\n1 - Doce de abóbora com coco-R$10,00\n");
    printf ("2 - Doce de paçoca-R$6,50 \n");//Especialidades da casa
    printf ("3 - Bolo de rolo-R$7,00 \n");
    printf ("========================================================================");
   
    printf("\nDigite a  %iº opção desejada: ", count++);
    scanf("%i", &opcao);
//switch utilizado para pegar a escolha do cliente em relação a Sobremesa desejada. 
    switch(opcao)
    {
      case 1 :printf("Doce de abóbora com coco_______R$10,00.\n");sobremesasoma=sobremesasoma+10;break;
        
      
      case 2 :printf("Doce de paçoca_______R$6,50.\n");sobremesasoma=sobremesasoma+6.50;break;
        
      
      case 3 :printf("Bolo de rolo_______R$7,00.\n");sobremesasoma=sobremesasoma+7;break;
        
     
      default: printf("\n\nDigite uma opção valida!!\n\n");
    } 
}
//Função criada para as bebidas.
void Bebidas(){
  system("clear");
  int opcao;
  int count = 1;

    printf ("\n\n================================Cardápio================================");
    printf ("\n1 - Refrigerante 2L - R$5,90 \n");
    printf ("2 - Refrigerante Lata - R$4,50 \n");
    printf ("3 - Suco - R$13,80 \n");
    printf ("========================================================================");

    printf("\nDigite a  %iº opção desejada: ", count++);
    scanf("%i", &opcao);
//switch utilizado para pegar a escolha das bebidas solicitada pelo cliente.
    switch(opcao)
    {
      case 1 :printf("Refrigerante 2L_______R$5,90.\n");bebidasoma+=5.90;break;
        

      case 2 :printf("Refrigerante Lata_______R$4,50.\n");bebidasoma+=4.5;break;
        ;

      case 3 :printf("Suco_______R$13,80.\n");bebidasoma+=13.80;;break;
        
      
      default: printf("\n\nDigite uma opção valida!!\n\n");
    }    
}

void sair(){
  printf("\nAgredecemos sua  visita!!");
}
//Função para fazer a soma da conta
void conta(){
  void bebida();
  float conta;
  conta=entradasoma+principalsoma+bebidasoma+sobremesasoma;
  printf("\nPreço total R$%.2f",conta);
}
//Função utilizada para Mensagem de Bem-Vindo.
void BemVindo(){
  printf ("-------------------------------------\n");
  printf ("----          Bem Vindo          ----\n");
  printf ("----              a              ----\n");
  printf ("----         Ultima Gota         ----\n");
  printf ("-------------------------------------\n");
}
//Função criada para o texto descritivo sobre seu ambiente, falando sobre si, seus objetivos.
void TextoDescritivo(){
  printf("\nNosso ambiente é pensando em cada lugarzinho do brasil , assim nossos clientes podem conhecer culinárias e cultura de outros estados , somo um grupo de amigos apaixonados pela culinária brasileira e essa foi uma das formas que encontramos de vivencia todos os dias cada sabor de cada cantinho do brasil. Nosso objetivo é levar nossos sabores para o mundo , tanto para que novas culturas tenham o prazer de conhecer nossas especiarias e também para os brasileiros espalhados no mundo.\n");
}
//Função utilizada para exibir o Cardapio.
void Cardapio(){
  printf ("\n\n================================Cardápio================================");

  printf("\nEntrada:\nFrango e Alho-Poró -12,99.\nSouflé Gostoso de Alho-Poró-19,90.\nCanjiquinha Mineirinha-16,90.\n");
    
  printf("\nPrato Principal:\nBaião de dois(Arroz, bacon, calabresa, feijão macassar)-R$55,00.\nFeijoada(Poção de arroz, vinagrete, farofa)-R$45,00.\nTilápia grelhada(poção de arroz, purê, batata frita)-R$75,00.\n");

  printf("\nSobremesa:\nDoce de abóbora com coco-R$10,00.\nDoce de paçoca-R$6,50.\nBolo de rolo-R$7,00\n");

  printf("\nBebidas:\nCoca cola 250ml 2,99.\nFanta 250ml 2,25 .\nGUARANÁ ANTARCTICA 1L 4,99.\n");

  printf ("========================================================================");
}
//Função para tornar o menu funcional.
int Menu(){
  int opcao;
  int count = 1;
//do while utilizado para repetir as opções do menu.
//opções do menu.
    do{
    printf("\n\n----------Menu----------");
    printf("\n1-Entrada. ");
    printf("\n2-Prato principal  ");
    printf("\n3-Sobremesa. ");
    printf("\n4-Bebida. ");
    printf("\n5-Sair. ");
    printf("\n6-Pedir a conta");
    printf("\n------------------------");
    printf("\nDigite a  %iº opção desejada: ", count++);
    scanf("%i", &opcao);
//switch para dar funcionalidade as opções do menu.
    switch(opcao)
    {
      
      case 1 :Entrada();break;
      
      case 2 :PratoPrincipal();break;

      case 3 :Sobremesa();break;

      case 4 :Bebidas();break;

      case 5 :printf("\nObrigado pela sua presença!");return 0;

      case 6: conta();return 0;

      default: printf("\n\nDigite uma opção valida!!\n\n");
    }

  }while(opcao >= 1 || opcao <= 100 );
  
}
//Junção de todas as funções para executar na função principal.
int main(void) {
  BemVindo();
  TextoDescritivo();
  Cardapio();
  Menu();
  return 0;
}