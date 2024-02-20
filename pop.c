#include <stdio.h>
int main()
{
  char a[100]={};
  sprintf(a, "%d", 255);
  printf("%s \n", a);
  return 0;
}
