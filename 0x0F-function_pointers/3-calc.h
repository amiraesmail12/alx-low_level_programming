#ifndef _3_CALC_H_
#define _3_CALC_H_

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/*3-op_functions.c module*/
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/*3-get_op_func.c module*/
int (*get_op_func(char *s))(int, int);
#endif /*_3_CALC_H_*/
