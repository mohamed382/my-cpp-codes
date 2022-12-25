#include<iostream>
#include<string>
#include<iomanip>

using namespace std ;

// FUNCTION 
void fun(int arr[] , int arr_size);
void funCall();
//void f(int x , int y = 1 , int z = 3);
void f(int x , int y = 1 , int z = 3)
{
	cout<<x+y+z;
}
void getArea(float length , float width);
void getArea(float length);

void func(int x[], int size) 
{
for (int i=0; i<size; i++)
x[i]++;
}

void bubbleSort(int arr[] , int size);

int main()
{
// arrange this array using pointers 
int size = 9 ;
int x[9] = {9,8,7,6,5,4,3,2,1};	
int temp ;	
int *p = x ;

for(int i = 0; i < (size/2);i++)
{
temp = *(p + i);
*(p + i) = *(p + size - (i + 1));
*(p + size - (i + 1)) = temp ;
}	
// display 
for(int j = 0; j < size; j++)
cout<<*(p+j)<<" ";	
cout<<"\n\n";	
//--------------------------------------------
//function to display multiplication of num
fun(x,size);
cout<<"\n\n";
//	
//funCall();	
//funCall();	
//funCall();	
//funCall();	

//
//f(1);	
	
//
	
//getArea(2.5);
//getArea(3, 4);
	
//
//int a , b , c ;
//cout<<"Enter a , b , c : ";
//cin>>a>>b>>c;	
//if(a >= b && a >= c)
//cout<< a;
//else if(b >= a && b >= c)
//cout<<b;
//else if(c >= a && c >= b)
//cout<<c;
	

//

//int base ;
//int power ;
//cin>>base>>power;
//int result = 1 ;
//if(power >= 0)
//{
//while(power >= 1)	
//{
//result *= base ;
//power--;	
//}	
//cout<<result<<endl;
//}
//else 
//cout<<"enter only positive powers \n";
//

//int num , count ;
//cout<<"num : ";
//cin>>num;
//
//for(int i = 1; i <= num; i++)
//{
//	if(num % i == 0)
//		count++;
//}
//
//if(count == 2 )
//cout<<"Prime\n";
//else 
//cout<<"Not Prime\n";

//

for(int i = 1; i <= 5;i++)
{
for(int j = 1;j <= i;j++)
{
cout<<"*";	
}	
cout<<"\n";
}

cout<<"\n\n\n";

for(int i = 5; i >= 1;i--)
{
for(int j = i;j >= 1;j--)
{
cout<<"*";	
}	
cout<<"\n";
}

cout<<"\n\n\n";
//

for(int i = 1; i <= 5;i++)
{
for(int k = 0; k < (5 - i);k++)
{
cout<<" ";
}	
for(int j = 1;j <= (2*i)-1; j++)
{
cout<<"*";	
}	
cout<<"\n";
}

cout<<"\n\n\n";

//

for(int i = 5; i >= 1;i--)
{
for(int k = 0; k < (5 - i);k++)
{
cout<<" ";
}	
for(int j = (2*i)-1; j >= 1;j--)
{
cout<<"*";	
}	
cout<<"\n";
}
cout<<"\n\n\n";

//

for(int i = 1; i <= 5;i++)
{
for(int j = 1;j <= i;j++)
{
cout<<i;	
}	
cout<<"\n";
}
cout<<"\n\n\n";
//

for(int i = 1; i <= 5;i++)
{
for(int j = 1;j <= i;j++)
{
cout<<j;	
}	
cout<<"\n";
}

//
cout<<"\n\n\n";

for(int i = 5; i >= 1;i--)
{
for(int j = i;j >= 1;j--)
{
cout<<i;	
}	
cout<<"\n";
}

//

int fact = 1 , num ;
cout<<"num : ";
cin>>num;

while(num >= 1)
{
fact *= num;
num--;
}


cout<<"fact = "<<fact;

//

//int a[] = {5,6,2,3};
//func(a,4);
//for (int i=0; i<4; i++)
//cout<<a[i]<<endl;


cout<<"\n\n\n";
//

int a[5] = {1,2,3,4,5};
int b[5] = {1,2,3,4,5};
int c[5];

for(int i = 0; i < 5; i++)
{
	c[i] = a[i] + b[i] ;
	cout<<c[i]<<" ";
}
cout<<"\n\n\n";
int d[5] = {3,5,2,-1,10};
bubbleSort(d,5);
for(int i = 0 ; i < 5 ; i++){
		cout<<d[i]<<endl;
	}
	return 0 ;
}


// multipli pointers way
void fun(int arr[] , int arr_size)
{
	int *ptr_arr = arr ;
	for(int i = 0;i < arr_size;i++)
	{
		int var = *(ptr_arr + i);
		cout<<( var * var ) << " ";
	}
	
}

//


void funCall()
{
	static int x = 1 ;
//	x++;
	cout << "how many times you called a function = "<<x++<<endl;
}

// 
//void f(int x , int y = 1 , int z = 3)
//{
//	cout<<x+y+z;
//}

void getArea(float length )
{
	cout<<length * length << " ";
}
void getArea(float length , float width)
{
	cout<<length * width << " ";
}

//
//{3,5,2,-1,10};
void bubbleSort(int arr[] , int size)
{

bool swap ;
int temp;
do
{
	swap = false;
	for(int i = 0; i < size-1;i++)
	{
		if(arr[i] > arr[i+1])
		{
		temp = arr[i];
		arr[i] = arr[i+1];
		arr[i+1] = temp ;
		swap = true;
		}
	}
	
}while(swap);

}
