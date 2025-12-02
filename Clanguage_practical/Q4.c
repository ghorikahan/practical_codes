#include <stdio.h>
int main()
{
    char Alpha;

    scanf("%c", &Alpha);

    if (Alpha == 'A' || Alpha == 'a' || Alpha == 'E' || Alpha == 'e' || Alpha == 'I' || Alpha == 'i' || Alpha == 'O' || Alpha == 'o' || Alpha == 'U' || Alpha == 'u')
    {
        printf("vowel");
    }
    else
    {
        printf("consonant");
    }
    return 0;
}