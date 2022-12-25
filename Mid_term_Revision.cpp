#include<iostream>
#include<string>
#include<iomanip>

using namespace std ;


int main(){
	
// boolean

bool boolValue = -10 ; // 1
cout<<boolValue<<endl;	
	
boolValue = 0 ; // 0
cout<<boolValue<<endl;	

// type casting types	
char ch = 'c';
// ch = 99
cout<< "ch = "<<(int)ch<<endl; // prestandard c-style
cout<< "ch = "<<int(ch)<<endl;	// prestandard c++ style
cout<< "ch = "<<static_cast<int>(ch)<<endl;	// c-style
	
//Multiple assignment values

int x , y , z ;	// first declare all vars
x = y = z = 5 ; // second assign valuse
cout<<x<<endl;	
//int x = y = z = 10 ;	// wrong bcause you should assign first

// const

const int number1 = 10 ; // must define in same line
//number1 = 1 ; // cannot change
//cin>>number1; // cannot change
	
// input from user types

string name1 , name2 ;
char c ;

// string input
//cout<<"NAME : ";
//cin>>name1; // takes one word without spaces and tabs
//cout<<"Name1 = "<<name1<<endl;
//
//cout<<"NAME : "<<endl;	
//getline(cin, name2); // takes any sentence with tabs or whitespaces
//cout<<"Name2 = "<<name2<<endl;

// char input
//cout<<"Char : ";
//cin.get(c);
//cout<<"char1 = "<<name<<endl;
//
//cout<<"Char : ";
//cin>>c;
//cout<<"char2 = "<<name<<endl;	

//

//string str ;
//cin>>setw(5)>>str; // reads only first 5 chars
//cout<<str<<endl;

// WHILE LOOP EX
	
// star prymaid

int line ;
  
cin>>line;
int i = line ; // line = 5 , i = 5, j = 5 , k = 5
int star = 1 ;
while(i >= 1 && star <= line) // line number printing 
{   int j = i ;
	while(j >= 1)
	{
	    cout<<" "; 
		j--; // second loop
	}
	int k = 1 ;
	while(k <= (2*star) - 1)
	{
	    cout<<"*";
		k++;	// third loop
	}
	cout<<endl;
	i--; // first while loop
	star++;
}

//PRint 

//int j = 0 , n = 5 ;
//while(j < n)
//{
//	cout<<(j)<<endl;
//	j++;
//}

//MAX

//int num , max = 0;
//int k = 1 ;
//
//while(k <= 3)
//{
//	cout<<"NUM  : ";
//	cin>>num;
//	if(num > max)
//{
//	  max = num ;
//}
//	  k++;
//}
//cout<<"MAX  = "<<max<<endl;


// power

//double base , power , result = 1 ;
//
//int m = 1 ;
//
//cin>>base>>power;
//
//while(power >= 1)
//{
//result *= base ;
//power--;
//}
//cout<<result<<endl;

// fact 

//int num , fact = 1 ;
//
//cin>>num;
//while(num>=1)
//{
//	fact *= num;
//	num--;
//}
//cout<<fact<<endl;







	
	
	return 10 ;
}
