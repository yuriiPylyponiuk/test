#include <unistd.h>

void ft_putchar(char c);

int main() {
    char testChar = 'A'; 

    ft_putchar(testChar); 
    ft_putchar('\n');    

    return 0;
}

void ft_putchar(char c) {
    write(1, &c, 1);
}
