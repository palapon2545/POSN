#include <iostream>
#include <string.h>
#include <stdio.h>

/*
 ___  ___  ________  ________  ________  ___    ___      ________  ___  ________  _________  ___  ___  ________  ________      ___    ___
|\  \|\  \|\   __  \|\   __  \|\   __  \|\  \  /  /|    |\   __  \|\  \|\   __  \|\___   ___\\  \|\  \|\   ___ \|\   __  \    |\  \  /  /|
\ \  \\\  \ \  \|\  \ \  \|\  \ \  \|\  \ \  \/  / /    \ \  \|\ /\ \  \ \  \|\  \|___ \  \_\ \  \\\  \ \  \_|\ \ \  \|\  \   \ \  \/  / /
 \ \   __  \ \   __  \ \   ____\ \   ____\ \    / /      \ \   __  \ \  \ \   _  _\   \ \  \ \ \   __  \ \  \ \\ \ \   __  \   \ \    / /
  \ \  \ \  \ \  \ \  \ \  \___|\ \  \___|\/  /  /        \ \  \|\  \ \  \ \  \\  \|   \ \  \ \ \  \ \  \ \  \_\\ \ \  \ \  \   \/  /  /
   \ \__\ \__\ \__\ \__\ \__\    \ \__\ __/  / /           \ \_______\ \__\ \__\\ _\    \ \__\ \ \__\ \__\ \_______\ \__\ \__\__/  / /
    \|__|\|__|\|__|\|__|\|__|     \|__||\___/ /             \|_______|\|__|\|__|\|__|    \|__|  \|__|\|__|\|_______|\|__|\|__|\___/ /
                                       \|___|/                                                                               \|___|/
*/

using namespace std;

int main()
{
    int count[12];
    int n; scanf("%d", &n);

    for (int i = 0; i < 12; i++) count[i] = 0;

    for (int i = 0; i < n; i++) {
        char id_xxx[5], date[12]; scanf("%s %s", id_xxx, date);

        int start = (date[1] == '/') ? 2 : 3; //  00'/'00/0000 or 0'/'00/0000
        if (date[start+1]=='/') {
            count[date[start] - '0' - 1]++;
            //cout << date[start] - '0' - 1 << "b" << endl;
        } else {
            count[10+date[start+1]-'0'-1]++;
            //cout << 10+date[start+1]-'0'-1 << "a" << endl;
        }
    }

    for (int i = 0; i < 12; i++)
        printf("%d %d\n", i+1, count[i]);
    return 0;
}
