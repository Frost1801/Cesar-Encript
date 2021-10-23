//
// Created by sergio on 20/04/21.
//

#ifndef ROBA_A_CASO_INPUT_H
#define ROBA_A_CASO_INPUT_H
#include <iostream>
#include <limits>
#include <climits>
#include <cctype>

class input {
public:
    static int get_int_input(int max_n = INT_MAX, bool want_positive = true); //prende in ingresso un int, può avere un max
    static std :: string get_string_input(); //prende in ingresso una stringa

    //funzioni di supporto dei metodi principali
    static bool max_ncheck (int input, int max_n);
    static bool min_ncheck (int input, int min_n = 0);
    static void clear();
};


#endif //ROBA_A_CASO_INPUT_H
