#include "libft.h"
#include <stdio.h>
#include <string.h>

// Função auxiliar para rodar e comparar os testes
void test_memcmp(const void *s1, const void *s2, size_t n, int test_num)
{
    int og = memcmp(s1, s2, n);
    int ft = ft_memcmp(s1, s2, n);
    
    // Normaliza os resultados para 1, -1 ou 0
    int og_norm = (og > 0) - (og < 0);
    int ft_norm = (ft > 0) - (ft < 0);

    if (og_norm == ft_norm)
    {
        printf("\033[0;32m[OK] Teste %d\033[0m -> n: %zu (OG: %d | FT: %d)\n", test_num, n, og, ft);
    }
    else
    {
        printf("\033[0;31m[KO] Teste %d\033[0m -> n: %zu (OG: %d | FT: %d)\n", test_num, n, og, ft);
    }
}

int main(void)
{
    printf("=== INICIANDO TESTES MEMCMP ===\n\n");

    // Teste 1: Memórias idênticas
    test_memcmp("abcdef", "abcdef", 6, 1);

    // Teste 2: Idênticas, mas n é menor que o tamanho total
    test_memcmp("abcdef", "abcdef", 3, 2);

    // Teste 3: Diferença na primeira posição
    test_memcmp("abcdef", "zbcdef", 6, 3);

    // Teste 4: Diferença no meio, mas n para antes da diferença
    test_memcmp("abcXdef", "abcYdef", 3, 4);

    // Teste 5: Diferença no meio, n engloba a diferença
    test_memcmp("abcXdef", "abcYdef", 4, 5);

    // Teste 6: Tamanho n é ZERO (deve retornar 0 imediatamente)
    test_memcmp("abcdef", "xyz", 0, 6);

    // Teste 7: Strings idênticas ATÉ o \0, mas com diferença DEPOIS do \0
    // memcmp DEVE continuar comparando e encontrar a diferença!
    test_memcmp("abc\0def", "abc\0xyz", 7, 7);

    // Teste 8: Mesmo caso anterior, mas n para exatamente no \0
    test_memcmp("abc\0def", "abc\0xyz", 4, 8);

    // Teste 9: Edge case com ASCII estendido (valores "negativos")
    // Se não usar (unsigned char *), o caractere \xff (-1 em signed) 
    // vai parecer menor que \x01, o que é incorreto.
    char src1[] = "\xff\xaa\x00";
    char src2[] = "\x01\xaa\x00";
    test_memcmp(src1, src2, 3, 9);

    // Teste 10: Comparando arrays de inteiros (afinal, é memória genérica)
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {1, 2, 5, 4};
    test_memcmp(arr1, arr2, sizeof(int) * 4, 10);

    printf("\n=== FIM DOS TESTES ===\n");
    return (0);
}