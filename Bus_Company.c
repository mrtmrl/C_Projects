#include <stdio.h>

int main() 
{
   int arr[12][3];
	int i,j;
   int sayac = 1;
   for(i=0; i<13; i++) {
      for(j=0; j<2; j++) {
         arr[i][j] = sayac++;
      }
      arr[i][2] = ' ';
   }
   int genislik1 = 3;
   int genislik2 = 1;
   int genislik3 = 3;
   int genislik4 = 3;

   for(i=0; i<12; i++) {
      printf("%*d ", genislik1, arr[i][0]);
      printf("%*c", genislik2, arr[i][2]); 
      printf("%*d ", genislik3, arr[i][1]); 
      printf("%*d\n", genislik4, arr[i][3]); 
   }
   
   return 0;
}
