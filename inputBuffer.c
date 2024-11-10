#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define BUFFER_SIZE 5

int main () {
  // int buffer[BUFFER_SIZE];

//   for (int  i = 0; i < BUFFER_SIZE; i++)
//   {
//     scanf("%d",&buffer[i]);
//   }
//   int total = 0;
//   for (int  i = 0; i < BUFFER_SIZE; i++)
//   {
//     printf("%d\n",buffer[i]);
//     total += buffer[i];
//   }

//   printf("Average %d\n",total/ BUFFER_SIZE);
  

//   return 0;

// infinte buffer
int input = 0; 
int size = 2;
int *buffer = malloc(sizeof(int) * size);
int num_data = 0;
while(true){
  if(num_data == size){
    size *= 2;
    buffer = realloc(buffer,sizeof(int) * size);
  }
  printf("Enter (-1) to quit");
  scanf("%d",&input);
  if(input == -1) break;
  else buffer[num_data] = input;
  num_data++;
}
}
