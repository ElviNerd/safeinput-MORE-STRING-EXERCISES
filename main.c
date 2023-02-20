#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include "safeinput.h" 


/*
void charPosition & nroftimesInString(){
    
    char text[100];
    printf("Write a text");
    gets(text);
    
    int character;
    printf("Name a character\n");
    scanf("%c", &character);


    char * find = strchr(text, character); // FIND NEEDLE IN HAYSTACK
    if (find==NULL)
        printf("Did not find the character %c in the text", character);
    else{
        printf("Found the character %c, it was in position: %d", character, find-text);
    }
    
void FindnrcharinLoop(){
    char text[100];
    int charInput[2];
    
    printf("Write a text: \n");
    gets(text);

    printf("Write in a character: \n");
    scanf("%c", &charInput);
    
    char character=charInput[0];

    char *find = strchr(text, character);

    int charcount= 0;
    for (int i=0; i<=strlen(text); i++){
        if (text[i] == character)// if i in text == character
            charcount++;
    } // NEXT IF & ELSE IF OUTSIDE FOR-LOOP, SO THE TEXT 
    //ONLY GETS PRINTED ONCE AND NOT AS MANY TIMES AS CHARS IN TEXT.
    if(charcount ==0)
         printf("There was no such char\n");

    else
        printf("The character %c was found %d times.", character, charcount);
    
}

void changestringReplaceaChar(){
    char string[] = "This is a string you are supposed to change"; //Förbestämd mening... byt ut ' '

    for(int i=0; i<strlen(string);i++){
        if(string[i]== ' ')
            string[i] ='*';
    }

    int count = 0;
    for(int i=0; i<strlen(string);i++){ 
        if(string[i] =='*')
            count++;
    }

    printf("I found %c    %d times", '*', count);
}
Be användaren mata in en mailadress. Programmet skall kontrollera att inmatningen är rätt dvs att det finns
ett @ tecken och att det finns en . med 2 eller 3 tecken efter. 
Meddela användaren om det är rätt eller felaktig adress

void valideringAvMejl(){
    char email[100];
   
    GetInput("Enter your email-address please", email, sizeof(email));

    bool containsAt =strchr(email,'@'); // om ej @ i inmatning så händer inget i consolen.
    bool containsDot = false; // sätt till falskt (innehåller varken.och är inte ok efter.) 
    bool okAfterDot = false; //så man sen kan sätta premisser för sant.

    char *lastDot= strchr(email, '.');

    if(lastDot){
        containsDot = true;
        int pos = lastDot - email; // Då email innehåller . kollar vi VAR . är
        int after = strlen(email)- pos - 1; // strl på allt som kommer efter.
        okAfterDot = after ==2 || after ==3;
    }

    if(containsAt && containsDot && okAfterDot){
        printf("Ok email");
    }else
        printf("invalid email");
    
}



int wordCount()
{
    char str[80];
    int i, w = 0;
    printf("Enter a string: ");
    scanf("%[^\n]",str);

    for (i = 0; str[i] != '\0'; i++)
    {
       
        if((str[i]!=' ' && str[i+1]==' ')||(str[i+1]=='\0' && str[i]!=' '))
        {
            w++;
        }
        
    }

    printf("The number of words = %d", w );

    return 0;
}*/
void main(){
    char text[100];
    GetInput("Ange en text:",text, sizeof(text));

    char upLowcase[100];
    char textBackwards[100];


    int count = 0;
    for(int i = 0; i < strlen(text);i++){
        if(text[i] == ' ')
            continue;
        upLowcase[count] = tolower(text[i]);
        count++;
    }
    upLowcase[count] = 0;
    
    count = 0;
    for(int i = strlen(upLowcase)-1; i>=0 ;i--){
        textBackwards[count] = upLowcase[i];
        count++;
    }
    textBackwards[count] = 0;

    if(strcmp(upLowcase,textBackwards)==0){
        printf("palindrom hittat");
    }
    else{
        printf("inte palindrom");
     }

}