#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include "menu.h"

void Quit(int argc, char *argv[])
{
    exit(0);
}

void Version(int argc, char *argv[])
{
    printf("version v7.0\n");
}

void Time (int argc,char *argv[])
{
    time_t sec  = time(NULL);
    struct tm t = *localtime(&sec);
    printf("%02d:%02d:%02d:  \n", t.tm_hour, t.tm_min, t.tm_sec);
}

int main(int argc,char* argv[])
{
    MenuConfig("version","This is the version command ",NULL);
    MenuConfig("quit","Bye",Quit);
    MenuConfig("time","Show the current time",Time);
    ExecuteMenu();
}
