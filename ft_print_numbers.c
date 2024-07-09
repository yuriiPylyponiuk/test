#include <unistd.h> 

void ft_print_numbers(void);

int main() {
    ft_print_numbers(); 
    write(1, "\n", 1);

    return 0;
}

void ft_print_numbers(void) {
    for (char digit = '0'; digit <= '9'; digit++) {
        write(1, &digit, 1);
    }
}
