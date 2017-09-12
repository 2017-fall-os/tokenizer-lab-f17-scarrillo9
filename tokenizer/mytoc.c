#include <stdio.h>  //for puts
#include <stdlib.h> //for exit
#include <errno.h>  //for perror

#include "mytoc.h" 


char **myToc(char *str, char delim){
	printf("inside myToc\n");
	int numOfWords = countWords(str, delim);
	
	char **vector = (char **)calloc(numOfWords+1, sizeof(char *));
	vector[numOfWords] = NULL;
	char *currString = str;
	
	int i;
	for(i = 0; i < numOfWords; i++){
		int wordLength = countLetters(currString, delim);
		char *currWord = startWord(currString, delim);
		
		vector[i] = (char *)malloc(wordLength+1);
		vector[wordLength] = NULL;
		vector[i] = copyWord(currWord, wordLength);
		
		printf("currString: %s\n currWord: %s\n", currString, currWord);
		currString = currWord;
	}//end for loop
	
	return vector;
}//end myToc

char *copyWord(char *str, int length){
	printf("inside copyWord\n");
	char *currArray = (char *)malloc(length+1);
	currArray[length] = '\0';
	
	int i;
	for(i = 0; i < length; i++){
		currArray[i] = str[i];
	}//end for loop
	
	return currArray;
}//end copyWord

int countLetters(char *str, char delim){
	int count = 0;
	
	while(*str != '\0'){
		if(*str == delim && count == 0){
			str++;
		}//end if string hasn't seen word
		if(*str == delim && count > 0){
			break;
		}//end if comes across a space after word
		if(*str != delim){
			count++;
			str++;
		}//end if counting word
	}//end while
	
	printf("inside countLetters %d\n", count);
	return count;
}//end countLetters

char *startWord(char *str, char delim){
	printf("inside startWord\n");
	char *newstr = str;
	int onWord = 0;
	
	while(*newstr != '\0'){
		if(*newstr == delim && onWord == 0)
			newstr++; 
		if(*newstr == delim && onWord == 1)
			break;
		if(*newstr != delim && onWord == 0){
			onWord = 1;
			newstr++;
		}
		if(*newstr != delim && onWord == 1)
			newstr++;
	}//end while
	
	return newstr;
}//end wordLength

int countWords(char *str, char delim){
	int i = 0; 
	int numOfWords = 0;
	int space = 1;	//multiple delims
	
	while(str[i] != '\0'){
		if(str[i] != delim && space == 1){
			numOfWords++;
		}//end if
		if(str[i] == ' '){
			space = 1;
		}//end if
		else
			space = 0;
		i++;
	}//end while
	printf("inside countWords %d\n", numOfWords);
	
	return numOfWords;
}//end countWords


