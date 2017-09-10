#include <stdio.h>  //for puts
#include <stdlib.h> //for exit
#include <string.h>
#include <errno.h>  //for perror
//for open()
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
//for close
#include <unistd.h>
#include "mytoc.h" 

#define BUFSIZE 256

int main(){
	readInput();
	
}//end main

void readInput(){
	printf("Input string:\n");
	char userInput[BUFSIZE];
	int length = read(0, userInput, BUFSIZE);
	userInput[length-1] = '\0';
	
	char phrase[length];
	copyPhrase(length, userInput, phrase);
	
	counting(phrase, length);
}//end readInput

void counting(char *phrase, int length){
	int numOfWords = countWords(phrase);
	
	printf("%d\n", numOfWords);
	
	char **vector;
	createVector(vector, numOfWords, phrase);
}
