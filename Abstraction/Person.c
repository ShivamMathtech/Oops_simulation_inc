#include "Person.h"
#include<stdio.h>
#include<string.h>

void setPerson(Person *p,const char *name,int age){
  strcpy(p->name,name);
  p->age=age;
}

void printPerson(Person *p){
 printf("Name : %s, Age : %d",p->name,p->age);

}
