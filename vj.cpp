
#include <iostream>
#include <string>
#include<sstream>
// Include the library that will allow you to convert from string to integer


int main() {

   int a,b,c,d;
  /*-------------------------------
  PART 1 - Reading multiple integers
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 1         =" << std::endl;
  std::cout <<              "=========================" << std::endl;
  
  
  
  std::cout<<"enter 3 digits "<<std::endl;
  // Ask the user for 3 integers as input
  std::cin >> a >> b >> c;// The user should enter all integers on the same line, pressing enter only once
   d=a*b*c;// Multiply the three integers





 std::cout<<"result of multiplication= "<<d<<std::endl; // Output the result of the multiplication



  /*-------------------------------
  PART 2 - Reading strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 2         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

 
  // Ask the user for three strings and output a haiku poem
  // http://examples.yourdictionary.com/examples-of-haiku-poems.html

std::string river;
std::string with;
std::string light;

std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
std::cout<<"  name of the river : ";
std:getline(std::cin,river);
std::cout<< " with whome : ";
std::getline(std::cin,with);
std::cout<<" the light of: ";
std::getline(std::cin,light);

std::cout<<" A summer "<<river<<" river being crossed "<<std::endl;
std::cout<<" how pleasing "<<std::endl;
std::cout<<" with "<<with<<" in my hand "<<std::endl;
std::cout<<" ligth of the "<<light<<"  "<<std::endl;













  /*-------------------------------
  PART 3 - Converting strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 3         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  std::string myNumber = "1234"; // Convert this string to an integer 
int myint ;
std::stringstream(myNumber)>>myint;

  
  std::cout<<myint << " :is an integer"; //Insert the integer before the text of this output

  return 0;
}











 