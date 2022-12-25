#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
#include<cstdlib>


using namespace std;

//Global Variables 
//float num1 , num2 ;


// Functions 
//Function Prototypes

void ascii(char ch);
double bow(double base , double power);
void quadratic(double , double , double );
void greet();
float max(float num);
float min(float num);
int factorial(int num);
void fibonacci(int n);
void goldenRatio(float a , float b); 
//Function Main
int main()
{
//Sheet#5

//Q.1
//char letter ;
//ascii(letter); 		

//Q.2
//double x , n ;
//
//cout<<"Enter X : ";	
//cin>>x;	
//	
//cout<<"Enter N : ";	
//cin>>n;	
//cout<<x<<" ^ "<<n<<" = "<<pow(x,n);

//cout<<x<<" ^ "<<n<<" = "<<bow(x,n); // my own power function 

//Q.3
//float a , b , c ;
//quadratic(a , b , c);

//Q.4
//greet();

//Q.5
//float x ;
//cout<<min(x)<<endl;
//cout<<max(x)<<endl;
//Q.6

//Q.7
//Factorial
//int n ;
//cout<<factorial(n)<<endl;
//Q.8
//int x ;
//fibonacci(x);

//Golden Ratio
float z , y ;
goldenRatio(z,y);
return 10;
}


// Functions 
//Function Definition

//Q.1
void ascii(char ch)
{

//limits of letters 
//a = 97 , z = 122 
//A = 65 , Z = 90
//97 - 65 = 32 ==> A
//65 + 32 = 97 ==> a	
cout<<"Enter a single Character : ";
cin>>ch;

cout<<"The AscII code of \""<<ch<<"\" is "<<(int)ch<<endl;


   if((int)ch >= 97 && (int)ch <=122)
	{
		cout<<ch<<" is a Small Alphabetical Letter \n";
		ch = ((int)ch - 32) ;
		cout<<"The Capital Alphabetical Letter is \""<<ch<<"\"\n";
	}
	
	else if((int)ch >= 65 && (int)ch <=90)
	{
		cout<<ch<<" is a Captial Alphabetical Letter \n";
		ch = ((int)ch + 32) ;
		cout<<"The Small Alphabetical Letter is \""<<ch<<"\"\n";

	}
	
	else
		cout<<ch<<" is not an Alphabetical Letter \n";
	 
			
}


//Q.2
double bow(double base , double power)
{


double result = 1 ; // base is number multiplication

//cout<<"Enter X : ";	
//cin>>base;	
//	
//cout<<"Enter N : ";	
//cin>>power;	

if(power >= 0 && (power - (int)power == 0) )
{
	
while(power > 0)
{
result *= base ; // result = result* base
power--;
}
//cout<<"Result = "<<result<<endl;	
return (result) ;	
//cout<<base<<" ^ "<<power<<" = "<<(result);
	
}	
 	

else if(power < 0 )
{
	
power = -power ; // (power * -1) to make pos and use same algo with while
while(power > 0)
{
result *= base ; // result = result	* base
power--;
}
//cout<<"Result = "<<(1 / result)<<endl;	
return (1 / result) ;	
//cout<<base<<" ^ "<<power<<" = "<<(1/result);
} 	

//power of (n + 0.5) to base 2 (only) , n is integer

//else if (power - (int)power == 0.5)
//{
//power += 0.5 ;
//while(power > 0)
//{
//result *= base ; // result = result	* base
//power--;
//}
//
//return (result / (1.414213));	
//}
 
 //Better version
 //positive (+ve) power of any fraction to any base  

 else if (power - (int)power != 0.00 && power > 0)
{
double flag ;	
flag = (1 - power) ;
power += (1 - power) ;
while(power > 0)
{
result *= base ; // result = result	* base
power--;
}
//power = flag ;
return (result / pow(base,flag) );	
}
 
 
 //still trying to figure it out
 //negative (-neg) power of any fraction to any base  

// else if (power - (int)power != 0.00 && power < 0)
//{
//double flag ;	
//flag = (1 - power) ;
//power += (1 - power) ;
//while(power > 0)
//{
//result *= base ; // result = result	* base
//power--;
//}
////power = flag ;
//return ( result / pow(base,flag) );	
//}


//End of function
}

 
 
//Q.3 

void quadratic(double a , double b , double c)
{
	
double square;
cout<<"Enter a , b , c : ";
cin>>a>>b>>c;
square = (b*b) - (4 * (a*c)); 

//checking on square
//cout<<square<<endl;
//real numbers
if(square > 0)
{
cout<<"X1 = "<<( (-b + pow(square,0.5)) / (2*a) )<<endl;	//x1
cout<<"X2 = "<<( (-b - pow(square,0.5)) / (2*a) )<<endl;	//x2
	
}
//real numbers
else if(square == 0.00)
{
cout<<"X1 = X2 = "<<(-b / (2*a))<<endl;	
}
//imaginary numbers
// 1 + i , 1 - i
if(square < 0)
{
	// Better looking
if(pow(-square,0.5) / (2*a) == 1)
{	
cout<<"X1 = "<<( -b / (2*a) )<<" + "<<"i"<<endl;	//x1
cout<<"X2 = "<<( -b / (2*a) )<<" - "<<"i"<<endl;	//x2
}
else
{
cout<<"X1 = "<<( -b / (2*a) )<<" + "<<( pow(-square,0.5) / (2*a) )<<"i"<<endl;	//x1
cout<<"X2 = "<<( -b / (2*a) )<<" - "<<( pow(-square,0.5) / (2*a) )<<"i"<<endl;	//x2	
}


}



//End of Function
}
 

//Q.4
void greet(){
	
	cout<<"Hello world !";
	
}

//Q.5
//Max Func
float max(float num)
{

float max = 0;
 
 
for(int i = 1; i<=3;i++)
{
cout<<"Enter Number "<<(i)<<" : ";
cin>>num;

if(num > max) 
   max = num ;	
}	

return max;
 
//cout<<"MAX = "<<max;	
 
//End Function
}
//Min Func
float min(float num)
{

float min = 0;
 
 
for(int i = 1; i<=3;i++)
{
cout<<"Enter Number "<<(i)<<" : ";
cin>>num;

if(num < min) 
   min = num ;	
}	

return min;

//cout<<"MIN = "<<max;	


//End Function
}


//Q.6
//calculator


//Q.7
//FActorial

int factorial(int num)
{
	cout<<"Enter Number : ";
	cin>>num;
	int fact = 1 ;
	for(int j = num;j > 0; j--,num--)
	{
		fact *= num;
//		cout<<num<<" * ";
	}
//	cout<<fact;
//  cout<<endl;
	return fact ;
}



//Q.8
//Fibonacci Sequence
void fibonacci(int n)
{
int num1 = 0 , num2 = 1 ; // must be like that
int sum = 0 ; //must

cout<<"Enter X : ";
cin>>n;

cout<<num1<<endl<<num2<<endl;
for(int j = 1;j <= (n-2);j++)
{
sum = num1 + num2 ;
if(j % 2 == 1)
num1 = sum ;
else
num2 = sum ;

cout<<sum<<endl;
//return sum ;

}

//End
}



// (a+b) / a == a / b ==> golden ratio ,  a > b > 0


void goldenRatio(float a , float b)
{
cout<<"Enter Two Numbers : ";
cin>>a>>b;
//cout<<fixed;
if(a > b && b != 0)
{
	cout<<(a/b)<<endl<<(a+b)/a<<endl;
	if((a/b) == (a+b)/a)
	cout<<"Golden Ratio\n";
	
	else
	cout<<"Not\n";
}


else if (a < b && a != 0)	
{
    cout<<(b/a)<<endl<<(a+b)/b<<endl;
	if((b/a) == (a+b)/b)
	cout<<"Golden Ratio\n";
	
	else
	cout<<"Not\n";	
}
// (a+b) /

else
{
	cout<<"Not\n";		
}
//end	
}

