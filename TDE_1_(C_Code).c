//////////////////////////////////////////////////////////////
beecrowd | 1009
Salário com Bônus

#include <stdio.h>

int main(void) {

  char nome[50];
  double salario, montante, total;
  scanf("%s", nome);
  scanf("%lf", &salario);
  scanf("%lf", &montante);
  total = salario + (montante * 0.15);
  printf("TOTAL = R$ %.2lf\n", total);
}

//////////////////////////////////////////////////////////////
beecrowd | 1036
Fórmula de Bhaskara

#include <math.h>
#include <stdbool.h>
#include <stdio.h>
int main(void) {

  double A, B, C, delta;
  scanf("%lf" "%lf" "%lf", &A, &B, &C);
  delta = (B * B) - (4 * A * C);
  if (A == 0 || delta <= 0) {
    printf("Impossivel calcular");
  } else {
    double X1, X2;
    X1 = (-B + sqrt(delta)) / ( 2*A);
    X2 = (-B - sqrt(delta )) /( 2*A);
    printf("R1 = %.5lf\n", X1);
    printf("R2 = %.5lf\n", X2);
  }

  return 0;
}

//////////////////////////////////////////////////////////////
beecrowd | 1038
Lanche

#include <stdio.h>

int main(void) {

  int v1, v2;
  float preco;
  scanf("%d"
        "%d",
        &v1, &v2);
  if (v1 == 1) {
    preco = v2 * 4;
  } else if (v1 == 2) {
    preco = v2 * 4.50;
  } else if (v1 == 3) {
    preco = v2 * 5;
  } else if (v1 == 4) {
    preco = v2 * 2;
  } else if (v1 == 5) {
    preco = v2 * 1.50;
  }
  printf("Total: R$ %.2lf\n", preco);

  return 0;
}

//////////////////////////////////////////////////////////////
beecrowd | 1040
Média 3

#include <stdio.h>

int main(void) {

  
  double n1, n2, n3, n4;
  scanf("%lf"
        "%lf"
        "%lf"
        "%lf",
        &n1, &n2, &n3, &n4);

  double media1 = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;
  printf("Media: %.1lf\n", media1);

  if (media1 >= 7) {
    printf(("Aluno aprovado.\n"));
  }

  else if (media1 < 5) {
    printf(("Aluno reprovado.\n"));
  }

  else {
    printf(("Aluno em exame.\n"));
    double nota;
    scanf("%lf", &nota);
    printf("Nota do exame: %.1f\n", nota);

    double media2 = (media1 + nota) / 2;

    if (media2 >= 5) {
      printf(("Aluno aprovado.\n"));
      printf("Media final: %.1f\n", media2);
    }

    else if (media2 <= 5) {
      printf(("Aluno reprovado.\n"));
      printf("Media final: %.1f\n", media2);
    }
  }
}
//////////////////////////////////////////////////////////////
