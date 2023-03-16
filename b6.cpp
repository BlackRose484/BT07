#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
    cout << "Number of commnad-line arguments: " << argc << endl;
    for (int i = 0; i < argc; i++)
    {
        cout << "Argument #" << i << ": _" << argv[i] << "_\n";
    }
    system("pause");
}