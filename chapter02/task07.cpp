#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
        v.push_back(i);
    for (int i = v.size(); i >= 0; i--)
        cout << v[i] << ".";
    cout << endl;
    cout << "Press enter to continue";
    cin.get();
    for (int i = 0; i < 10; i++)
        v[i] *= 10;
    for (int i = v.size(); i >= 0; i--)
        cout << v[i] << "|";
}