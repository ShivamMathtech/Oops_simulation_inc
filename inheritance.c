#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
char name[50];
void (*speak)(void); // Virtual Function 
}Animal;

// Derived class (Dog inherits Animal)

typedef struct {
    Animal base;
    int legs;
} Dog;

void dogSpeak(void) {
    printf("Dog says: Woof Woof!\n");
}
int main(int argc,char*vargs[]){
    Dog d;
    d.legs = 4;
    d.base.speak = dogSpeak;
    d.base.speak();  // Polymorphism

return EXIT_SUCCESS;
}
