/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s);
_puchar(s);
}
}
