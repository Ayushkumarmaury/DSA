#include <iostream>
#include <fstream>
using namespace std;

int main()
{
      // // connecting our file with write stream 

      // ofstream write("ay.txt");
      // cout << "enter your name : " << endl;
      // // creating a name string and filling it with the string entered by the user
      // string name;
      // cin >> name;
      // // writting string to the file 
      // write << "My name is " + name << endl;
      // write.close();


      ifstream read("ay.txt");
      string content;
      read >> content;
      cout <<"the content of this file is : "<<content ;
      getline(read, content);
      cout<<content<<endl;
      read.close();

      return 0;

      
}