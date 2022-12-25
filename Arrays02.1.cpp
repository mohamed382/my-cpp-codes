#include<iostream>
#include<iomanip>

using namespace std ;
//GLOBAL VARIABLES
const int  rows = 3 ;
const int  cols = 3 ;

// FUNCTIONS 
void initMatrix(double arr[rows][cols]);
void displayMatrix(double arr[rows][cols]);
double getSum(double arr[rows][cols]);


// MAIN FUNCTION HERE
int main()
{
//ARRAY 
double array[rows][cols];	
// CALLING A FUNCTION 
//a
initMatrix(array);	
//b
displayMatrix(array);
//c
cout<<"SUM = "<<getSum(array)<<endl;

// END OF MAIN 
	return 0 ;
}


// a

void initMatrix(double arr[rows][cols])
{
 	for(int i = 0; i < rows; i++)
	{
		for(int j = 0 ; j < cols; j++)
		{	//DISPLAY 
			cout<<"ENTER row ("<<(i+1)<<") Col ("<<(j+1)<<") : ";
			//INPUT
			cin>>arr[i][j];
 		}
	}
 }
//b

void displayMatrix(double arr[rows][cols])
{
	cout<<"Hello world !";
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0 ; j < cols; j++)
		{	 
		cout<<left<<setw(3)<<arr[i][j];
		cout<<right<<setw(3)<<"|";
 		}
 		cout<<endl;
	}
}

// c
double getSum(double arr[rows][cols] )
{
	double sum = 0.0 ;
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0 ; j < cols; j++)
		{
			sum += arr[i][j] ;	
		}
	}
	return sum ;	
}
