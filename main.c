#include <stdio.h>

int random(int upperLimit) {
    int i;
    srand(time(0));  
    for(i=0;i<10;i++) {  
      return("%d ",(rand() %upperLimit) + 1);  
    }  
}

int didBeat(int playerSelection, int cpuSelection) {
  if (playerSelection == 1 && cpuSelection == 3) {
    return 1;
  } else if (playerSelection == 3 && cpuSelection == 1) {
    return 2;
  } else if (playerSelection == 2 && cpuSelection == 1) {
    return 1;
  } else if (playerSelection == 1 && cpuSelection == 2) {
    return 2;
  } else if (playerSelection == 3 && cpuSelection == 2) {
    return 1;
  } else if (playerSelection == 1 && cpuSelection == 3) {
    return 2;
  } else {
    return 3;
  }
}

int main(void) {
  char userSelection;
  int cpuSelection = random(3);
  int playerSelection;
  char cpuSelectionChar[] = "err";

  printf("\n || WELCOME TO ROCK PAPER SCISSORS || \n || TYPE 'r', 'p', OR 's' TO BEGIN THE GAME || \n");
  scanf("%c", &userSelection);

  switch (userSelection) {
    case 'r':
      playerSelection = 1;
      break;
    case 'p':
      playerSelection = 2;
      break;
    case 's':
      playerSelection = 3;
      break;
    default: 
      break;
  }

  if (cpuSelection == 1) {
    strcpy(cpuSelectionChar, "ROCK");
  } else if (cpuSelection == 2) {
    strcpy(cpuSelectionChar, "PAPER");
  } else {
    strcpy(cpuSelectionChar, "ROCK");
  }
  
  if (didBeat(playerSelection, cpuSelection) == 1) {
    printf("|| PLAYER WON! ||\n || CPU SELECTION: %s ||\n", cpuSelectionChar);
  } else if (didBeat(playerSelection, cpuSelection) == 2) {
    printf("|| CPU WON! ||\n || CPU SELECTION: %s ||\n", cpuSelectionChar);
  } else {
    printf("|| STALEMATE! ||\n || CPU SELECTION: %s ||\n", cpuSelectionChar);
  }
  return 0;
}