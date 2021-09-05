#include <stdio.h>

/* K&R, P7, printf split line */
void break_lines(void)
{
    printf("hello world");
    printf(
        "hello world");
    //    printf("hello world"
    //    ");
}

/* K&R section 1.5.1, file copying */
void copy_file(void)
{
    printf("EOF in this machine = %d\n", EOF);
    int c;
    while ((c = getchar()) != EOF)
        putchar(c);
}

/* K&R function prototype, parameter mis-match */
/* Note that the function prototype and function definition has 
    different parameter names, i.e., x vs a, and y vs b */
void un_match_param(int x, double y);

void un_match_param(int a, double b)
{
    printf("[%s] param: a = %d, b = %f\n", __FUNCTION__, a, b);
}

int main(void)
{
    //    break_lines();
    // copy_file();
    un_match_param(2, 3.3);
    return 0;
}
