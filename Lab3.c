#include <stdio.h>

int ifLowerCase(char*);
int length(char*);
int toUpperCase(char*);
int getStrng(char);
char* reverse(char*);
int countAlpha(char*);
void printOutput(char*);

int count = 0;
int len = 0;

int main(){

	char str[100];
	//gets(str);
	getStrng(str);
	len = length(str);
	reverse(str);
	countAlpha(str);
	printOutput(str);
	return 0;
}

//function to  get the length of a string

int length(char* str){
	
	int i;	
	for(i= 0; str[i]!='\0' ; i++);
	return i;;
}

//function to test if a char is lowercase or not

int ifLowerCase(char* str){
	if(str >= 'a' && str <= 'z'){
		return 1;
	}
	else{
		return 0;
	}
}

//function to convert a lowercase char to uppercase

int toUpperCase(char* str){
	
	if(ifLowerCase(str)){
		str = str - 32;
		count++;
	}
	return str;
}

//function to read the string from keyboard

int getStrng(char* str){
	
	printf("Enter a string: ");
	gets(str);
	return NULL;
}


//function to reverse the existing string

char* reverse(char* str){
	//char rev[100];
	char temp;
	int i,j = 0;
	for(i = len-1;i >= len/2; i--){
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
		j++;
	}
	return str; 
}
//function to count number of capitalized char

int countAlpha(char* str){	
	int i;
	for(i = 0; i < len; i++){
		str[i] = toUpperCase(str[i]);
	}
	return 0;
}

//function to print the output

void printOutput(char* rev_str){
	
	int i;
	for(i = 0; i < len; i++){
		printf("%c\n",rev_str[i]);
	}	
	printf("The string is %d chars and %d were capitalized.\n", len, count);
}
