#include <iostream>
#include "input.h"
void encodeChar (int i, std :: string &str, int n){
    char letter = str[i];
    if ((letter >= 'A' && letter < 'N') || (letter >= 'a' && letter <'n')){
        letter += n;
    }
    else if ((letter >= 'M' && letter < 'Z') || (letter >= 'm' && letter <'z')){
        letter -= n;
    }
    str.replace(i, 1, 1, letter);
}
void encodeString (int numChar, std :: string & str, int n){
    for (int i = numChar - 1; i >= 0; i--)
        encodeChar(i, str, n);
}


int main() {


    int n = 13;
    std :: cout << "Questo programma prende in ingresso una scritta e la encripta/decripta"<< std :: endl;
    int replay = 2;
    do{
        std :: cout << "Inserisci parola da criptare/decriptare:";
        std :: string takenInput = input :: get_string_input();
        encodeString(takenInput.size(), takenInput,n);
        std :: cout << "Output: "<< takenInput << std:: endl;
        std :: cout << "Premi (1) per eseguire nuovamente" << std :: endl << "Premi (2) per uscire"<< std:: endl;
        replay = input ::get_int_input(2, true);
    }while(replay == 1);


    return 0;
}
