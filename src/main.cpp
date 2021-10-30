#include "main.h"

using namespace std;

string random_string()
{
    auto randchar = []() -> char
    {
        const char charset[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
        const size_t max_index = (sizeof(charset) - 1);
        return charset[ rand() % max_index ];
    };
    string str(20,0);
    generate_n( str.begin(), 20, randchar );
    return str;
}

// Main function
int main()
{
    return EXIT_SUCCESS;
}