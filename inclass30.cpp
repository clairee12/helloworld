#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


int noInputNoOutput(int num);

bool isPrime(int);

int main(){
  cout << 'the divisors of ' << num << 'are: ';

  for (int k = 1; k<= num/2; k++){
    if (num % k == 0){
      //cout << k << ', ';
      //count++;
      return false;
    
    }
  }
  cout << num << endl;
  return count + 1;
}
int main(){
  int numDivisors = noInputNoOutput(54);
  cout << 'There are' << numDivisors << 'divisors of 54.' << endl;

  numDivisors = noInputNoOutput(802);
  cout << 'There are' << numDivisors << 'divisors of 803' << endl;

  cout << 'Please enter an int num that you want to check if it is a prime';
  int number;
  cin >> number;

  if (isPrime(number))
    cout << number << 'is a prime number' << endl;
  else
    cout << number << 'is not a prime number' << endl;
  cout << number << (isPrime(number) ? ' is' : 'is not') << 'a prime number' << endl;
}



bool isPrime(int num){
  int step = (num %2 == 0) ? 1 : 2
  int k;
  for (k=2; k<= num/2; k += step){
    if (num % k == 0)
      return false;
  }
  return true;
}
//int noInputNoOutput(int num){
//    int count = 0;

//    for(int k = 1; k<= num/2; k++){
//        if (num % k == 0){
//            cout << k << ", ";
//            count++;
//        }
//    }    
//    cout << num << endl;

//    return count+1;
//}

//int main(){
//    noInputNoOutput(54);

    
    //cout << 'enter a number';
  //  int num;
    //cin >> num;

    //int step;
    //if (num%2==0)
      //  step = 1;
    //else
      //  step=2;
    
    //step = (num % 2 == 0) ? 1 : 2;
    

    //cout << 'the divisors of ' << num << 'are: ';
    //for (int i = 1; i <= num/2; i += step) {
      //  if (num % i == 0) {
            //cout << i << ',';
      //  }
    //cout << endl;
    //return 0;
//}