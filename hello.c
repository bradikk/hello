#include <stdio.h>
#include <cs50.h>

int main(void)
//Ask user input for name
{
    string name = get_string("What's your name? ");
    //Insert s value as name
    printf("hello, %s\n", name);
}