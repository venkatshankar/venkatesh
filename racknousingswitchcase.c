#include<stdio.h>
void main ()
{
  int a;
  printf ("enter racj no:");
  scanf ("%d",&a);
  switch(a)
  {
      case 1:
      printf("food");
      break;
      case 2:
      printf("cosmetics");
      break;
      case 3:
      printf("sports");
      break;
      default:
      printf("error");
  }
}
