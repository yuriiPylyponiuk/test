#include <unistd.h>
#include <stdio.h>

void ft_print_comb(void);

int main(){
    ft_print_comb();
    printf("\n");
    return 0;
}

void ft_print_comb(void){
    for(int i = 0; i <= 9; i++){
        for(int j = i + 1; j <= 9; j++){
            for(int k = j + 1; k <= 9; k++){
                printf("%d%d%d", i, j, k);
                if (i != 7 || j != 8 || k != 9) {
                    printf(", ");
                }
            }
        }
    }
}