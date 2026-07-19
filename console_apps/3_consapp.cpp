#include<iostream>
// #include <cstdlib> // random .. 
// #include <ctime>  // random
#include"mlib.h"
using namespace std ;


void swap ( int& a , int& b )
{
int temp ;
temp = a ;
a = b ;
b = temp ;
}


// Fisher-Yates Shuffle!  swap array

void array_swab( int arr[] , int size )
{
for (int i = 0; i < size - 1 ; i++ )        
    swap(arr[i], arr[mlib::input_random( i , size - 1 )]); 
}

// 1- arr ( i )  : fix one side to avoid unswapped elements 
// 2- random(0, n-1) : wrong , as i need to avoid unlucky re-reversed same couple ( bias towards original order )  // nestd loop one direction
// 3- random(i+1, n-1) : wrong , an element can never stay in its original spot
// 4- i < size : wrong , no need to swap last element with itself 




int main ()
{
mlib::reset_screen();
   srand(static_cast<unsigned int>(time(0))); 





return 0 ;
}

