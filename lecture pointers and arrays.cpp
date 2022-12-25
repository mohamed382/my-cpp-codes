#include<iostream>


using namespace std ;

void swap(double & , double & );
void swap(double* , double* );


int main ()
{
	
//	cout<<"Hello world "; // test void main ()

// pointers basics 
// a pointer is a variable that stores an address 

//int var = 100 ; 
//cout<<var<<endl<<&var<<endl;
//int *ptr_var ;
//ptr_var = &var ;
//cout<<*ptr_var<<endl<<ptr_var<<endl;
// change var value using pointer derefernce
//*ptr_var = 50 ; 
//cout<<var<<endl<<*ptr_var<<endl;


// function with pointers

//double a , b ;
//cout<<"Enter a , b : ";
//cin>>a>>b;

// function 1
//swap(a,b);
//cout<<a<<"\t"<<b<<endl;
//cout<<swap(a,b); // error because it doesnot return anything 
	
//cout<<"----------------------"<<endl;	
	
// function 2		
//swap(&a,&b);	
//cout<<a<<"\t"<<b<<endl;	
//------------------------------------------------	

// array with pointers
// array name is a pointer for its first element 

//int vals[] = {2,3,5};
//cout<<vals<<endl; // prints first element address  OR array pointer
//cout<<vals[0]<<endl<<*vals<<endl;
//
//int *vals_ptr = vals ;
//cout<<vals_ptr<<endl; // pointer array 
//cout<<*vals_ptr<<endl; 
//cout<<vals_ptr[1]<<endl;


//char msg[] = {"HELLO"};
//cout<<msg<<endl;	
//	
//char *ptr = msg ;
//cout<<ptr;	
	
//-------------------------------------------------------------	
	
int vals[] = {4,7,11};
int *valptr  ;
//cout<<vals<<endl<<*vals<<endl;//address 4
valptr = vals ;
//cout<<valptr<<endl<<*valptr<<endl;//address 4
//cout<<vals[1]<<endl<<valptr[2]<<endl; //7 11
//cout<<*(vals+1)<<endl<<*(valptr+2); //7 11
//cout<<valptr++<<endl; // address of 4
//cout<<valptr++<<endl; // adress of 7
//cout<<valptr++<<endl; //adress of 11
//cout<<--valptr<<endl;//adress of 11
//cout<<--valptr<<endl;//adress of 7
//cout<<valptr--<<endl;//adress of 7
//cout<<valptr<<endl;//adress of 4
////---------------------------------- 
//cout<<*valptr++<<endl;//4
//cout<<*valptr++<<endl;// 7
//cout<<*valptr++<<endl;// 11
//cout<<*valptr<<endl;//0
//cout<<valptr<<endl;
//cout<<--*valptr<<endl;//-1 , valptr = valptr - 1 ;
//cout<<valptr<<endl;
//cout<<++*valptr<<endl;//0
//cout<<valptr<<endl;
//cout<<*--valptr<<endl;//11
//----------------------------
//cout<<*vals<<endl;
//cout<<*valptr + 1<<endl;
//cout<<++*vals<<endl;
////cout<<*vals++<<endl; // check it 
//cout<<*vals<<endl;

//-----------------------------------


//int set[3] = {5,10,15};
//int *ptr = set ;
//
//for(int i = 1; i <= 3;i++)
//{
//	cout<<*ptr++<<" ";
//}
//cout<<endl;
//for(int i = 1; i <= 3;i++)
//{
//	cout<<*--ptr<<" ";
//}

//------------------------------
//int x = 25 , *ptr = &x ;
//ptr = 0 ;
//if(!ptr)
////cout<<"False\n";
//cout<<ptr;
//else
//cout<<"True\n";
//----------------------------------
////pointers to constant (cannot change value but change adress)
//int z = 10 ;
//int y = 50 ;
//const int *val ;
//val = &z ;
//cout<<val<<endl;
//cout<<*val<<endl; // 10
//val = &y ;
//cout<<val<<endl;
//cout<<*val<<endl; // 50
////constant pointers  (cannot change adress but can change value)
//int w = 12 ;
//int r = 14 ;
//int* const p = &w ;
//
//cout<<p<<endl;
//cout<<*p<<endl;
//*p = r ;
//cout<<p<<endl;
//cout<<*p<<endl;
////constant pointers to pointers (cannot change adress and cannot change value)
//int d = 79 ;
//int f = 53 ;
//const int * const btr = &d ;
////btr = &d ; not working of const
//cout<<btr<<endl; // adr
//cout<<*btr<<endl; // 79
////btr = &f ;
//cout<<btr<<endl;// adr
//cout<<*btr<<endl;//79
//-----------------------------------
//int num = 6 ;
//int *p = &num ;
//cout<<(*p)++<<endl;
//cout<<num++<<endl;
//cout<<(*num)++<<endl; // wrong format

//----------------------------------
// (1*size of data type ) => dptr = 1*8 bytes .
//double x = 25  , *dptr ;
//dptr = &x ;
//cout<<dptr++<<endl;
//cout<<dptr++<<endl;
//cout<<dptr++<<endl;

	
return 0 ;
} 





// swap function 1 by reference 

void swap(double &x , double &y)
{
	double temp ; 
	temp = x ;
	x = y ;
	y = temp ;
	
}



// swap function 2 by pointer 

void swap(double *ptr1 , double *ptr2)
{
	double temp ;
	temp = *ptr1 ;
	*ptr1 = *ptr2 ; 
	*ptr2 = temp ;
	
	
}













