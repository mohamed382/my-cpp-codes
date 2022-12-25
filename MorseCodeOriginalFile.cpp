#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>

using namespace std ;
// FUNCTIONS 
void morse_to_alpha();
void alpha_to_morse();
//void greeting();
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
	
int choice ; 
int ch = 1;

while(ch == 1)
{

cout<<"CHOOSE \"1\" IF YOU WANT TO TRANSLATE FROM MORSE TO ALPHA "<<endl
<<"CHOOSE \"2\" IF YOU WANT TO TRANSLATE FROM ALPHA TO MORSE "<<endl;
cout<<"ENTER YOUR CHOICE : ";
cin>>choice;	

while(choice > 2 || choice < 1)
{
	cout<<"PLEASE ENTER ONLT (1 OR 2 ) "<<endl;
	cout<<"ENTER YOUR CHOICE : ";
	cin>>choice;
}
switch(choice)
{
case 1	:
	morse_to_alpha();
	break;
case 2 : 
	alpha_to_morse();
	break;
default:
	cout<<"PLEASE ENTER ONLT (1 OR 2 ) "<<endl;
	
}

cout<<endl<<"ENTER 1 FOR YES & 0 FOR NO "<<endl;
cout<<"ENTER YOUR CHOICE : ";
cin>>ch;

if(ch == 1)
ch = 1 ;

else if(ch == 0)
ch = 0 ;

else 
{
	while(ch > 1 || ch < 0)
{
	cout<<"PLEASE ENTER ONLT (1 OR 2 ) "<<endl;
	cout<<"ENTER YOUR CHOICE : ";
	cin>>ch;
}

}

}//END OF WHILE 




return 0 ;

} // END OF MAIN FUNCTION 

void morse_to_alpha()
{

cout<<"Put one for letter and / for words "<<endl;
cout<<"Enter Your Morse Code : ";

string morse_code ;
cin.ignore();
getline(cin,morse_code); 

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
	
  	if(morse_units[i] == ' ')
 	{
 	count++;
 	spaces++;
    }
    
    if(morse_units[i] == '/')
    {
    slash++;
	}
     
 	if(morse_units[i] == '-' || morse_units[i] == '.')
 	{
 		morse_letter += morse_units[i];	
 	
	}
	if(spaces == 1 && morse_letter != "")
	{
		digits[count-1] = morse_letter;
		morse_letter = "";
		spaces = 0 ;
 	}
	spaces = 0 ;
	
	static int t = 1 ;
	if(slash != 0)
	{
	slashs[count-t] = " ";
	slash = 0 ;
	t++ ;
	}

}

 

if(morse_letter != "" && digits[count] == "")
	{
 		digits[count] = morse_letter ;
	}


for(int j = 0; j < count;j++)
{
 	if(digits[j] == "" )
	{
		for(int k = j; k < count;k++)
		{
			digits[k] = digits[k+1];
		}
 	}
	
  	
 } 
 
string letters[count];

int len1 ;

if(morse_letter == "" && slash != 0)
len1 = count - slash ;
else if(morse_letter != "" && slash != 0)
len1 = count - (slash - 1);
else
len1 = count ;
int len2 = sizeof(original_letters) / 8 ;

 
for(int x = 0; x < len1;x++)
{
 	
	for(int y = 0;y < len2;y++)
	{
		if(digits[x] == original_digits[y])
		{
			letters[x] = original_letters[y];
		}
	}
	cout<<letters[x]<<slashs[x];
 }


 
} //END OF FUNCTION MORSE TO ALPHA 








void alpha_to_morse()

{

string alpha ;
cout<<"PLEASE ENTER ONLY CAPITAL LETTERS !!! "<<endl;
cout<<"Enter Alpha letters : ";

cin.ignore();
getline(cin,alpha);
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
	cout<<code_arr[x]<<" ";
}
	cout<<endl;
} // END OF FUNCTION ALPHA TO MORSE
