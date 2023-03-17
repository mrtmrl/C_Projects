#include <stdio.h>

struct Bus 
{
  int seat_arr[12][4];
};

// Print seat fonction
void seat_print(struct Bus bus) 
{
  int i,j;
  for (i = 0; i < 12; i++) 
  {
    for (j = 0; j < 4; j++) 
    {
      if(j==1)
      {
        printf(" %c", bus.seat_arr[i][j]);
      }
      else{
         printf(" %d", bus.seat_arr[i][j]);
      }
    }
    printf("\n");
  }
}

int main() 
{
  struct Bus bus;
  int count = 1;
  int i,j;
  int console;
  
  // seat number sorting
  for (i = 0; i < 12; i++) 
  {
    for (j = 0; j < 4; j++) 
    {
      if (j == 1) 
      {
        bus.seat_arr[i][j] = ' ';
      } 
      else 
      {
        bus.seat_arr[i][j] = count;
        count++;
      }
    }
  }
  
   //main console 
  do
  {
    printf("1- Seat Numbers\n");
    printf("2- Exit\n");
    printf("Select What You Want : ");
    scanf("%d", &console);
    
    switch(console) {
      case 1:
        printf("\nSeats:\n");
        seat_print(bus);
		printf("\n");
        break;
      case 2:
        printf("\nExiting The Program...\n");
        break;
      default:
        printf("\nWrong Selection! Please Enter The Correct Selection.\n\n");
    }
  } while (console != 2);

  return 0;
}

