#include "libft.h"
#include <stdio.h>
#include <string.h>

// Função auxiliar para colorir o output e facilitar a leitura
void test_strncmp(const char *s1, const char *s2, size_t n, int test_num)
{
    int og = strncmp(s1, s2, n);
    int ft = ft_strncmp(s1, s2, n);
    
    // Como o padrão do C exige apenas que o retorno seja > 0, < 0 ou == 0,
    // normalizamos o resultado para 1, -1 ou 0 para evitar falsos negativos.
    int og_norm = (og > 0) - (og < 0);
    int ft_norm = (ft > 0) - (ft < 0);

    if (og_norm == ft_norm)
    {
        printf("\033[0;32m[OK] Teste %d\033[0m -> s1: \"%s\", s2: \"%s\", n: %zu (OG: %d | FT: %d)\n", test_num, s1, s2, n, og, ft);
    }
    else
    {
        printf("\033[0;31m[KO] Teste %d\033[0m -> s1: \"%s\", s2: \"%s\", n: %zu (OG: %d | FT: %d)\n", test_num, s1, s2, n, og, ft);
    }
}

int main(void)
{
    printf("=== INICIANDO TESTES STRNCMP ===\n\n");

    // Teste 1: Strings idênticas, n cobre tudo
    test_strncmp("abc", "abc", 3, 1);

    // Teste 2: Strings idênticas, n menor que o tamanho delas
    test_strncmp("abcdef", "abcdef", 3, 2);

    // Teste 3: Diferença logo no primeiro caractere
    test_strncmp("abc", "zbc", 3, 3);

    // Teste 4: Diferença no meio, mas n para antes da diferença
    test_strncmp("abXde", "abYde", 2, 4);

    // Teste 5: Diferença no meio, n engloba a diferença
    test_strncmp("abXde", "abYde", 3, 5);

    // Teste 6: Uma string é o começo da outra, n cobre a diferença
    test_strncmp("abc", "abcdef", 6, 6);

    // Teste 7: Uma string é o começo da outra, mas n para antes da diferença
    test_strncmp("abc", "abcdef", 3, 7);

    // Teste 8: Tamanho n é ZERO (deve retornar 0 imediatamente)
    test_strncmp("abc", "xyz", 0, 8);

    // Teste 9: String vazia contra string com conteúdo
    test_strncmp("", "abc", 3, 9);

    // Teste 10: Ambas as strings vazias
    test_strncmp("", "", 1, 10);

    // Teste 11: Comparação após o \0 (não deve continuar comparando)
    test_strncmp("abc\0def", "abc\0xyz", 6, 11);

    // Teste 12: Edge case de ASCII estendido (caracteres "negativos")
    // Se sua função não usar (unsigned char), este teste vai falhar.
    char s1[] = { -1, 'a', '\0' }; // 255 em unsigned char
    char s2[] = {  1, 'a', '\0' };
    test_strncmp(s1, s2, 2, 12);

    // Teste 13: n muito maior que o tamanho real das strings
    test_strncmp("abc", "abc", 100, 13);

    printf("\n=== FIM DOS TESTES ===\n");
    return (0);
}