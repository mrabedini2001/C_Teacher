// else if
#include<stdio.h>

main()
{
  int a, b;

  printf("Please enter the value for a:");
  scanf("%d", & amp; a);

  printf("\nPlease enter the value for b:");
  scanf("%d", & amp; b);

  if (a & gt; b)
  {
    printf("\n a is greater than b");
  }
  else if (b & gt; a)
  {
    printf("\n b is greater than a");
  }
  else
  {
    printf("\n Both are equal");
  }
}