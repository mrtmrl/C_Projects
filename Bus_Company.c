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
      else if(bus.seat_arr[i][j]== 'M' &&  bus.seat_arr[i][j]== 'F')
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

void seat_choice(struct Bus *bus)
{
	int i,j,choice;
	scanf("%d", &choice);
		for (i = 0; i < 12; i++) 
  		{
   	 		for (j = 0; j < 4; j++) 
   		 	{
				if(bus->seat_arr[i][j]==choice)
				{
		  			bus->seat_arr[i][j]='999';
			 	}
      		}
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
  	printf("-----------------------------------\n");
    printf("1- Show The Seat Number List\n");
    printf("3- Select The Seat Number\n");
    printf("3- Exit\n");
    printf("-----------------------------------\n\n");
    printf("Select What You Want : ");
    scanf("%d", &console);
    
    switch(console) 
	{
      case 1:
        printf("\nSeats:\n");
        seat_print(bus);
		printf("\n");
        break;
      case 2:
      	seat_choice(&bus);
        printf("\n");
        break;
      case 3:
      	printf("\nExiting The Program...\n");
		break;
      default:
        printf("\nWrong Selection! Please Enter The Correct Selection.\n\n");
    }
  }
  while (console != 3);
  
  return 0;
}
