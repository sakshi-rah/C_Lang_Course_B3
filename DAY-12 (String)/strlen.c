// strlen() = find length of string
// strcat() = two string join
// strcpy() = one string copy in another string
// strcmp() = compare two string
// strlwr() = string lowercase
// strupr() = string uppercase
// strrev() = string reverse

#include <stdio.h>
#include <string.h>

int main()
{
    // 1. String Length strlen();
    char name[30];
    printf("Enter Student Name: ");
    scanf("%[^\n]s", &name);
    printf("Student Name is %s\n", name);

    int length = strlen(name);
    printf("Length of String is %d\n", length);
    printf("Length of String is %d\n", strlen(name));

    return 0;
}