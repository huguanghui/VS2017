// string类的输入

#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    using namespace std;
/*
    // C-风格的输入方式
    char info[100];
    cin >> info;   // 读取一个字符串
    cout << info << " ==" << endl;
    
    cin.getline(info, 100); // 读取一行 丢掉\n
    cout << info << "===" << endl;

    cin.get(info, 100);   // 读取一行 保留\n
    cout << info << "====" << endl;
*/
/*
    // string对象
    string stuff;
    cin >> stuff;
    cout << stuff << endl;
    // getline(cin, stuff);
    // cout << stuff << endl;
*/

    cout << "MaxSize:" << string::npos << endl;

    return 0;
}