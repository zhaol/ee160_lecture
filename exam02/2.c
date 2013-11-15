// 2^3
// 2*2 = 4
// 4*2 = 8

int int_pow(int base, int exponent) {
    int i = 1;
    int result = 1;
    while (i<=exponent) {
        result *= base;    
        i++;    
    }
    return result;
}

int get_string_size(char str[]) {
    int number_of_places = 0;
    
    while (str[number_of_places] != '\0') {
        number_of_places++;
    }
    return number_of_places;    
}