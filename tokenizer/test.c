#include <sys/types.h>		/* for lseek, read */
#include <unistd.h>		/* for lseek, read */
#include <sys/stat.h>		/* for read */
#include <fcntl.h>		/* for read */
#include <stdlib.h>		/* for malloc */
#include <stdio.h>

#include "mytoc.h" 

#define BUFSIZE 256

int main(){
	//readInput();
	
	char **tokens = myToc("   hey what's your   name", ' ');
	
	freeVector(tokens);
}//end main

//void readInput(){
//	int on = 1;
//	while(on){
//		char *input[BUFSIZE];
//		write(1, "Input string: ", 14);
//		write(1, "$ ", 2);
//		read(0, input, BUFSIZE);
//		
//		int i = 0;
//		while(*input){
//			if(input[i] == NULL)
//				input[i] = '\0';
//		}//end while
//		
//		if(input[0]=='e' && input[1]=='x' && input[2]=='i' && input[3]=='t'){
//			on = 0; break;
//		}//end if exit
//		
//		char **tokens = myToc(input, ' ');
//		
//		//char **tokens = myToc("   hey what's your   name", ' ');
//	
//		freeVector(tokens);
//	}//end while on
//}//end readInput