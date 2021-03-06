/*
** EPITECH PROJECT, 2020
** my_strncpy.c
** File description:
** lib
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    for (; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return (dest);
}
