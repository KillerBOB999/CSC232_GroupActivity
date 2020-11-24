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
        names.push_back("Anthony Harris");
        names.push_back("Nathan Obert");
        names.push_back("Dominic Zucchini");
        names.push_back("Vitor Freitas");
        names.push_back("Jaron Ritter");
        names.push_back("Hung Nguyen");
        names.push_back("Cole Kassing");
        names.push_back("David Harper");
        names.push_back("Kelly Christensen");

    };

    
    void greet()
    {
        for (string& name : names)
        {
            cout << "Hello, " << name << "!" << endl;
        }
    }
};
