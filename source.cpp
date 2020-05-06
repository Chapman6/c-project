#include<iostream>
#include<fstream>
#include<string>

using namespace std;

//I want to make a file class. -TH
//it will include easyFileName, fileName as members of objects in an object array

//string test;
ifstream studentData;
studentData.open("studentData.txt", ios::app);
studentData >> test;
cout << test;
int main()
{


    return 0;
}