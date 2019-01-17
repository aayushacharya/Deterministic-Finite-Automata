#include <iostream>
#include<cstdio>
#include<cstring>
void setCursor(FILE*);
void readState(FILE*, char*);
void displayString(char,char*);
int flag=0;
int main(){

	char totalStates[10],alphabets[10],initState,finalStates[10],currentState,c;
	char state, lang, nextState,inputString[30];
	FILE *fptr;
	fptr = fopen("input.txt", "r");
	if (fptr == NULL) {
		std::cout << "Couldn't open file: ";
		exit(1);
	}
	readState(fptr, totalStates);
	readState(fptr, alphabets);
	while ((c = fgetc(fptr)) != EOF)
	{
		
		if (c == '\n')
		{
			break;
		}
		initState = c;
	}
	readState(fptr, finalStates);
	printf("The total states are: ");
	for (int i = 0;i < strlen(totalStates);i++)
	{
		printf("%c ", totalStates[i]);
	}
	currentState = initState;
	printf("\nPlease enter your string: ");
	std::cin >> inputString;
	for (int j = 0;j < strlen(inputString);j++)
	{
		setCursor(fptr);
		for (int i = 0;fscanf(fptr, "%c->%c->%c\n", &state, &lang, &nextState) == 3;i++)
		{
			if (currentState == state) {
				if (lang == inputString[j])
				{
<<<<<<< HEAD
=======
					//printf("(%c,%c),", currentState,nextState);
>>>>>>> ddcabe771fe2161522d4a0b4c71248f399f97cb3
					displayString(currentState, inputString);
					currentState = nextState;
					break;
				}

			}
		}
	}
	for (int i = 0; i < strlen(finalStates);i++)
	{
if (currentState == finalStates[i]) {
			printf("\nThe string is accepted: ");
			flag = 1;
			break;
			
		}
	}
	if (flag == 0)
	{
		printf("\nThe string is rejected: ");
	}
	fclose(fptr);
	return 0;

}
void setCursor(FILE* f)
{
	rewind(f);
	int counter = 0;
	char c;
	while ((c = fgetc(f)) != EOF)
	{
		if (c == '\n')
			counter++;
		if (counter == 4)
			break;
	}
}
void readState(FILE* f,char* s)
{
	int counter=0;
	char c;
	while ((c = fgetc(f)) != EOF)
	{
		if (c == '{' || c == '}' || c == ' ' || c == ',')
		{
			continue;
		}
		if (c == '\n')
		{
			break;
		}
		s[counter] = c;
		counter++;
	}
	s[counter] = 0;
}
void displayString(char currentState, char* inputString)
{
	static int i = 0;
	int counter = i;
	printf("(%c,", currentState);
	for (;counter < strlen(inputString);counter++)
	{
		printf("%c", inputString[counter]);
	}
	i++;
	printf(")\n");
}












		