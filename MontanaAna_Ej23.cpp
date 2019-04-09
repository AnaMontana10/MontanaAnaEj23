#include<iostream>
#include <fstream>

using namespace std;

void leer(string filename);


int main(){


string filename="valores_x.txt";
string filename2= "valores_y.txt";
leer(filename);
leer(filename2);
    



    return 0; 
}




void leer(string filename){
    ifstream infile; 
    string line;
    int i=0;
    float suma= 0;
    infile.open(filename); 
    while(infile){
      getline(infile, line);
      i= i+1;
      suma = suma + atof(line.c_str());
  }
    cout<<"la suma es "<<suma<<endl;
 
    
}