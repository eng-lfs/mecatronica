#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <string>
#include <iostream>


using namespace std;                            //simplify c++ print


void ClearFile(const string fileName);                              //clean file function
void WriteFile(const string text, const string fileName);           //write file function
void ReadFileC(const char* fileName);                               //read file function in C language
void ReadFileCpp(const char* fileName);                             //read file function in C++ language

int main(){
    //call functions for test
    //ClearFile("log.txt");
    //WriteFile("Hello World!", "log.txt");
    //ReadFileC("log.txt");
    ReadFileCpp("log.txt");
    return 0;
}

void ClearFile(const string fileName){
    ofstream File;                               //creating file object
    File.open(fileName);                         //open file
    File << "";                                  //print nothing in the file
    File.close();                                //close file
}

void WriteFile(const string text, const string fileName){
    ofstream File;                                //creating file object
    File.open(fileName, std::ios_base::app);      //open file
    File << text;                                 //edit file
    //cout << text << endl;
    File << "\n";                                 //new line
    File.close();                                 //close file
}

void ReadFileC(const char* fileName){
    int c;                                      //local char
    FILE *file;                                 //create file type object
    file = fopen(fileName, "r");               //open file in read mode
    if(file){                                   //there's a file
        while((c = getc(file)) != EOF){         //until actual char of the file isn't EOF(end of file)
            printf("%c", c);                    //print c like a char
            //_sleep(100);                        //delay 100 miliseconds
        }
        fclose(file);                           //close the file
    }
}

void ReadFileCpp(const char* fileName){
    ifstream input(fileName);                   //what file will be read
    string myText;                              //string to save the file content

    for(string line; getline(input, line);){    //used to brake lines in the file
        myText += line;                         //add line content to string
        myText += '\n';                         //add new line character
    }

    cout << myText;                             //print in the screen terminal
}
