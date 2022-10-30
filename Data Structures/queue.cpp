#include <iostream>
using namespace std;


int queue[100], n = 100, front = - 1, rear = - 1;

void Enqueue() {
   int val;
   if (rear == n - 1)
   cout << "Queue Empty" << endl;
   else {
      if (front == - 1)
      front = 0;
      cout << "Enter the element to Enqueue : " << endl;
      cin >> val;
      rear++;
      queue[rear] = val;
   }
}
void Dequeue() {
   if (front == - 1 || front > rear) {
      cout << "Queue Underflow ";
      return ;
   } else {
      cout << "Element dequeued is : " << queue[front] << endl;
      front++;
   }
}
void Display() {
   if (front == - 1)
   cout << "Queue is empty" << endl;
   else {
      cout << "Elements in the Queue are : ";
      for (int i = front; i <= rear; i++)
      cout << queue[i] << " ";
         cout << endl;
   }
}
int main() {
   int ch;
   cout << "1) Enqueue" << endl;
   cout << "2) Dequeue" << endl;
   cout << "3) Display all the elements of queue" << endl;
   cout << "4) Exit"<<endl;
   do {
      cout << "Enter the operation you want to perform : "<<endl;
      cin >> ch;
      switch (ch) {
         case 1: Enqueue();
         break;
         case 2: Dequeue();
         break;
         case 3: Display();
         break;
         case 4: cout << "Exit" << endl;
         break;
         default: cout << "Invalid choice" << endl;
      }
   } while(ch!=4);
   return 0;
}