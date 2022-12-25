#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std ;


int main()
{
	
//	Q.1 (miles per gallon)
	
//float gallons_of_gas = 0 , num_of_miles = 0 , gas_mileage = 0 ;
//
//cout<<"Enter Number of Gallons of Gas The car can hold on Full tank : ";
//cin>>gallons_of_gas;	
//	
//	
//cout<<"\nEnter Number of Miles The car can Go on Full tank :  ";
//cin>>num_of_miles;
//	
//gas_mileage = num_of_miles / gallons_of_gas ;
//cout<<"\nGas mileage = "<<gas_mileage <<" miles\\gallon ";
//	
	
	
	
	
	
	
//	Q.2

////a ==> (num) class A seats ,  b && c (same as A )
//int a , b , c ;
//const int costA = 15 , costB = 12 , costC = 9 ;
//double total_sales ;
//
//cout <<"Enter how many class (A) seats were sold : ";
//cin>>a;
//
//cout <<"\nEnter how many class (B) seats were sold : ";
//cin>>b;
//
//cout <<"\nEnter how many class (C) seats were sold : ";
//cin>>c;
//
//
//total_sales = (a * costA) + (b * costB) + (c * costC) ;
//cout<<left<<setprecision(2)<<fixed<<showpoint;
//cout<<"\nIncome Generted = "<<total_sales<<" $$ ";




//Q.3








	
//Q.17	
	
float num1 , num2 ;

srand(time(0));

num1 = (rand() % 1000) + 1;
num2 = (rand() % 1000) + 1;

cout<<left;
cout<<setw(6)<<num1<<endl;
cout<<"+ "<<endl;
cout<<setw(6)<<num2<<endl;	
cout<<"________ "<<endl;

system("pause")	;

cout<<"\nSum = "<< num1 + num2 ;
	
	
	
	
	
	
	
	
	return 10 ;
}








