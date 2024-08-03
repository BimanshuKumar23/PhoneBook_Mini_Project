#include<stdio.h>
#include<string.h>
typedef struct phoneBook phoneBook;
struct phoneBook{
	char name[30];
	char address[30];
	char phoneNo[7];
};
void find(phoneBook *s, char name[])
{
	int i;
	for (i = 0; i < 2; i++){
		if (!strcmp(s[i].name, name)){
			printf("Record Found \n");
			printf("Name: %s\n", s[i].name);
			printf("Address: %s\n", s[i].address);
			printf("Contact: %s\n", s[i].phoneNo);
			return;
		}
	}
	printf("Record Not Found\n");
	return;
}
void display(phoneBook *s){
	int i;
	for (i = 0; i < 2; i++){
		printf("Name: %s\n", s[i].name);
		printf("Address: %s\n", s[i].address);
		printf("Contact: %s\n", s[i].phoneNo);
	}
}
int main(int argc, char *argv[])
{
	phoneBook pb[5];
	char name[30], address[30],ph[7];
	int i,opt;
	for (i = 0; i < 2; i++){
		printf("Enter Name:	");
		scanf("%s", &name);
		strcpy(pb[i].name, name);
		printf("\nEnter Address: ");
		scanf("%s", &address);
		strcpy(pb[i].address, address);
		printf("\nEnter Contact#: ");
		scanf("%s", &ph);
		strcpy(pb[i].phoneNo, ph);
		printf("\n");
	}
	printf("Press 1 to display All Records\n");
	printf("Press 2 to find a record\n");
	scanf("%d", &opt);
	if (opt == 1)
		display(pb);
	else if (opt == 2){
		printf("Enter Name to search:	");
		scanf("%s", &name);
		find(pb, name);
	}
	else
		printf("Invalid Input\n");
	printf("*****Thanks For Using******\n");
	return 0;
}