#include <iostream>
#include <cstring>
#include <cwctype>

void upstr(char *str)
{
    int i = 0;
    char c;

    while (str[i])
    {
        if (iswalnum(str[i]))
        {
            c = toupper(str[i]);
            std::cout << c;
        }
        else 
            std::cout << str[i];
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<std::endl;
    else
    {
        av++;
        while (*av)
        {
            upstr(*av);
            av++;
        }
        std::cout << std::endl;
    }
}