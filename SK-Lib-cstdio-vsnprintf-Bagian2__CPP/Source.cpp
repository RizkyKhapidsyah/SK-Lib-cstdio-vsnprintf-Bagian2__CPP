#pragma warning(disable:4996)

#include <cstdio>
#include <cstdarg>
#include <conio.h>

/*
    Source by Programiz
    Modified For Learn by RK
    I.D.E : VS2022
*/

void write(char* buf, int buf_size, const char* fmt, ...) {
    va_list args;
    va_start(args, fmt);
    vsnprintf(buf, buf_size, fmt, args);
    va_end(args);
}

int main() {
    char buffer[100];
    char fname[20] = "Bjarne";
    char lname[20] = "Stroustrup";
    char lang[5] = "C++";

    write(buffer, 27, "%s was created by %s %s\n", lang, fname, lname);
    printf("%s", buffer);

    _getch();
    return 0;
}