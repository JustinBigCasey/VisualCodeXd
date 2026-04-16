#include <stdio.h>

int main(void)
{
    char name[] = {'h', 'e', 'L', 'L', 'o', '\0'};

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] = name[i] - ('A' - 'a');
        }
    }

    printf("%s\n", name);

    return 0;
}
