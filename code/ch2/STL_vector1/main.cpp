// vector的使用

#include <iostream>
#include <vector>
#include <string>

int main(int argc, char *argv[])
{
    using namespace std;

    vector<double> scores;
    double temp;

    while (cin >> temp && temp >= 0)
    {
        scores.push_back(temp);
    }

    cout << "You Enter Size: " << scores.size() << ".\n";

    return 0;
}