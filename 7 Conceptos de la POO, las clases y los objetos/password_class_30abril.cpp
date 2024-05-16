#include <iostream>
#include <string>
using namespace std;

/*vamos a hacer un programa para
poner una constraseña,la contraseña
tiene que tener un minimo 8 caract.
una mayuscula, una min., un número
y un caracter especial
*/


int main() {

  string password = "Hello_1123";
  ///////////////////////////////
  bool lengthCorrect = false ;
  lengthCorrect = (password.length() > 8);
  cout <<"Correct Lenght" << lengthCorrect <<endl;
  ///////////////////////////////
  bool hasUpper = false;
  bool hasLower = false;
  bool hasDigit = false;
  bool hasPunct = false;
  bool validPassword=false;
  for (char c : password){
    if(isupper(c)){
      hasUpper=true;
    }
    if(islower(c)){
      hasLower=true;
    }
    if(isdigit(c)){
      hasDigit=true;
    }
    if(ispunct(c)){
      hasPunct=true;
    }
  }
  cout<<"Does have an Uppercase"   <<hasUpper<<endl;
  cout<<"Does have an Lowercase"   <<hasLower<<endl;
  cout<<"Does have a digit(#)"     <<hasDigit<<endl;
  cout<<"Does have a special char."<<hasPunct<<endl;

  if  (lengthCorrect && hasUpper && 
       hasLower      && hasDigit &&
                        hasPunct){
    validPassword=true;
    cout<<"The password is valid." <<endl;}
  
  return 0;
}
