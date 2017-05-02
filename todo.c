#include <stdio.h>
#include "todo.h"
#include <string.h>

int todo(){
  const int MAX_SIZE = 30;
  char input[MAX_SIZE];
  char input_mod[MAX_SIZE];
  int size_name;
  int count=0;

  
  printf("Enter a task: ");
  
  fgets(input, MAX_SIZE, stdin);
  sscanf(input,"%s",input_mod);
  size_name = strlen(input);
  printf("Size of input is %d\n", size_name); 
  
  
  
 
  return 0;
}
