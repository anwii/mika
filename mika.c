#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void rps(char* userInput);

int main() {

	char intro[] = "Hi! I'm Mika, a cute anime girl!\n";
	char ask[] = "How can I help? (Enter help for suggestions.)\n";
	char confused[] = "I don't understand.\n";
	char joke[] = "My dog has no nose. It smells terribly!\n";
	char helpList[] = "Try entering:\njoke\nsay\nrps\nexit\n";
	char say[] = "What would you like me to say?\n";
	char chooserps[] = "Choose rock, paper or scissors.\n";

	char userInput[100];


	printf("%s", intro);

	while (1) {
		printf("%s", ask);
		scanf("%s", userInput);

		if ( 0 == (strcmp(userInput, "exit")) ) {
			exit(0);
		}

		else if ( 0 == (strcmp(userInput, "help")) ) {
			printf("%s", helpList);
		}

		else if ( 0 == (strcmp(userInput, "joke")) ) {
			printf("%s", joke);
		}

		else if ( 0 == (strcmp(userInput, "say")) ) {
			printf("%s", say);
			scanf("%s", userInput);
			printf("%s\n", userInput);
		}

		else if ( 0 == (strcmp(userInput, "rps")) ) {
			printf("%s", chooserps);
			scanf("%s", userInput);
			rps(userInput);
		}

		else {
			printf("%s", confused);
		}

	}

	return 0;
}

void rps(char* userInput) {
	int player1, player2, wld;
	time_t t;
	srand((unsigned) time(&t));



	/* determine player1 choice */
	if ( 0 == (strcmp(userInput, "rock")) ) {
		player1 = 0;
		printf("You chose %s.\n", userInput);
	}

	else if ( 0 == (strcmp(userInput, "paper")) ) {
		player1 = 1;
		printf("You chose %s.\n", userInput);
	}

	else if ( 0 == (strcmp(userInput, "scissors")) ) {
		player1 = 2;
		printf("You chose %s.\n", userInput);
	}

	else {
		player1 = 3;
		printf("You can't choose %s!\n", userInput);
	}

	/* randomnly generate rps */
	player2 = rand() % 3;

	if (player2 == 0) {
		printf("I chose rock!\n");
	}

	else if (player2 == 1) {
		printf("I chose paper!\n");
	}

	else if (player2 == 2) {
		printf("I chose scissors!\n");
	}

	/* determine winner */
	if (player1 == player2) {
		printf("The game was a draw!\n");
	}

	else if ((player1 == 0) && (player2 == 1)) {
		printf("I win!\n");
	}

	else if ((player1 == 0) && (player2 == 2)) {
		printf("You win!\n");
	}

	else if ((player1 == 1) && (player2 == 0)) {
		printf("You win!\n");
	}

	else if ((player1 == 1) && (player2 == 2)) {
		printf("I win!\n");
	}

	else if ((player1 == 2) && (player2 == 0)) {
		printf("I win!\n");
	}

	else if ((player1 == 2) && (player2 == 1)) {
		printf("You win!\n");
	}

}