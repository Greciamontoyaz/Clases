// arrfun1.cpp -- functions with an array argument
#include <iostream>
#include <cstring>
using namespace std;

string  concat_string( string a,  string b); // prototype

int main()
{

string a,b,c;

a ="Hello";
b= "World!";

c= concat_string(a, b);
cout<<c;

return 0;
}
// return the concat. of an integer array
string concat_string( string a,  string b) // 
{
return a + " " + b; //
}