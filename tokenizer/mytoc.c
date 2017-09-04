#include <stdio.h>  //for puts
#include <stdlib.h> //for exit
#include <errno.h>  //for perror
//for open()
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
//for close
#include <unistd.h>
#include "mytoc.h" 

#define BUFSIZE 1024

int main(){
	printf("Input the string:\n");
	char userInput[50];
	fgets(userInput, 50, stdin);
	int numOfWords = countWords(userInput);
	
	//debugging for amount of words
	printf("%d\n", numOfWords);
	
	char **vector;
	createVector(vector, numOfWords, userInput);
	
}//end main

char **createVector(char **vector, int len, char *input){
	vector = malloc(sizeof(char *)*len);
	
	mallocWords(input);
	
	int wordLengths[len] = countLetters(input, len);
	int i;
	for(i = 0; i < len; i++){
		vector[i] = malloc(wordLengths[i]);
	}//end for
	
	return vector;
}//end createVector

int countWords(char *input){
	int i = 0;
	//int len = strlen(input);
	int numOfWords = 0;
	
	while(input[i] != EOF){
		if(input[i] == ' ')
			numOfWords++;
		i++;
	}//end while
	
	return numOfWords+1;
}//end countWords

int []countLetters(char *input, int len){
	int i = 0;
	int index = 0;
	int words[len];
	int numOfLetters = 0;
	
	while(word[i] != EOF){
		if(word[i] != ' '){
			numOfLetters++;
			i++;
		}//end if for word
		if(word[i] == ' '){
			words[index] = numOfLetters;
			numOfLetters = 0;
			index++;
			i++;
		}//end if for blanks
	}//end while
	
	return words;
}//end countLetters