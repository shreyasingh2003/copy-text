#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    cout << "start programme" << endl;
    ifstream sh;
    ofstream sh1;
    char ch;
    sh.open("C:\\Users\\hp\\Documents\\file1.txt");
    if (!sh)
    {
        cerr<<"error in opening"<<endl;
        exit(100);
    }
    sh1.open("C:\\Users\\hp\\Documents\\file2.txt");
    if (!sh1)
    {
        cerr<<"error in opening"<<endl;
        exit(101);
    }
    cout<<"write text";

   while(sh.get(ch))
    if(ch!=' ' && ch!='\t'  && ch!='\n')
         sh1.put(ch);


         sh1.close();
        sh.close();
    if(!sh.fail()){
        cerr<<"error in closing"<<endl;
        exit(101);
    }
cout<<"end";
    return 0;
}

  
