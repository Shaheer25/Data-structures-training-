#include <stdio.h>
#include <string.h>

struct Person {
  char name[50];
  int citNo;
  float salary;
} person1;

int main() 
{
  struct Person p2;	
  strcpy(person1.name, "George Orwell");
  person1.citNo = 1984;
  person1. salary = 2500;
  
  printf("Enter the value for name:");
  scanf("%s",&p2.name);
  printf("Enter the value for citNo:");
  scanf("%d",&p2.citNo);
  printf("Enter the value for salary:");
  scanf("%f", &p2.salary);
  

  printf("Name: %s\n", person1.name);
  printf("Citizenship No.: %d\n", person1.citNo);
  printf("Salary: %.2f\n", person1.salary);
  
  printf("Name: %s\n", p2.name);
  printf("Citizenship No.: %d\n", p2.citNo);
  printf("Salary: %.2f\n", p2.salary);
  

  return 0;
}