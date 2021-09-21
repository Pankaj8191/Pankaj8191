#include <iostream>
#include <vector>
using namespace std;
void generateparanthesis(int o, int c, int n, string out)
{
    if(o==n && c==n)
    {
        cout << out << endl;
        return;
    }
    if(o<n)
        generateparanthesis(o+1, c, n, out + "(");
    if(o>c)
        generateparanthesis(o, c+1, n, out + ")");
}
int main()
{
    int n=3;
    generateparanthesis(0, 0, n, "");
    return 0;
}
