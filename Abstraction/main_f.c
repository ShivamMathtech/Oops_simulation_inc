#include "Person.h"
#include<stdlib.h>
int main(int argc,char *argv[]){
Person p1;
setPerson(&p1,"Shivam Singh",25);
printPerson(&p1);
return EXIT_SUCCESS;
}
