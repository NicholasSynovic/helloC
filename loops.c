#include <stdio.h>

void moo(int amount)    {
    for (int b = 0; b < amount; b++)    {
        printf("moo ");
    }
    printf("\n");
}

void meow(int amount)   {
    for (int c = 0; c < amount; c++)    {
        printf("meow ");
    }
    printf("\n");
}

int main(void)  {
    int maximumMoo = 10;
    int maximumMeow = 3;

    for (int a = 1; a < maximumMoo + 1; a++)    {
        moo(a);
    }

    while(maximumMeow != 0) {
        meow(maximumMeow);
        maximumMeow--;
    }

    return 0;
}
