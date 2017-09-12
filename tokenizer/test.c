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
	//readInput();
	
	char **tokens = myToc("hey what's your name", ' ');
	
}//end main

//void readInput(){
//	
//}//end readInput