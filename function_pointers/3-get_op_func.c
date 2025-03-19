#include <stdio.h>
#include "3-calc.h"
/**
* get_op_func - choose func based on op
* @s: operator as arg
* Return: ptr func
*/
int (*get_op_func(char *s))(int, int)
{

    op_t ops[] = {
           {"+", op_add},
           {"-", op_sub},
           {"*", op_mul},
           {"/", op_div},
           {"%", op_mod},
           {NULL, NULL}
    };

    int i;

    while (ops[i].op != NULL && *(ops[i].op != *s)
        i++;

    return (ops[i].f);

}
