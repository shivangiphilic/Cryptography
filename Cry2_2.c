#include <stdio.h>
#include <string.h>
void cipher(char *str)
{
    int len = strlen(str);
    char temp;
    for (int i = 0; str[i] != '\0' ; i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                temp = str[i] - 3;
                if (temp < 'a')
                    temp += 26;
                str[i] = temp;
            }
            else if (str[i] >= 'A' && str[i] <= 'Z')
            {
                temp = str[i] - 3;
                if (temp < 'A')
                    temp += 26;
                str[i] = temp;
            }
        }
}
int main()
{
    char str[100] = "PHHW PH DIWHU WKH WRJD SDUWB";
    cipher(str);
    printf("Msg: %s", str);
    return 0;
}
