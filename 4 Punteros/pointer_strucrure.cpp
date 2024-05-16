/* This program demonstrates a function that uses a pointer 
to a structure variable as a parameter .

*/

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct Student{
    string name;
    int idNum;
    int creditHours;
    double gpa;
};

void getData(Student *);

int main(){

    Student freshman;

    cout<<"Enter the following student data \n";
    getData(&freshman);
    cout<<"\n Here is the student data you entered " <<endl;

    //Now display the data stores in freshman
    cout<<setprecision(3);
    cout<<"Name: "<<freshman.name<<endl;
    cout<<"ID Number: "<<freshman.idNum<<endl;
    cout<<"Credit Hours: "<<freshman.creditHours<<endl;
    cout<<"GPA: "<<freshman.gpa<<endl;
    return 0;
}


///////////////////////////////////////////////////////////////////////////
/* definition of the function 
*/
void getData(Student *s){
    cout<<"Please enter your Name : "<<endl;
    getline(cin,s->name);

    cout<<"Please enter your ID number  : "<<endl;
    cin>>s->idNum;

    cout<<"Please enter your credit hours enrolled  : "<<endl;
    cin>>s->creditHours;

    cout<<"Please enter your GPA (decimal) : "<<endl;
    cin>>s->gpa;
}
