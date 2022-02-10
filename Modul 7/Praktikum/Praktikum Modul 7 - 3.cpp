#include<iostream>
#include<string>

using namespace std;

int main()
{
    string string1, string2;

    cout<<" String pertama : ";
    getline(cin, string1);

    cout<<" String kedua : ";
    getline(cin, string2);

    if(string1 == string2)
        cout<<" Kedua string sama "<<endl;
    else
        if(string1 > string2)
            cout<<string1<<" > "<<string2<<endl;
        else
            cout<<string1<<" < "<<string2<<endl;

    return 0;
}
