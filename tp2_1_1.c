#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main()
{
   int i;
   double vt[N], *punt;
   punt = vt;
   srand(time(NULL));
   for(i = 0;i<N; i++)
   {
      *punt = 1+rand()%100;
      printf("%f ", *punt);
      punt++;
   }
   return 0;
}
