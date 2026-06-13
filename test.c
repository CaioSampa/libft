#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

// Função auxiliar para rodar e comparar os testes
void test_atoi(const char *str, int test_num)
{
    int og = atoi(str);
    int ft = ft_atoi(str);

    if (og == ft)
    {
        // Troque os caracteres invisíveis por algo legível no print
        printf("\033[0;32m[OK] Teste %2d\033[0m -> Input: ", test_num);
        if (str[0] == '\t' || str[0] == ' ')
            printf("\"[whitespaces]...\"");
        else
            printf("\"%s\"", str);
        printf(" | (OG: %d | FT: %d)\n", og, ft);
    }
    else
    {
        printf("\033[0;31m[KO] Teste %2d\033[0m -> Input: \"%s\"\n", test_num, str);
        printf("    -> OG retornou: %d\n", og);
        printf("    -> FT retornou: %d\n", ft);
    }
}

int main(void)
{
    printf("=== INICIANDO TESTES ATOI ===\n\n");

    // Teste 1: Número simples positivo
    test_atoi("42", 1);

    // Teste 2: Número simples negativo
    test_atoi("-42", 2);

    // Teste 3: Número com sinal de mais explicito
    test_atoi("+42", 3);

    // Teste 4: Espaços em branco permitidos (isspace) no começo
    // \t (tab), \n (newline), \v (vtab), \f (form feed), \r (carriage return) e espaço
    test_atoi(" \t\n\v\f\r  54321", 4);

    // Teste 5: Caracteres não numéricos DEPOIS do número (deve parar e retornar o número)
    test_atoi("42_is_the_answer", 5);

    // Teste 6: Caracteres não numéricos ANTES do número (deve retornar 0)
    test_atoi("the_answer_is_42", 6);

    // Teste 7: Múltiplos sinais seguidos (Edge case clássico da 42)
    // A atoi original NÃO aceita múltiplos sinais. Ela vê "+-" e para ali mesmo, retornando 0.
    test_atoi("+-42", 7);
    test_atoi("--42", 8);
    test_atoi("++42", 9);

    // Teste 10: String vazia
    test_atoi("", 10);

    // Teste 11: Apenas espaços em branco
    test_atoi("    ", 11);

    // Teste 12: Apenas um sinal
    test_atoi("-", 12);

    // Teste 13: Número zero
    test_atoi("0", 13);
    test_atoi("-0", 14);

    // Teste 15: Limite máximo de um int de 32 bits (INT_MAX: 2147483647)
    test_atoi("2147483647", 15);

    // Teste 16: Limite mínimo de um int de 32 bits (INT_MIN: -2147483648)
    test_atoi("-2147483648", 16);

    // Teste 17: Overflow e Underflow (Comportamento indefinido na libc original)
    // Nota: A atoi original da glibc lida com overflows de formas que podem variar por sistema, 
    // mas a maioria dos testers da 42 aceita o comportamento que o seu algoritmo padrão cuspir 
    // ou o comportamento da função strtol.
    test_atoi("2147483648", 17);  // INT_MAX + 1
    test_atoi("-2147483649", 18); // INT_MIN - 1

    printf("\n=== FIM DOS TESTES ===\n");
    return (0);
}