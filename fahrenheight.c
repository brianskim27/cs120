// Brian Kim

#include <stdio.h>

int main() {
  float f, c;
  printf("Enter temperature in Fahrenheight: ");
  scanf("%f", &f);
  c = ((f - 32.0) / 1.8);
  printf("%.2f Fahrenheight = %.2f Celsius", f, c);
  printf("\n");
  printf("Brian Kim");
  printf("\n");
}
