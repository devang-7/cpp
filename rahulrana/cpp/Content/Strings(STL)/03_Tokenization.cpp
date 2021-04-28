# include <iostream>
# include <cstring>
using namespace std;

int main ()
{
    char s[100] = "Today, is a rainy, day";

    char *ptr = strtok(s, " "); // strtok(string, delimiter)
    cout << ptr << endl; //*ptr stores the address, ptr give out what is contained in that address
    // it keeps track of what things it has pointed at through a static array to mantain the state of string
    // if passed NULL instead of string, it points to the same string's elements divided by delimiter
    // this ptr = NULL if the string is empty.

    // to loop through all elements in an array without including the delimiter
    while (ptr != NULL) {
        ptr = strtok(NULL, " ");
        cout << ptr << endl;
    }

    return 0;
}

// we can also create this sort of a function ourselves. in 04_DesignTokeniser.cpp you can find it.