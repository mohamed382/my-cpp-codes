#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
#include<fstream>
using namespace std;



 

int main(){
	
 	
 
//Notes
//Do while

//int x = 1 ;	
//do
//{
//	cout<<"Hello world ;\n";
//	cout<<x<<endl;
//	x++;
//}
//while(x <= 5);
	
//for loop 

//float n ;
////int n ;
//cout<<"Enter Number : "	;
//cin>>n;
//
//float i = 0 ;
//for(;i <= n;i += 0.1)
//{
//	cout<<"\t"<<(i)<<endl;
////	i += 0.1;
//	
//}
		
//Sheet #3

//Q.4

//int n ;
//cout<<"Enter a Number : ";
//cin>>n;
//
//for(int j = 0; j<=n;j++)
//{
//cout<<"Number #"<<(j+1)<<" ==> "<<(j)<<endl;	
//}		
 		

//Q.5


//int num ; // number of subjects 
//float mark , sum = 0 , avg = 0; 
//	
//cout<<"Enter number of Subjects : ";
//cin>>num;
//
//int count = 1 ;
//while(count <= num)
//{
//cout<<"Enter Mark #"<<count<<" : ";
//cin>>mark;	
//sum += mark ;		
//count++;	// increment count
////++count;
//}	
//cout<<setprecision(3)<<fixed; // 3 digits after decimil point 
//	
//cout<<"SUM =  "<<sum<<endl;	
//
//avg = sum / num ;	
//
//cout<<"Average =  "<<avg<<endl;		
	
	
//Q.6	
//Problem#1

//float base , power , result = 1 ; // base is number multi
//
//cout<<"Enter Base : ";	
//cin>>base;	
//	
//
//cout<<"Enter Power : ";	
//cin>>power;	
//
//
//if(power >= 0)
//{
//	
//while(power > 0)
//{
//result *= base ; // result = result	* base
//power--;
//}
//cout<<"Result = "<<result<<endl;	
//	
//}	
// 	
//
//else if(power < 0 )
//{
//	
//power = -power ; // (power * -1) to make pos and use same algo with while
////power = abs(power);
//
//while(power > 0)
//{
//result *= base ; // result = result	* base
//power--;
//}
//cout<<"Result = "<<(1 / result)<<endl;	
//	
//} 	
// 
//cout<<"Power = "<<power<<endl;	 // to know value of power after operation
//cout<<"Result = "<<result<<endl;	
 	
 	
 	
 	
//Q.7
//Prime	 

//int num , count = 0;
//cout<<"Num : ";
//cin>>num;
//
//for(int i = 1; i <= num;i++)
//{
//	
//if(num % i == 0)
//
//   count++;
//
//	
//}
//	
//if(count == 2 )	
//{
//	cout<<"Prime \n";
//}
//else
//	cout<<"Not Prime \n";


//Q.8		
//Calculator
 	
	
//float x , y;
//char op ;
//
//cout<<"Enter first number : ";
//cin>>x;
//
//cout<<"Enter operator : ";
//cin>>op;
//
//cout<<"Enter second number : ";
//cin>>y;
//
// cout<<setprecision(3)<<fixed;	
// 
//switch(op)
//{
//	case '+' :
//	cout<<"SUM = "<<(x+y)<<endl;
//	break;
//	
//	case '-' :
//	cout<<"Supstraction = "<<(x-y)<<endl;
//	break;
//	
//		case '*' :
//	cout<<"Multipaction = "<<(x*y)<<endl;
//	break;
//	
//		case '/' :
//		while(y == 0)
//		{
//			cout<<"Enter any Number else but Not ZERO : ";
//			cin>>y;
//		}
//	cout<<"Division = "<<(x/y)<<endl;
//	break;	
//	
//	default :
//	cout<<"Please Enter only (+ , - , * , /) : "<<endl;
// 	
//}

//Q.9
//Print stars for n lines

//int n;
//cout<<"Enter Number of Lines : ";
//cin>>n;
//
//
//for(int line = 1; line<=n;line++)
//{
//	for(int star = 1;star<=line;star++)
//	{
//		cout<<"* ";
//	}
//	
//	cout<<"\n";
//	
//	
// } 
	

//---------------------------------------------------------------------------------

//Sheet #4

//Q.1
//print numbers for n lines

//int n;
//cout<<"Enter Number of Lines : ";
//cin>>n;
//
//
//for(int line = n; line>=1;line--)
//{
//	for(int star = line;star>=1;star--)
//	{
//		cout<<(line)<<" ";
//	}
//	
//	cout<<"\n";
//	
//	
// }  	
	

//Q.2
//Reffering to Q.8 in sheet#3		
//Calculator
 	
	
//float x , y;
//char op ;
//int count = 1;
//
//while(count != 0)
//{
//	
//cout<<"Enter first number : ";
//cin>>x;
//
//cout<<"Enter operator : ";
//cin>>op;
//
//cout<<"Enter second number : ";
//cin>>y;
//
//// Modifying Output  
//cout<<setprecision(3)<<fixed;	
// 
//switch(op)
//{
//	case '+' :
//	cout<<"SUM = "<<(x+y)<<endl;
//	break;
//	
//	case '-' :
//	cout<<"Supstraction = "<<(x-y)<<endl;
//	break;
//	
//		case '*' :
//	cout<<"Multipaction = "<<(x*y)<<endl;
//	break;
//	
//		case '/' :
//		while(y == 0)
//		{
//			cout<<"Enter any Number else but Not ZERO : ";
//			cin>>y;
//		}
//	cout<<"Division = "<<(x/y)<<endl;
//	break;	
//	
//	default :
//	cout<<"Please Enter only (+ , - , * , /) : "<<endl;
//	break;
//	
//  }
//  //End switch
//  
//char ch ;
//cout<<"DO YOU WANT ANOTHER OPERATION (Y/N) : ";
//cin>>ch;
//
//count = 0;
//if(ch == 'y')
//{
//count = 1;	
//}	
////End while
//}
 	

//Q.3	
//Max number

// for loop Solution

//float max = 0 , n , num;
//cout<<"Enter n : ";
//cin>>n;
// 
//for(int i = 1; i<=n;i++)
//{
//cout<<"Enter Number "<<(i)<<" : ";
//cin>>num;
//
//if(num > max) 
//   max = num ;
//	
//}	
//
//	
//cout<<"MAX = "<<max;	


//Q.4
//a program to find the count and sum of all integer between 100 and 500
	
//int count = 0 , sum = 0 ;
////
////int count , sum  ;
////sum = count = 0 ;
//
//for(int i = 100; i <= 500;i++)
//{
//  if(i % 7 == 0)
//	{
//		sum += i;
//		count++;
//	}
//	
//}	
//
//cout<<"COUNT = "<<count<<endl;	
//cout<<"SUM = "<<sum<<endl;	


//Q.5
//Factorial

//int num , fact = 1 ;
//cout<<"Enter Number : ";
//cin>>num;
//
//if(num >= 0)
//{
//
//for(int i = num; i >= 1;i--)
//{
//	fact *= i ;
//	
//}	
//	
//cout<<"FACT = "<<fact<<endl;
//	
//}
//
//else 
//cout<<"Enter Positive Numbers Only ";


//Q.6

/*
enter n numbers and then should display
the count of entered positive, negative and zeros numbers.
*/

//int n , pos , neg , zero ;
//float num ;
//pos = neg = zero = 0 ;
//cout<<"Enter n : ";
//cin>>n;
//
//for(int j = 1;j <= n; j++)
//{
//cout<<"Enter Num # "<<(j)<<" : ";
//cin>>num;
//	
//if(num > 0)
//	{
//		pos++;
//	}
//else if(num < 0)
//	{
//		neg++;
//	}
//	
//else if(num == 0)
//	{
//		zero++;
//	}
//	
////end for
//}
//
//cout<<"POSITIVE NUMBERS COUNT = "<<pos<<endl;
//cout<<"NEGATIVE NUMBERS COUNT = "<<neg<<endl;
//cout<<"ZERO NUMBERS COUNT = "<<zero<<endl;






//FILE STREAM C++

string name;
ofstream myfile ;
myfile.open("example.txt");
myfile<<"Hello World ! "<<endl;
myfile<<"Hello mohamed ! "<<endl;
myfile<<"Hello yousef ! "<<endl;
myfile>>name;
myfile<<name<<endl;

//ofstream data ;
//data.open("File.xlsx");

//data.open("File.bin" , ios::out | ios::app | ios::binary);
//data.close();

//data.delete();

//myfile.open("Excel.xlsx");
//myfile.open("example.xlsx");


//string name , line ;
//name = "ALLAH";
//myfile<<name;
//
//while ( getline (myfile,line) )
//{
//	if(getline(myfile,line) == name)
//	{
//		cout<<name;
//	}
//}
//
//myfile.close();



//  string line ;
//  ifstream myfile;
//  if (myfile.is_open())
//  {
//    while ( getline (myfile,line) )
//    {
//      cout << line << '\n';
//    }
//    myfile.close();
//  }
//
//  else cout << "Unable to open file";








	return 1 ;
}



