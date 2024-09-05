#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*math documentation ca be found at https://www.w3schools.com/c/c_ref_math.php */

double logab (double number, int base) {
    return(log(number) / log(base));
}

double change_number_base (int, int, int *);

int main() {
    int base = 8;
    int number = 63;

    const int arr_size = ceil(logab(number, base));
    int converted_number[arr_size];
    change_number_base(number, base, converted_number);


    int arr_index = 0;
    while (arr_index != arr_size) {
        printf("%d\n", converted_number[arr_index]);
        arr_index ++;
    }


    return(0);
}

double change_number_base (int number_in, int base, int * converted_number) {
    int curent_power = floor(logab(number_in, base));
    int arr_index = 0;
    while (curent_power != -1){
        converted_number[arr_index] = floor(number_in / (pow(base, curent_power)));

        number_in -= converted_number[arr_index] * pow(base, curent_power);

        arr_index ++;
        curent_power --;
    }
}