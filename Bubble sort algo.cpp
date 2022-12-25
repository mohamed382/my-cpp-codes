#include<iostream>
#include<iomanip>
#include<string>

using namespace std ;
//FUNCTION PRTOTYBES
void bubbleSortArray(int arr[],int size);
void bubbleSortChar(int ch_arr[],int size);

int main()
{
//	const int size = 10 ;
//	int array[size] = {-1,0,-10,100,12,12,2,-100,9,10}; // not sorted
//	bubbleSortArray(array,size);
//	
//	// display
//	for(int j = 0; j < size;j++)
//	cout<<array[j]<<" ";
//	cout<<endl;
//-----------------------------------------
// a==> 97 , z==> 122
//cout<<int('a')<<endl;
//cout<<int('z')<<endl;
//cout<<int('u')<<endl;
//cout<<int('v')<<endl;
//cout<<int('w')<<endl;


int ch_size ;
cout<<"Enter size : ";
cin>>ch_size;
char ch_Arr[ch_size];

int	num = 122 ;
for(int j = 0;j<ch_size;j++)
{
	ch_Arr[j] = num--;
}
//bubbleSortChar(ch_Arr,ch_size); // check later !!
//--------------------------------
	int arr[ch_size] ;
//	cout<<"Enter characters : ";
	for(int i = 0; i < ch_size;i++)
	{
//		cin>>ch_Arr[i];	
		arr[i] = ch_Arr[i];
//		cout<<arr[i]<<endl; // testing
	}
	
	bubbleSortArray(arr,ch_size);
	
	for(int i = 0; i <ch_size;i++)
	{
		ch_Arr[i] = arr[i];
//		cout<<ch_Arr[i]<<" ";
	}
//--------------------------------
//	// display
	cout<<endl;
	for(int j = 0; j < ch_size;j++)
	cout<<ch_Arr[j]<<" ";
	cout<<endl;

	return 0 ;
}

void bubbleSortArray(int arr[],int size)
{
	int temp ;
	bool pass ;
	
	do
	{	pass = false ;
		for(int i = 0; i < size - 1;i++)
		{
			if(arr[i] > arr[i+1])
			{
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp ;
				pass = true ;
			}
		}
	}while(pass);
	
}

void bubbleSortChar(int ch_arr[],int size)
{
	int arr[size] ;
	cout<<"Enter characters : ";
	for(int i = 0; i < size;i++)
	{
		cin>>ch_arr[i];	
		arr[i] = ch_arr[i];
	}
	
	bubbleSortArray(arr,size);
	
	for(int i = 0; i < size;i++)
	{
		ch_arr[i] = arr[i];
	}
}


