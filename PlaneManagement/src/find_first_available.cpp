#include <iostream>
#include "seats.h"

bool* arrays[] = {A, B, C, D};
int arr_values[] = {14, 12, 12, 14};
char label[] = {'A', 'B', 'C', 'D'};

std::string find_first_available() {

    for (int i = 0; i < 4; i++) {

        for (int n = 0; n < arr_values[i]; n++) {

            bool check = arrays[i][n];

            if (check == false) {
                return "\nOur first available seat is seat no " + std::string(1, label[i]) + '-' + std::to_string(n+1) + ".\n"; 
            }

        }
    }

    return "\nSorry! No avalible seat right now.\n";
}