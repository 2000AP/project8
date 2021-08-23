#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[20];
    FILE *ptr, *new;
    ptr = fopen("myfile1.txt", "r");
    new = fopen("myfile2.txt", "w");
    fgets(str, 20, ptr);
    char *a = strrev(str);
    printf("%s", a);
    fprintf(new, "%s", a);
    return 0;
}
