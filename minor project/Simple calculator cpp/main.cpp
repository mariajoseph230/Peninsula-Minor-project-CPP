#include <iostream>
using namespace std;

int main() {

  char operations;
  float number1, number2;

  cout << "*******Menu********"<<"\n\n"<< "Please select your operation to be implemented:"<<"\n\n"<<"Enter :"<<"\n\n"<<"1 for Addition "<<"\n\n"<<"2 for Subtraction"<<"\n\n"<<"3 for Multiplication "<<"\n\n"<<"4 for Division"<<"\n";
  cin >> operations;

  cout <<"\n\n"<<"Enter 2 numbers to implement this operation:"<<"\n";
  cin >>number1 >> number2;

  switch(operations) {

    case '1':
      cout<<"\n\n"<<"You have selected addition operation."<<"\n"<<"Result is : "<< number1 + number2;
      break;

    case '2':
      cout << "\n\n"<<"You have selected Subtraction operation."<<"\n"<<"Result is : " << number1 - number2;
      break;

    case '3':
      cout <<"\n\n"<<"You have selected Multiplication operation."<<"\n"<<"Result is : "<< number1 * number2;
      break;

    case '4':
      cout <<"\n\n"<<"You have selected Division operation."<<"\n"<<"Result is : "<< number1 / number2;
      break;

    default:
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}
