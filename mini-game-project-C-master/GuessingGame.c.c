#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {

  int random;
  int chosen;
  char answer;

do
{
  srand(time(NULL));
  random = rand() % 100;

  printf("Let's play a game ? \n");
  _sleep(1);
  printf("I am a number ranging from 0 to 100. Which number am I ? \n");
  sleep(1);
  printf("Please, enter a valid number : \n");
  scanf("%d", &chosen);
  sleep(1);

  if(random == chosen){
    printf("Wow. You're good at it ! I am the number %d \n", chosen);
    sleep(1);
    printf("How can you be so smart ?! \n");
    sleep(1);
    printf("Let's play one more time :) \n\n");
    sleep(1);
    printf("Press Y to continue. Press any key to exit");
    scanf("%c", &answer);
  }
  else {
    printf("Uhh... I don't think so. I am not this number !\n");
    sleep(1);
    printf("Let's play another time. Can you guess me again ?\n\n");
    sleep(1);
    printf("Press Y to continue. Press any key to exit");
    scanf("%c", &answer);
  }
} while(answer == 'y' || answer == "Y");
  return 0;
}
