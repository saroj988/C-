// different types of ways to declare a string
#include<iostream>
using namespace std;
#include<string>
int main()
{
	string s1;     // first way
	cout<<"enter a string: ";
	cin>>s1;
	cout<<"first way: "<<s1<<endl;
	
	string s21="asdfgh";     // second way
	cout<<"second way1: "<<s21<<endl;
	
	string s22="asdfgh sdfg sdfg";     
	cout<<"second way2: "<<s22<<endl;
	
/*	string s2='asdfgh';         this will not work and shows an error
	cout<<s2<<endl;
*/
    string s3(5,'n');     // third way
	cout<<"third way: "<<s3<<endl;   // print 5 times n
	
	string s4;
	cout<<"enter string which contain spaces: ";
	cin>>s4;
	cout<<s4<<endl;
	
	// if we want to spaces in input
  string s5;
   cout << "enter s5: ";
  getline (cin,s5); 
  getline (cin,s5);
  cout << "fourth way: " << s5 <<endl;
  	
}
