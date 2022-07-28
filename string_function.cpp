//functions in string
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1="fam", s2="ily";
	
	//APPEND FUNCTION
	s1.append(s2);        //first function
	cout<<"first function: "<<s1<<endl;
	
	//append without append function
	s1="fam";
	s1=s1+s2;
	cout<<"append without fun: "<<s1<<endl;
	
	//we can also add strings without append function
	s1="fam";
	cout<<"add without append fun: "<<s1+s2<<endl;
	
	//IF WE WANT TO PRINT A PARTICULAR CHARACTER OF A STRING
	cout<<"first char of a string: "<<s1[1]<<endl;
	
	//CLEAR STRING
	string abc="sdfgh";
	abc.clear();
	cout<<"output after clear string: "<<abc<<endl;
	
	//COMPARE FUNCTION
	//if strings are same
	string str1="saroj", str2="saroj";
	cout<<str2.compare(str1)<<endl;
	
	//if strins are different
	string str3="sarojthory",str4="DFGH";
	cout<<str4.compare(str3)<<endl;
	
	//EMPTY FUNCTION
	str4.clear();
	if(str4.empty())
	cout<<"string is empty"<<endl;
	
	//DELETE AN ITEM OR GROUP OF ITEMS (ERASE())
	string str5="sdfgsdfgdfg", str6="ertr";
	str5.erase(3,4);
	str6.erase(2,4);
	cout<<"str4 after erase: "<<str5<<endl;
	cout<<"str5 after erase: "<<str6<<endl;
	
	//CHECK FOR SUBSTRING (FIND())
	string str7="sdkjhgfdiu", str8="gf";
	cout<<"Sub-string exist or not: "<<str7.find("dk")<<endl;
	cout<<"Sub-string exist or not: "<<str8.find("gfk")<<endl;
	cout<<"Sub-string exist or not: "<<str7.find(str8)<<endl;
	cout<<"Sub-string exist or not: "<<str8.find(str8)<<endl;
	
	//IF WE PUT ANOTHER STRING IN A STRING (INSERT())
	string str9="sertyujikj", str10="mfd";
	str9.insert(2,/*position*/"lol");
	cout<<"str9 is: "<<str9<<endl;
	str9.insert(4,str10);
	cout<<"str9 is: "<<str9<<endl;
	str9="sertyujikj", str10="mfd";
/*	str10.insert(4,str9);
	cout<<"str10 is: "<<str9<<endl;    //does not work
*/
	
	//TO CHECK THE SIZE (LENGT())
	int s=str10.length();
	cout<<"str10 size is: "<<s<<endl;
	
	//GET SUBSTRING OF A STRING (SUBSTR())
	string S=str9.substr(6,4);
	cout<<"substing is: "<<S<<endl;
	
}
