#include<iostream>
#include<iomanip>

using namespace std ;
//VARIABLES
//int row = 3 ;
//int col = 4;
//FUNCTIONS 
void inputArray(int arr[3][4]);
void displayInputArray(int arr[3][4] , int row , int col );
void displayDeltaArray(int arr[3][3] , int row , int col );
void deltaArray(int arr[3][4]  , int deltaArr[3][3]);
void deltaXArray(int arr[3][4] , int deltaArr[3][3]);
void deltaYArray(int arr[3][4] , int deltaArr[3][3]);
void deltaZArray(int arr[3][4] , int deltaArr[3][3]);
int deltaValue(int arr[3][3]);

int main()
{
// declare an array to take equation limits from user and store it
// integer limits only	
int array[3][4] ;
int delta[3][3] ;
int deltaX[3][3] ;
int deltaY[3][3] ;
int deltaZ[3][3] ;
	
	
	
// 
cout<<"Eq ==> aX + bY + cZ = d "<<endl;
cout<<"ENTER IN ORDER THESE LIMITS a , b , c , d "<<endl;
// CALLING 
inputArray(array);	
	
//DISPLAY
displayInputArray(array,3,4);

cout<<"\n\n";

//DELTA MAIN	
deltaArray(array,delta);
//DISPLAY TO CHECK
cout<<"DELTA MAIN\n\n";
displayDeltaArray(delta,3,3);
	
//DELTA X 	
deltaXArray(array,deltaX);
//DISPLAY
cout<<"\n\nDELTA X \n\n";
displayDeltaArray(deltaX,3,3);
	
//DELTA Y
deltaYArray(array,deltaY);
//DISPLAY
cout<<"\n\nDELTA Y \n\n";
displayDeltaArray(deltaY,3,3);	

//DELTA Z
deltaZArray(array,deltaZ);
//DISPLAY
cout<<"\n\nDELTA Z \n\n";
displayDeltaArray(deltaZ,3,3);	
	
cout<<"\n\n\n";
	
//	value of X
int valueX = deltaValue(deltaX) / deltaValue(delta) ;
cout<<"X = "<<valueX<<"\n\n";
	
//	value of Y
int valueY = deltaValue(deltaY) / deltaValue(delta) ;
cout<<"Y = "<<valueY<<"\n\n";

	
//	value of Z
int valueZ = deltaValue(deltaZ) / deltaValue(delta) ;
cout<<"Z = "<<valueZ<<"\n\n";
	
	
//	value of X
int value = deltaValue(delta);
cout<<"deltaValuemain = "<<value<<"\n\n";
cout<<"deltaValuex = "<<deltaValue(deltaX)<<"\n\n";
cout<<"deltaValuey = "<<deltaValue(deltaY)<<"\n\n";
cout<<"deltaValuez = "<<deltaValue(deltaZ)<<"\n\n";
//cout<<value / deltaValue(deltaY) << endl ;
//cout<<value / deltaValue(deltaZ) << endl ;

	
	
	
	
	
	
	
	
	
	return 0 ;
}

// TAKE FROM USER

void inputArray(int arr[3][4])
{
	for(int i = 0; i < 3;i++)
	{
		cout<<"Equation #"<<(i+1)<<" limits : ";
		for(int j = 0; j < 4;j++)
		{	
			cin>>arr[i][j];
		}
	}

}

//DISPLAY

void displayInputArray(int arr[3][4], int row , int col)
{
 	for(int i = 0; i < row; i++)
	{
		for(int j = 0 ; j < col; j++)
		{	
		cout<<right<<setw(3)<<arr[i][j];
		if(j == (col - 1))
		continue; 
		cout<<right<<setw(3)<<"|";
 		}
 	if(i == (row - 1))
	continue; 
 	cout<<endl;
 	for(int dash = 1; dash < col;dash++)
 	cout<<"-----+";
 	cout<<"-----";
 	cout<<endl;

	}
}


//DELTA
void deltaArray(int arr[3][4] , int deltaArr[3][3])
{
	for(int i = 0; i < 3;i++)
	{
 		for(int j = 0; j < 3;j++)
		{
		deltaArr[j][i] = arr[j][i] ;	
 		}
	}
	
}

void displayDeltaArray(int arr[3][3] , int row , int col )
{
 	for(int i = 0; i < row; i++)
	{
		for(int j = 0 ; j < col; j++)
		{	
		cout<<right<<setw(3)<<arr[i][j];
		if(j == (col - 1))
		continue; 
		cout<<right<<setw(3)<<"|";
 		}
 	if(i == (row - 1))
	continue; 
 	cout<<endl;
 	for(int dash = 1; dash < col;dash++)
 	cout<<"-----+";
 	cout<<"-----";
 	cout<<endl;

	}
}

//DELTA X
void deltaXArray(int arr[3][4] , int deltaArr[3][3])
{
	int k = 3;
	for(int i = 0; i < 3;i++)
	{
 		for(int j = 0; j < 3;j++)
		{
			if(i == 0)
			{
			deltaArr[j][i] = arr[j][k] ;
			}
			else
			deltaArr[j][i] = arr[j][i] ;
		
 		}
	}
	
}


//DELTA Y
void deltaYArray(int arr[3][4] , int deltaArr[3][3])
{
	int k = 3 ;
	for(int i = 0; i < 3;i++)
	{
 		for(int j = 0; j < 3;j++)
		{
			if(i == 1)
			{
			deltaArr[j][i] = arr[j][k] ;
			}
			else
			deltaArr[j][i] = arr[j][i] ;
		
 		}
	}
	
}

//DELTA Z
void deltaZArray(int arr[3][4] , int deltaArr[3][3])
{
	int k = 3;
	for(int i = 0; i < 3;i++)
	{
 		for(int j = 0; j < 3;j++)
		{
			if(i == 2)
			{
 			deltaArr[j][i] = arr[j][k] ;
			}
			else
			deltaArr[j][i] = arr[j][i] ;
		
 		}
	}
	
}

int deltaValue(int arr[3][3])
{
	int sum = +arr[0][0]*((arr[1][1]*arr[2][2])-(arr[1][2]*arr[2][1]))
			  -arr[0][1]*((arr[1][0]*arr[2][2])-(arr[1][2]*arr[2][0]))
			  +arr[0][2]*((arr[1][0]*arr[2][1])-(arr[1][1]*arr[2][0]))	;
	
	return sum ;
	
}

