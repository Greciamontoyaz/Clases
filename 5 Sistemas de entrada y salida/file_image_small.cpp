#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream image;
    image.open("image.ppm");

    if(image.is_open()) {
        image<<"P3"<<endl;
        image <<"3 2"<<endl;
        image <<"255"<<endl;

        image<<"255 0 0" <<endl;
        image<<"0 255 0" <<endl;
        image<<"0 0 255" <<endl;
        image<<"255 255 0" <<endl;
        image<<"255 255 255" <<endl;
        image<<"0 0 0" <<endl;

        image.close();
    
}
return 0;
}