//
// Created by sergio on 20/04/21.
//

#include "input.h"


bool input::max_ncheck(const int input, const int max_n) { //controlla che il massimo non sia suerato
    if (input > max_n)
        return false;
    else
        return true;
}

bool input::min_ncheck(const int input, const int min_n) { //controlla se il numero sia maggiore del minimo accettato
    if (input > min_n)
        return true;
    else
        return false;
}

void input::clear() { //clear input buffer
    std::cin.clear(); // clears the error flag on cin (so that future I/O operations will work correctly)
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n'); //skippa i prossimi n caratteri, in questo caso il max
}

std::string input::get_string_input() { //prende in ingresso una stringa
    std::string input;
    std::cin >> input;
    return input;
}

int input::get_int_input(int max_n, bool want_positive) {
    int input;
    int checker; //variabile di supporto che valuta se i check sono giusti
    int check_n = want_positive ? 2 : 1;

    do {
        checker = 0;
        std::cin >> input; //prende l'input

        if (max_ncheck(input, max_n)) { // controlla se il numero supera il massimo degli input
            checker++;

            if (want_positive) {
                if (input::min_ncheck(input))
                    checker++;
                else {
                    std::cout << "Error: invalid input" << std::endl;
                }
            }
        } else {
            std::cout << "Error: number must be an one of the options" << std::endl;
        }

        clear(); //ripulisce il buffer di input
    } while (checker != check_n);
    return input;
}
