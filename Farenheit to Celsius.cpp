#include <iostream>

int main() {
  
  std::cout << "Enter the temperature in Farenheit:";
  double tempf;
  double tempc;
  
  std::cin >> tempf ;
  
  tempc = (tempf - 32) / 1.8;
  
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
  
}
