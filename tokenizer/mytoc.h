#ifndef mytoc_included
#define mytoc_included

//demo method
int main();

//word counter
int countWords(char* input);

//letter counter
int []countLetters(char *input, int len);

//creates the tokenizer vector
char **createVector(char **vector, int len, char *input);

#endif