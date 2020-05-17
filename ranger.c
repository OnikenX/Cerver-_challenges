#include <errno.h>
#include <err.h>
#include <stdio.h>
#include <stdlib.h>

// ranger
int main(int argc, char *argv[]) {
  if (argc < 4) {
    printf("\tranger\n"
           "Descobre se o numero esta num determinado alcance.\n"
           "Formato:\n "
           "> ranger valor minimo maximo\n");
    return 1; // sem argumentos suficientes
  }
  printf("\tValores das strings:"
         "valor[v] = %s ; \n"
         "minimo[m] = %s ; \n"
         "maximo[M] = %s;\n",
         argv[1], argv[2], argv[3]);
  long double valor, minimo, maximo;
  char *strend;
  errno = 0;
  valor = strtold(argv[1], &strend);
  minimo = strtold(argv[2], &strend);
  maximo = strtold(argv[3], &strend);
  if (errno == ERANGE) {
    printf("demasiado grande.\n");
    return 2;
  }

  printf("\n\tValores convertidos:"
         "valor[v] = %Lf ; \n"
         "minimo[m] = %Lf ; \n"
         "maximo[M] = %Lf;\n",
         valor, minimo, maximo);

  if (maximo < minimo) {
    printf("O maximo é menor do que o valor minimo.");
    return 4;
  }

  if ((valor <= maximo) && (valor >= minimo)) {
    printf("Está dentro do range.\n");
  } else {
    printf("Não está dentro do range.\n");
  }
  return 0;
}
