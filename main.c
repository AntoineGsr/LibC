/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** lib
*/

#include "include/my.h"

int main(void)
{
    my_putstr("TEST OF: putstr / putstr_error / put_nbr / strlen\n");
    my_putstr_error(BOLDRED "putstr_error => write(2)\n" RESET);
    my_putstr("putnbr 12 ==>  ");
    my_put_nbr(12);
    my_putstr("\nputnbr -12 ==>  ");
    my_put_nbr(-12);
    my_putstr("\ngetnbr azeza12 ==>  ");
    my_put_nbr(my_getnbr("azeaz12"));
    my_putstr("\ngetnbr -12 ==>  ");
    my_put_nbr(my_getnbr("-12"));
    my_putstr("\ngetnbr azaz-12az13 ==>  ");
    my_put_nbr(my_getnbr("azaz-12az13"));
    my_putstr("\ngetnbr nothing ==>  ");
    my_put_nbr(my_getnbr("nothing"));
    my_putstr("\nstrlen 6 ==>  ");
    my_put_nbr(my_strlen("testes\0"));
    my_putchar('\n');
    my_putstr(BOLDCYAN "I'll push a new version of this lib with CRITERION TESTS !\n" RESET);
}