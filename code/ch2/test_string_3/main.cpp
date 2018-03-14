// string类的使用
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    using namespace std;

    string snake1("cobra");
    string snake2("coral");
    char snake3[20] = "anancoda";

    cout << "size[snake1]: " << snake1.size() << endl;

    cout << "length[snake1]: " << snake1.length() << endl;

    if (snake1 <= snake2)
    {
        cout << "test1" << endl;
    }

    if (snake1 == snake3)
    {
        cout << "test2" << endl;
    }
    else 
    {
        cout << "test2_aa" << endl;
    }

    if (snake1 != snake3)
    {
        cout << "test3" << endl;
    }

    return 0;
}