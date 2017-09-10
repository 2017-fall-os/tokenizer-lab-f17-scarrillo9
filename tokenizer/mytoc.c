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

#define BUFSIZE 1024

//char **mytoc(char *str, char delim){
//	
//}

void copyPhrase(int len, char *input, char *phrase){
	int i;
	for(i = 0; i < len; i++){
		phrase[i] = input[i];
	}
	phrase[i] = '\0';
}//end copyPhrase

char **createVector(char **vector, int len, char *input){
	vector = malloc(sizeof(char *)*len);
	
	countLetters(input, len);
	
//	int *wordLengths = countLetters(input, len);
//	int i;
//	for(i = 0; i < len; i++){
//		vector[i] = malloc(*(wordLengths + i));
//		printf("vector:%d %d\n", i, strlen(vector[i]));
//	}//end for
	
	return vector;
}//end createVector

int countWords(char *input){
	int i = 0;
	//int len = strlen(input);
	int numOfWords = 0;
	
	while(input[i] != '\0'){
		if(input[i] == ' ')
			numOfWords++;
		i++;
	}//end while
	
	return numOfWords+1;
}//end countWords

int *countLetters(char *input, int len){
	int i = 0;
	int index = 0;
	int words[len];
	int numOfLetters = 0;
	
	while(input[i] != '\0'){
		//printf("%c: %d\n", input[i], numOfLetters);	//debugging
		if(input[i] != ' '){
			numOfLetters++;
			i++;
		}//end if for word
		if(input[i] == ' '){
			words[index] = numOfLetters;
			numOfLetters = 0;
			index++;
			i++;
		}//end if for blanks
	}//end while
	words[index] = numOfLetters;
	
//	for(i = 0; i < len; i++){
//		printf("word %d: %d\n", i+1, words[i]);
//	}	//debugging
	
	return words;
}//end countLetters