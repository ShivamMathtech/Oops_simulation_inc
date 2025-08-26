#ifndef PERSON_H
#define PERSON_H
  
 typedef struct{
   char name[50];
   int age;
 } Person;

void setPerson(Person *p,const char *name,int age);
void printPerson(Person *p);

#endif
