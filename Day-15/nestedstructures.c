#include<stdio.h>
#include<string.h>

typedef struct Car
{
    float price;

    char color[20];

}car;

typedef struct Audi
{
    car c1,*ptr1;

   float mileage; 

}audi;

int main() {

    car c1;

    audi a1,*ptr;

    ptr = &a1;

    ptr->ptr1=&c1;

    ptr->ptr1->price=50000.0;

    ptr-> mileage = 14;

    strcpy(ptr->c1.color,"Black");

    printf("%f\n",(ptr->ptr1->price));
    
    printf("%f\n",ptr->mileage);

    printf("%s\n",(ptr->c1.color));
}


