#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

class Printer {
    string name;
    int availablePaper;

    public:
    Printer(string name,int availablePaper){
        this->name =name;
        this->availablePaper=availablePaper;
    }
    int Count(string txtDoc){
          // Replace "your_file.txt" with the actual file path
        fstream dataFile;
        dataFile.open(txtDoc, ios::in);
        if (dataFile.is_open()) {
            int charCount = 0;
            char ch;

            while (dataFile.get(ch)) {
                charCount++;

            }
            return ceil(charCount);

            dataFile.close();
            cout << "The number of characters in the file: " << charCount << endl;
        } else {
            cerr << "Error opening file!" <<endl;
            return 0;
        }
    }

    void Show(string txtDoc){
        fstream dataFile;
        dataFile.open(txtDoc, ios::in);
        if (dataFile.is_open()) {
            char ch;

            while (dataFile.get(ch)) {
                cout<<ch;
            }
            dataFile.close();
        } else {
            cerr << "Error opening file!" <<endl;

        }
    }
    void Print(string txtDoc) {
        int required_paper = ceil(Count(txtDoc) / 100);
        if (required_paper > availablePaper)
            throw "No paper"; /////palabra clave

        cout << "Printing... " << endl;
        Show(txtDoc);
        cout<<endl;
        this->availablePaper -= required_paper;
        cout << "Now you have available " << availablePaper
             <<" pages"<<endl;
    }



};

int main() {

    string nameFile="text_to_print.txt";
    Printer printer("NNXX112",20);
    int number_char=printer.Count(nameFile);
    cout <<"The number of char needed: "<< number_char<<endl;
    try {
        for(int i=0; i<10;i++)
        printer.Print(nameFile);
    }
    catch(const char * txtException){
        cout<<"Exception: "<<txtException<<endl;
    }
    return 0;
}
