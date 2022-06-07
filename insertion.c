#include <stdio.h>

int
main ()
{
  int n;
  printf ("Enter the number of elements\n");
  scanf ("%d", &n);
  int a[n];
  printf ("Enter the elements\n");
  for (int i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
    }

  printf ("Elements before insertion sort\n");
  for (int i = 0; i < n; i++)
    {
      printf ("%d ", a[i]);
    }


  for (int i = 1; i <= n - 1; i++)
    {
      int j = i - 1, key = a[i];
      while (j >= 0 && a[j] > key)
	{ 
	  a[j + 1] = a[j];
	  j--;
	}
      a[j + 1] = key;
    }

  printf ("\nElements after insertion sort\n");
  for (int i = 0; i < n; i++)
    {
      printf ("%d ", a[i]);
    }
  return 0;
}


