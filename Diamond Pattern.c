#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int n, c, k, space = 1;
    char isim[255];
  printf("Isim Giriniz\n");
  scanf("%s", &isim);
   n = strlen(isim);
  space = n - 1;

  for (k = 1; k <= n; k++)
  {
    for (c = 1; c <= space; c++)
      for(int i=0;i<n;i++)
      printf(" ");

    space--;
    printf("%s",isim);
    for (c = 1; c <= 2*k-1; c++)
      for(int i=0;i<n;i++)
      printf(" ");
    printf("%s",isim);
    printf("\n");
  }

  space = 1;

  for (k = 1; k <= n - 1; k++)
  {
    for (c = 1; c <= space; c++)
      for(int i=0;i<n;i++)
      printf(" ");

    space++;
printf("%s",isim);
    for (c = 1 ; c <= 2*(n-k)-1; c++)
      for(int i=0;i<n;i++)
        printf(" ");
      printf("%s",isim);

    printf("\n");
  }

  return 0;
}
