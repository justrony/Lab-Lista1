#include <stdio.h>

int main() {
  float metros=0,final=0;
  char sexo;

  printf("Digite o genero (H/M): ");
  scanf("%c", &sexo);
  
  printf("Digite a altura: ");
  scanf("%f", &metros);

  switch(sexo){
    case 'H':
        final = 72.7 * metros - 58;
        break;
    case 'M':
        final = 62.1 * metros - 44.7;
        break;
  }
  printf("O peso ideal é: %.1f",final);
  return 0;
}