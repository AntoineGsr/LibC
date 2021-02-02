/*
** EPITECH PROJECT, 2020
** my_str_isalpha.c
** File description:
** lib
*/

#include "my.h"

int my_str_isalpha(char const *str)
{
    int size = my_strlen(str);
    int count = 0;

    if (str[0] == '\0')
        return (1);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            count++;
        if (str[i] >= 'A' && str[i] <= 'z')
            count++;
    }
    if (count == size)
        return (1);
    return (0);
}
