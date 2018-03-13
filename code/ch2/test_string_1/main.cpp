//
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    using namespace std;
    string one("Lottery Winner!");  // ctor #1
    cout << one << endl;

    string two(20, '$');    // ctor #2
    cout << two << endl;

    string three(one);      // ctor #3
    cout << three << endl;

    one += "Oops!";    // 重载+=
    cout << one << endl;

    three[0] = 'P';
    cout << three << endl;

    string four;           // ctor #4
    four = two + three; // 重载 = +
    cout << four << endl;

    char alls[] = "All's well that ends well";
    string five(alls, 20);     // ctor #5
    cout << five << "!\n";

    string six(alls + 6, alls + 10);  // ctor #6
    cout << six << ", \n";

    string seven(&five[6], &five[10]);   // actor #6
    cout << seven << "...\n";

    string eight(four, 7, 16);
    cout << eight << " in motion!" << endl;

    return 0;
}