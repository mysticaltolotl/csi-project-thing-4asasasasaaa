#include "ShopQueue.hpp"
#include <iostream>

using namespace std;

ShopQueue::ShopQueue() {
   queueFront = nullptr;
   queueEnd = nullptr;
}

ShopQueue::~ShopQueue() {
   while(!isEmpty())
   {
      dequeue();
   }
}

/**
 * Checks if the shopqueue is empty or not
 * @returns Whether its empty or not
 */ 
bool ShopQueue::isEmpty() {
   if(queueEnd == nullptr)
   {
      return true;
   }

   return false;
}

/**
 * Looks at the shopqueue and returns the most 'urgent' order on the queue. No elements should be removed.
 * @return A customer order
 */
CustomerOrder* ShopQueue::peek() {
   return queueFront;
}

/**
 * Adds the customers to the queue.
 * @param name The name of the customer to add.
 * @param num_pancakes The number of pancakes to add
 * @param type_of_pancake The type of pancake to add. 
 * 
 */
void ShopQueue::enqueue(string name, int num_pancakes, int type_of_pancake) {

  	
  	CustomerOrder* temp = {name, num_pancakes, type_of_pancake, nullptr};
  
  	if(isEmpty())
    {
      	queueEnd = temp;
      	queueFront = temp;
      	return;
    }
  	else
    {
      	queueEnd->next = temp;
    }
  	
}

void ShopQueue::dequeue() {
   // TODO
}

/**
 * Should return the total number of customers in the queue. 
 * @returns The total number of elements
 */
int ShopQueue::queueSize(){
   // TODO
   return 0;
}

/**
 * Just returns the end of the queue. Used for testing. Do not touch! :)
 */ 
CustomerOrder* ShopQueue::getQueueEnd(){
   return queueEnd;
}