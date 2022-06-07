#include <stdio.h>

int
main ()
{
  int n;
  printf ("Enter the number of array\n");
  scanf ("%d", &n);
  int a[n];
  printf ("Enter the elements of array\n");
  for (int i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
    }

  printf ("Elements before selection sort\n");
  for (int i = 0; i < n; i++)
    {
      printf ("%d ", a[i]);
    }

  for (int i = 0; i < n - 1; i++)
    {
      int min = i;

      for (int j = i + 1; j < n; j++)
      {

        if (a[j] < a[min])
          {
            min = j;
          }
      }
          if (min != i)
      {
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
      }
    }

  printf ("\nElements after selection sort\n");
  for (int i = 0; i < n; i++)
    {
      printf ("%d ", a[i]);
    }
  return 0;
}


