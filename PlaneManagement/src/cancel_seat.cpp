#include <iostream>
#include "seats.h"

bool cancel_seat(char row_letter, short seat_num) {

    bool* row = nullptr;    
    row_letter = toupper(row_letter);

    if (row_letter == 'A' && seat_num < 15) row = A;
    else if (row_letter == 'B' && seat_num < 13) row = B;
    else if (row_letter == 'C' && seat_num < 13) row = C;
    else if (row_letter == 'D' && seat_num < 15) row = D;
    else throw std::out_of_range("\nInvalid row letter or seat number!");

    if (row[seat_num - 1] == true) {
        row[seat_num - 1] = false;
        return true;
    } else return false;

}
