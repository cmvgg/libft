#include "libft.h"

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <limits.h>
# include <fcntl.h>

int main() {
    char destino[20] = "lalal";
    char fuente[] = "tarara";
	char destino2[20];

	size_t tamano_destino = sizeof(destino);
    size_t tamano_destino2 = sizeof(destino2);

    size_t resultado = ft_strlcpy(destino, fuente, tamano_destino);
    size_t resultado2 = strlcpy(destino2, fuente, tamano_destino2);

    printf("Cadena copiada: %s ft_\n", destino);
    printf("Tamaño total después de copiar: %zu ft_\n", resultado);

    //printf("Cadena copiada: %s st\n", destino2);
    //printf("Tamaño total después de copiar: %zu st\n", resultado2);

    return 0;
}


