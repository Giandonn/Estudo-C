// #include <stdio.h>
// #include <string.h>

// int main() {
//   char palavrasecreta [20];
//   sprintf(palavrasecreta, "Melancia");

//   int acertou = 0;
//   int enforcado = 0;

//   do {
//     char chute;
//     scanf("%c", &chute);

//     for (int i = 0; i < strlen(palavrasecreta); i++) {
//       if (palavrasecreta[i] == chute) {
//         printf("a posicao %d tem essa letra \n", i);
//       }
//     }

//   } while (!acertou && !enforcado);

// }

#include <stdio.h>
#include <string.h>

int main()
{
  int notas[5];
  notas[0] = 1;
  notas[1] = 4;
  notas[2] = 7;
  notas[3] = 5;
  notas[4] = 10;

  for (int i = 0; i <= notas; i++)
  {
    printf("%d \n", notas[i]);
  }
}