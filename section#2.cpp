#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>

using namespace std;


int main()
{
 int a,x,z,k,y,h,b,c,g ;
 
// Q.1

//a = (12 * x) ;
//z = (5 * x)+ (14 * y )+ (6 * k) ;
//y = pow(x,4);
//g = (b + 12) / (4 * k);
//c = (pow(a,3)) / ( pow(b,2) * pow(k,4) ) ;
 
 
 
 
// system("pause");

const double YEN_PER_DOLLAR = 98.93 ;
const double EURO_PER_DOLLAR = 0.74 ;
      double dollar ;
      string currency ;
      
//label:
cout<<"choose Currency (Yen / Euro) : ";
cin>>currency;
//cout<<currency;
label:
//	
//cout<<"Enter Dollars : ";
//cin>>dollar;
//cout<<dollar;
 if(currency == "yen" || currency == "Yen")
 {
 	
    cout<<"Enter Dollars : ";
    cin>>dollar;
 	
 	dollar *= YEN_PER_DOLLAR ;
 	cout<<"You have = " << dollar << " Yens ";
 }
 
 else if(currency == "euro" || currency == "Euro" )
 {
 	
    cout<<"Enter Dollars : ";
    cin>>dollar;

 	dollar *= EURO_PER_DOLLAR ;
 	cout<<"You have = " << dollar << " Euros ";
 }
 
 else
 {
 	cout<<"choose Currency (Yen / Euro) : ";
    cin>>currency;
    goto label ;
    
 }
  
  
 
  
 
 
 
 
// float amount , rate , principal ;
// 
// amount = (principal) * (pow((1+(rate/2)),2));
 
 
 
 
 
 
 
 
 
 
 
 
 
 	
	return 1;
}
