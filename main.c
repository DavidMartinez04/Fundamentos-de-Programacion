//Codigo para calcular tiempo certificacion
//David Martinez
//19 de agosto 2022
//V-1 

//Bibliotecas
#include <stdio.h>

int main(void) {
//Variables 
  int Tcert= 60;
  int Tdedicado;
  float Trequerido;
  
  
  //ingresar los valores 
  printf("Ingresa el tiempo a estudiar en minutos\n");
  scanf("%d", &Tdedicado); //debo poner lo que quiero que me pregunte para yo insertar lo que deseo calcular con la operacion que necesite 

  //operacion

  Trequerido= Tcert*60/Tdedicado; //debo poner la formula que me de el resultado 

  //imprimir resultados

  printf("se requieren %f dias para obtener el cerificado",Trequerido); //te da el resultado y pones la oracion que quierees que te diga 
  
    
  return 0;
}