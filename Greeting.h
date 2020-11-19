#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Greeting
{
    vector<string> names;
    Greeting(){
        // TODO: Add your name to the vector in addition to
        // all of the other name(s) that are here.
    };

    
    void greet()
    {
        for (string& name : names)
        {
            cout << "Hello, " << name << "!" << endl;
        }
    }
};