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

int main(void)
{
    //    break_lines();
    copy_file();
    return 0;
}
