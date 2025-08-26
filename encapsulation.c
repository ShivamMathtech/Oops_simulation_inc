#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// Encapsulate the data

typedef struct{
char name[50];
int age;
} Person;

// Function to That operate on the Person

void setPerson(Person * p,const char *name,int age){
 strcpy(p->name,name);
 p->age =age;

}
void printPerson(Person *p){
printf("The name of Person is %s",p->name);
}

int main(int argc,char*argv[]){
Person p1;
setPerson(&p1,"Shivam Singh",25);
printPerson(&p1);
return EXIT_SUCCESS;
}
