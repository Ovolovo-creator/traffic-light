#include <stdio.h>
#include <windows.h>

int main()
{
    while (1)
    {
        printf("RED - Stop (30 secs)\n");
        Sleep(30000);
        printf("GREEN - Go (45 secs)\n");
        Sleep(45000);
        printf("YELLOW - Caution (5 secs)\n");
        Sleep(5000);
    }
    return 0;
}