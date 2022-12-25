#include<iostream>
#include<iomanip>
#include<string>

using namespace std ;
//FUNCTION PRTOTYBES
void bubbleSortArray(int arr[],int size);
void bubbleSortChar(string str_arr[],char ch_arr[],int size);

int main()
{
int ch_size = 12 ;
//cout<<sizeof(names) <<endl;
//cout<<sizeof(names) / 8 ;

string names[ch_size] = {"dina","ahmed","bahaa","elia",
						"gkline","flideo","cleo","aymen",
						"batman","carman","dickman","eggman"};
//int *p = new string[16]	;// dynamic allocation try here !!!
//cout<<"Enter size : ";
//cin>>ch_size;
char ch_Arr[ch_size];


bubbleSortChar(names,ch_Arr,ch_size); 
cout<<left;
for(int j = 0;j < ch_size;j++)
cout<<names[j]<<" ";
	return 0 ;
}

//BUBBLE SORT ARRAY 
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
//
void bubbleSortChar(string str_arr[],char ch_arr[],int size)
{
	int arr[size] ;
	string name = "" ;
//	cout<<"Enter characters : ";
	for(int i = 0; i < size;i++)
	{
//		cin>>ch_arr[i];	
		name = str_arr[i];
		ch_arr[i] = name[0];
		arr[i] = ch_arr[i];
	}
	
	bubbleSortArray(arr,size);
	
	for(int i = 0; i < size;i++)
	{
		ch_arr[i] = arr[i];
	}
	//
	
//	bool swap ;
	string temp[size] ;
//	do
//	{
	
	for(int i = 0; i < size;i++)
		{
		name = str_arr[i] ;
//		swap = false ;
		for(int j = 0;j < size;j++)
		{
			if(ch_arr[j] == name[0])
			{
//			  temp = str_arr[i] ;
//			  str_arr[i] = str_arr[j];
//			  str_arr[j] = temp;
			if(temp[j] == "")
			{
			  temp[j] = str_arr[i] ;
			  break;
			}
//			  swap = true ;
			}
		}
		}
//	}while(swap);
	// DISPLAY
	for(int j = 0;j<size;j++)
	{
	cout<<ch_arr[j]<<" ";
	str_arr[j] = temp[j] ;
	cout<<temp[j]<<" ";

	}
	cout<<"\n\n";
}


