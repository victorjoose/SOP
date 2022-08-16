#include <stdio.h>

int main() {
  char input[100];
  int input_size = strlen(input);
  char splitter[] = " ";

  char *p = strtok(input, splitter)

  /*
  while(ptr != NULL)
	{
		printf("'%s'\n", ptr);
		ptr = strtok(NULL, delim);
	}

  This loop will show that there are zeroes in the str after tokenizing
  
  for (int i = 0; i < init_size; i++)
  {
		printf("%d ", str[i]);  Convert the character to integer, in this case
							   the character's ASCII equivalent 
	}
	printf("\n");
  */

  scanf("%s", input);

  printf("Your input is %s.", input);

  return 0;
}