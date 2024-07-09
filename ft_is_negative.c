#include <unistd.h>

void ft_is_negative(int n);

int main() {
    ft_is_negative(-9);  
    write(1, "\n", 1);   
    ft_is_negative(0);   
    write(1, "\n", 1);   
    ft_is_negative(8);   
    write(1, "\n", 1);   

    return 0;
}

void ft_is_negative(int n) {
    if (n < 0) {
        write(1, "N", 1); 
    } else {
        write(1, "P", 1); 
    }
}