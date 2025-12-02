#include <stdio.h>
struct data
{
    int Id;
    char name[50];
    int marks;
};

int main()
{

    struct data d1;

    scanf("%d", &d1.Id);
    scanf("%s", &d1.name);
    scanf("%d", &d1.marks);

    printf("Student details:-");
    printf("%d\n", d1.Id);
    printf("%s\n", d1.name);
    printf("%d\n", d1.marks);
}