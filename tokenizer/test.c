#include <stdio.h>  //for puts
#include <stdlib.h> //for exit

#include "mytoc.h" 

#define BUFSIZE 256

int main(){
	
	char **tokens = myToc("   hey what's your   name", ' ');
	
	freeVector(tokens);
	
}//end main
