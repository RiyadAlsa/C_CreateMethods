#include <stdio.h>
#include <string.h>
#include "chop.h"
#include <ctype.h>


int main() {
    //create the string
    char lines[] = "2A!   S4?D d923\n";

    //call the function
    //- chop(lines);
    //print out for proof
    //- printf(lines);

    //call the function
    convertLowerCase(lines);
    //print out for proof
    printf(lines);

    //call the function
    //- replaceDigits(lines);
    //print out for proof
    //- printf(lines);

    //call the function
    //-  replacePunc(lines);
    //print out for proof
    //- printf(lines);

    //call the function
    //- reduceSpace(lines);
    //print out for proof
    //- printf(lines);

    return 0;
}

//chop function
int chop (char * line){
    //for loop to look through the string
    for (int i = strlen(line); i > 0; --i) {
        //check if we are at \n
        if(line[i] == '\n'){
            //remove it
            line[i] = '\0';
        }
    }
}

//chop function
int convertLowerCase (char * line){

    for (int i = 0; i < strlen(line); ++i) {
        if (line[i] > 'A' - 1 && line[i] < 'Z' + 1){
            line[i] = line[i] + ('a' - 'A');
        }
    }
}

//chop function
int replaceDigits (char * line){

    for (int i = 0; i < strlen(line); ++i) {
        if (line[i] >= '0' && line[i] <= '9'){
            line[i] = ' ';
        }
    }
}

//chop function
int replacePunc (char * line){

    int e;
    for (int i = 0; i < strlen(line); ++i) {
        if (line[i] > '!' - 1 && line[i] < '/' + 1){
            line[i] = ' ';
            e++;
        }
        if (line[i] > ':' - 1 && line[i] < '@' + 1) {
            line[i] = ' ';
            e++;
        }
    }
   // return e;
}

//chop function
int reduceSpace (char * line){

    char newLine[] = "";
    int j = 0;
    for (int i = 0; i < strlen(line); ++i) {
        if (!(isspace(line[i]))){
            newLine[j++] = line[i];

        }
    }
}

