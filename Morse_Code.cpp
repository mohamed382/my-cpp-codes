#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>
#include<fstream>
using namespace std ;
// FUNCTIONS 
void morse_to_alpha(string);
void alpha_to_morse();
void greeting();
// GLOBAL STRNGS

// letters
string original_digits[] = {".-","-...","-.-.","-..",".","..-.","--.","....",  
"..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-",
"...-",".--","-..-","-.--","--..",
".----","..---","...--","....-",".....", // numbers
"-....","--...","---..","----.","-----", 
".-.-.-","--..--","..--..","-.-.--","-.-.-.", // marks
"---...",".-.-.","-....-","-..-.","-...-"};

string original_letters[] = {"A","B","C","D","E","F","G","H","I",
"J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z",
"1","2","3","4","5","6","7","8","9","0",
".",",","?","!",";",":","+","-","/","="};

int main(){


string str1 ;
//morse_to_alpha(str1);


//ifstream fin("input.txt");
//ofstream fout ;
//getline(fin,str1);

int choice ; 

cout<<"CHOOSE \"1\" IF YOU WANT TO TRANSLATE FROM MORSE TO ALPHA "<<endl
<<"CHOOSE \"2\" IF YOU WANT TO TRANSLATE FROM ALPHA TO MORSE "<<endl;
cout<<"ENTER YOUR CHOICE : ";
cin>>choice;	
//choice != 1 || choice != 2
while(choice > 2 || choice < 1)
{
	cout<<"PLEASE ENTER ONLT (1 OR 2 ) "<<endl;
	cout<<"ENTER YOUR CHOICE : ";
	cin>>choice;
}
switch(choice)
{
case 1	:
	morse_to_alpha(str1);
	break;
case 2 : 
	alpha_to_morse();
	break;
default:
	cout<<"PLEASE ENTER ONLT (1 OR 2 ) "<<endl;
	
}

//greeting();	

//ifstream fin("input.txt");
//ofstream fout ;


//string str1 , str2 , str3 ; 
//cout<<"Put one for letter and / for words "<<endl;
//cout<<"Enter Your Morse Code : ";


// #Idea 1
/*
//cin>>str1>>str2>>str3;
//cout<<setw(3)<<endl<<str1;
getline(cin,str1);
//getline(cin,str2);
cout<<str1.length()<<endl;
cout<<str1[0]<<str1[1]<<str1[2]<<str1[3]<<endl;
  
  
int count = 0 ;
for(int i = 0; i < str1.length(); i++)

{
	
if(str1[i] == ' ')
	count++;
	
 
}
	
cout<<count<<endl;
int size = str1.length() - count ;

for(int j = 0; j < size;j++)
{
	cout<<str1[j];	
}
	
*/

// -----------------------------------------------------------------

//#Idea 2

return 10 ;
}

//void greeting ()
//{
//	string str ;
//	cout<<"ENTER STRING  : ";
//	cin>>str;
//	cout<<"HELLO , "<<str<<endl;
//}

void morse_to_alpha(string morse_code)
{
ifstream fin ;
//char* filename = "C:/Users/mohammed/Desktop/input_morse3.txt";
//fin.open(filename);

string file_name ;
cout<<"ENTER YOUR FILE DIRECTORY : ";
cin.ignore();
getline(cin,file_name);

for(int i = 0; i < file_name.length();i++)
{

if( file_name[i] == '\\') 
file_name[i] = '/';

//else if(file_name[i] == ' ')
//file_name[i] = '/';

} // end for

cout<<file_name<<endl;
fin.open(file_name.c_str());


//ifstream fin("output_alpha2.txt");

ofstream fout("output_morse2.txt");

cout<<"Put one for letter and / for words "<<endl;
cout<<"Enter Your Morse Code : ";
//string morse_code ;
cin.ignore();
//getline(cin,morse_code);
getline(fin,morse_code);
//cin>>morse_code; 

cout<<morse_code<<endl;	
cout<<"SIZE = "<<morse_code.length()<<endl;

int size = morse_code.length() ;
char morse_units [size] ;
string morse_letter = "" ;

 
int count = 0 ;
int spaces = 0 ;
int slash = 0 ;
string digits[1000] ; // to make it accessible 
// size big becaues number of letters can be written 
string slashs[1000] ;
 
for(int i = 0; i < size;i++)
{
	morse_units[i] = morse_code[i];
//	cout<<morse_units[i];
 	if(morse_units[i] == ' ')
 	{
 	count++;
 	spaces++;
    }
    // || morse_units[i] == '	'
    if(morse_units[i] == '/' || morse_units[i] == '  ' )
    {
    slash++;
	}
//    string digits[1] ;
    
 	if(morse_units[i] == '-' || morse_units[i] == '.')
 	{
 		morse_letter += morse_units[i];	
 	
	}
	if(spaces == 1 && morse_letter != "")
	{
		digits[count-1] = morse_letter;
		morse_letter = "";
		spaces = 0 ;
//		slashs[count-1] = "";
	}
	spaces = 0 ;
	
//	if(digits[0] != "")
//	{
//	cout<<digits[0]<<endl;
//    }

	static int t = 1 ;
	if(slash != 0)
	{
	slashs[count-t] = " ";
	slash = 0 ;
	t++ ;
	}


}

cout<<"Count = "<<count<<endl;
cout<<"Morse Letter = "<<morse_letter<<endl;

if(morse_letter != "" && digits[count] == "")
	{
 		digits[count] = morse_letter ;
	}


for(int j = 0; j < count;j++)
{
//&& digits[j] != digits[count]
	if(digits[j] == "" )
	{
		for(int k = j; k < count;k++)
		{
			digits[k] = digits[k+1];
		}
 	}
	
  	
//	cout<<digits[j]<<endl;
} 

//int len ;
//string str ;
//int digit_num[count];
for(int n = 0; n < count;n++)
{
//		cout<<digits[n]<<endl;
//		len = digits[n].length();
//		str = digits[n];
//		for(int y = 0; y < len;y++)
//		{
//			if(str[y] == '-')
//			str[y] = '1';
//			else if(str[y] == '.')
//			str[y] = '0';
//			
//			digit_num[n] += str[y];
//			
//		}
//		str = "" ;
		
}

int len3 = count + slash ;
for(int p = 0;p < len3;p++)
{
	if(slash == 0)
	slashs[count-1] = "";
	else if(slash == 1)
	{
	slash = 0 ;	
	slashs[count+slash] = " ";
	
	}

}

//for(int h = 0; h < count;h++)
//{
//			cout<<digit_num[h]<<endl;
//
//}


cout<<"Count = "<<count<<endl;
cout<<"SLASH = "<<slash<<endl;
//cout<<sizeof(digits)<<endl;
//cout<<"--------------------------------"<<endl<<""<<endl<<"";
//// letters
//string original_digits[] = {".-","-...","-.-.","-..",".","..-.","--.","....",  
//"..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-",
//"...-",".--","-..-","-.--","--..",
//".----","..---","...--","....-",".....", // numbers
//"-....","--...","---..","----.","-----", 
//".-.-.-","--..--","..--..","-.-.--","-.-.-.", // marks
//"---...",".-.-.","-....-","-..-.","-...-"};
//
//string original_letters[] = {"A","B","C","D","E","F","G","H","I",
//"J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z",
//"1","2","3","4","5","6","7","8","9","0",
//".",",","?","!",";",":","+","-","/","="};

string letters[count];

int len1 ;

if(morse_letter == "" && slash != 0)
len1 = count - slash ;
else if(morse_letter != "" && slash != 0)
len1 = count - (slash - 1);
else
len1 = count ;
int len2 = sizeof(original_letters) / 8 ;

cout<<len1<<endl;

for(int x = 0; x < len1;x++)
{
//	cout<<digits[x]<<endl;
	fout<<digits[x]<<endl;
	
	for(int y = 0;y < len2;y++)
	{
		if(digits[x] == original_digits[y])
		{
			letters[x] = original_letters[y];
		}
	}
//	cout<<letters[x]<<endl;
	fout<<letters[x]<<endl;
// 	cout<<letters[x]<<slashs[x];
}


}// END OF  FUNCTION MORSE_TO_ALPHA
//cout<<sizeof(original_letters) / 8<<endl; // size of string
//cout<<sizeof(original_digits) / 27<<endl; // num of leeters

//cout<<"Hello"<<""<<"world"<<endl;
//int len3 = count + slash ;
//for(int p = 0;p < len3;p++)
//{
//	if(slash == 0)
//	slash[count-1] = "";
//	else if(slash == 1)
//	{
//	slash = 0 ;	
//	slash[count+slash] = " ";
//	
//	}
//
//}

//char letters[count] ;
//
//for(int l = 0; l < count; l++)
//{
//	string comp = digits[l];
//	switch(comp)
//	{
//		case ".-":
//		letters[l] = 'A';
//		break;
//		
//		case "-...":
//		letters[l] = 'B';
//		break;
//		
//		case "-.-.":
//		letters[l] = 'C';
//		break;
//		
//		case "-..":
//		letters[l] = 'D';
//		break;
//		
//		case ".":
//		letters[l] = 'E';
//		break;
//		
//		case "..-.":
//		letters[l] = 'F';
//		break;
//		
//		case "--.":
//		letters[l] = 'G';
//		break;
//		
//		case "....":
//		letters[l] = 'H';
//		break;
//		
//		case "..":
//		letters[l] = 'I';
//		break;
//		
//		case ".---":
//		letters[l] = 'J';
//		break;
//		
//		case "-.-":
//		letters[l] = 'K';
//		break;
//		
//		case ".-..":
//		letters[l] = 'L';
//		break;
//		
//		case "--":
//		letters[l] = 'M';
//		break;
//		
//		case "-.":
//		letters[l] = 'N';
//		break;
//		
//		case "---":
//		letters[l] = 'O';
//		break;	
//		
//		case ".--.":
//		letters[l] = 'P';
//		break;
//		
//		case "--.-":
//		letters[l] = 'Q';
//		break;
//		
//		case ".-.":
//		letters[l] = 'R';
//		break;
//		
//		case "...":
//		letters[l] = 'S';
//		break;
//		
//		case "-":
//		letters[l] = 'T';
//		break;
//		
//		case "..-":
//		letters[l] = 'U';
//		break;
//		
//		case "...-":
//		letters[l] = 'V';
//		break;
//		
//		case ".--":
//		letters[l] = 'W';
//		break;
//		
//		case "-..-":
//		letters[l] = 'X';
//		break;
//		
//		case "-.--":
//		letters[l] = 'Y';
//		break;
//		
//		case "--..":
//		letters[l] = 'Z';
//		break;
//	}
//	
//}
// 
//for(int x = 0; x < count;x++)
//{
//cout<<letters[x];	
//} 
 
//char letters[] = {'A' , 'B' , 'C'};
//string digits[count] = {};
	
//string morse_word ;
//for(int j = 0; j)

	
// an example for input type morse code	
//	- .... . / -.-. --- -.. . / - --- -.. .- -.--

// make sound 

//string str ;
//for(int k = 1;k<5;k++)
//{
//cin>>str;
//cout<<"\a";
//}
	
	
// function
//void alpha_to_morse(string alpha)
//{

void alpha_to_morse()

{

string alpha ;
cout<<"PLEASE ENTER ONLY CAPITAL LETTERS !!! "<<endl;
cout<<"Enter Alpha letters : ";

ifstream fin("input_alpha2.txt");
ofstream fout("output_alpha2.txt");

cin.ignore();
//getline(cin,alpha);
getline(fin,alpha);

int len_alpha = alpha.length();
int len2 = sizeof(original_letters) / 8 ;

string alpha_arr[len_alpha] ;
string code_arr[len_alpha] ;

for(int x = 0;x < len_alpha;x++)
{
alpha_arr[x] = alpha[x] ;

if(alpha_arr[x] == " ")
{
	code_arr[x] = "/";
}

	for(int y = 0;y < len2;y++)
	{
		if(alpha_arr[x] == original_letters[y])
		{
			 code_arr[x] = original_digits[y];
		}
	}
//	cout<<code_arr[x]<<" ";
	fout<<code_arr[x]<<" ";
}
//	cout<<endl;
	fout<<endl;
} // End of function 
	
	
//int len1 ;
//
//if(morse_letter == "" && slash != 0)
//len1 = count - slash ;
//else if(morse_letter != "" && slash != 0)
//len1 = count - (slash - 1);
//else
//len1 = count ;
//int len2 = sizeof(original_letters) / 8 ;

//for(int x = 0; x < len1;x++)
//{
//	cout<<digits[x]<<endl;
//	
//	for(int y = 0;y < len2;y++)
//	{
//		if(digits[x] == original_digits[y])
//		{
//			letters[x] = original_letters[y];
//		}
//	}
//	cout<<letters[x]<<endl;
////	cout<<letters[x]<<slashs[x];
//}	
	
	
	
	
	
	
	
	
	
	
//	return 10 ;
//}
