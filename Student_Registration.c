#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
	char name[20];
	char surname[20];
	int id;
};


int main()
{
	char selection;
	do
	{
		printf("Welcome To Student Registration System\n\n");
		printf("Select The Action You Want To Do \n");
		printf("----------------------------------------\n");
		printf("1: New Student Registration\n");
		printf("2: Student Search\n");
		printf("3: List All Student\n");
		printf("4: Exit\n");
		printf("----------------------------------------\n");
		scanf("%c", &selection);
		fflush(stdin);
		switch(selection)
		{
			case '1':
				printf("\n-Ogrenci Ekleme-\n");
				studentregistration();
				break;
			case '2':
				printf("Enter Student ID");
				studentsearch();
				break;
			case '3':
				printf("Enter Student ID");
				break;
			case '4':
				printf("Exit\n");
			break;
			default:
                printf("There Is No Such Selection\n\n");
				printf("----------------------------------------\n");
            break;
		}
	}
	while(selection!='4');
	return 0;
}

void studentregistration()
{
	FILE *studentinfo;
	studentinfo=fopen("Student.txt","ab+");
	struct student studentstr[100];
	int i;
	if(studentstr==0)
	{
	printf("Enter Student Name: ");
	scanf("%c",&studentstr[i].name);
	fprintf(studentinfo,"%c",studentstr[i].name);
	printf("Enter Student Surname: \n");
	scanf("%c",&studentstr[i].surname);
	fprintf(studentinfo,"%c",studentstr[i].surname);
	printf("Enter Student ID");
	scanf("%d",&studentstr[i].id);
	fprintf(studentinfo,"%d",studentstr[i].id);
	fclose(studentinfo);
	}
	else
	{
		
	}
}
void studentsearch()
{
	printf("Enter A Student ID: ");
	int i,idnumber; 
	scanf("%d",&idnumber);
	for(i=0;i<=3;i++)
	{
		if(idnumber==3)
		{
				printf("%c %c %d",studentstr.name, studentstr.surname,studentstr.id);
		}
	}

}

void studentsearch()
{
	printf("Student List\d");
	int i,; 
	
	for(i=0;studentstr[i];i++)
	{
		printf("%c %c %d",studentstr[i].name, studentstr[i].surname,studentstr[i].id);
	}
}
	
