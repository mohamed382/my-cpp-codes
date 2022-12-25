#include<iostream>
#include<string>
#include<fstream>

using namespace std ;



//STRUCT
struct contact
{
	string first_name;
	string last_name;
	string ID ;
	string phone_num;
	
};
int main()
{
	const int size = 10 ;
	contact data[size]; // struct arr
	for(int i = 0; i < size;i++)
	{
//		cout<<"Enter your first name  : ";
//		getline(cin,data[i].first_name);
//		cout<<data[i].first_name<<"\n";
	}
	
	
	
	
ifstream file;
file.open("sample.txt");
if(!file.is_open())
{
cout<<"Unable to open the file."<<endl;
return 0; // break;
}
 
string line;
int num = 0; 
while(getline(file, line))
{
//cout<<line<<endl;

//line = data[num].first_name;
}
 line = data[num].first_name;

    file.close();
	
	for(int i = 0; i < size;i++)
	{
		cout<<data[i].first_name<<"\n";
	}	
	
	
	
	
	
	
	
	
	return 0 ;
}
