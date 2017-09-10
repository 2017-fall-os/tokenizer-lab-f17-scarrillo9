#ifndef mytoc_included
#define mytoc_included

//demo method
int main();

void readInput();

void counting(char *phrase, int length);

//word counter
int countWords(char* input);

//letter counter
int *countLetters(char *input, int len);

//creates the tokenizer vector
char **createVector(char **vector, int len, char *input);

void copyPhrase(int len, char *input, char *phrase);

#endif