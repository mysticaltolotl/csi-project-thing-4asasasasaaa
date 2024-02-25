#include <iostream>
#include <cstdlib>
#include <iostream>
#include "Register.hpp"


using namespace std;

Register::Register(){
   top = 0;
}

/*
 * If the register is full or not
 * @returns 
 */
bool Register::isFull(){
   if(top == SIZE)
   {
      return true;
   }
   return false;
}

/*
 * Adds money to stack.
 * @param money: the type of pancake's price times the quantity
 */
void Register::push( int money ){
   if(isFull())
   {
      cout << "Stack overflow:" << endl;
      return;
   }
   a[top] = money;
   top++;
}


/*
 * Checks if stack is empty. 
 * @returns a bool
 */
bool Register::isEmpty(){
   if(top == 0)
   {
      return true;
   }
   return false;
}

/*
 * Looping through the stack array to display amounts
 */
void Register::disp(){
	int temp = SIZE - 1;
  	cout << "top = [" << top << "]" << endl;
  	while(temp >= 0)
    {
      cout << a[temp] << endl;
      temp--;
    }

}

int Register::pop(){
   if(isempty())
   {
     cout << "Stack empty, cannot pop an item!" << endl;
     return -1;
   }
   top--;
   return top;
}