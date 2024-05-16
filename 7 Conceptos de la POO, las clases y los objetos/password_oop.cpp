#include <iostream>
#include <string>
using namespace std;

/*vamos a hacer un programa para
poner una constraseña,la contraseña
tiene que tener un minimo 8 caract.
una mayuscula, una min., un número
y un caracter especial
*/
class Password
{
private:
  string password;
  bool hasUpper=false;
  bool hasLower=false;
  bool hasDigit=false;
  bool hasPunct=false;
  bool lengthCorrect=false;
  bool valid=false;
  
public:
  Password(string password){
    this->password = password;
    this->valid = valid_password();
  }
  bool valid_password()  {
    lengthCorrect = (password.length() > 8);
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
  return lengthCorrect && hasUpper && 
         hasLower      && hasDigit &&
                        hasPunct;
  }

    
};

int main() {

  Password Password("Password123!");
  cout<<Password.valid_password()<<endl;
  return 0;
}