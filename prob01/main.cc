
/*
 Name: Joseph Eggers
 CWID: 885939488
 emial: joseph.eggers@csu.fullerton.edu
 8/26/21
*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

int main() {
  // prob1_part 2
  // Writing an output

  cout << "Welcome to Madlibs! \n";

  // Creating the list of variables
  string name;
  string emotion;
  string animal;
  int number;
  char grade;
  float percent;
  string myName;

  // User inputs

  cout << "Hello creator. Can you give me a name? ";
  cin >> name;
  cout << "Hello, " << name
       << ". My name is HAL 9000 \nI don't have emotions... \nWhat are you "
          "feeling? ";
  cin >> emotion;
  cout << "Wow! I wonder what " << emotion << " feels like \n";
  cout << "What kind of pet do you want? ";
  cin >> animal;
  cout << "Can you give me a number between 0 and 100. ";
  cin >> number;
  cout << "Please give me a letter grade for how you think I am doing. ";
  cin >> grade;

  // Proper Grammar Detector. If its a vowel for the grade, then the grade 'a'
  // is replaced with an 'an'

  if (grade == 'A' || grade == 'a') {
    cout << "Really, you're giveing me a " << grade
         << "!!! I think you can give me atleast an " << grade
         << "+ \nWhat is a number bwtween 0 and 100?";
  } else {
    cout << "Really, you're giveing me a " << grade
         << "!!! I think you can give me atleast a " << grade
         << "+ \nWhat is a number bwtween 0 and 100?";
  }
  cin >> percent;
  cout << "What is you actual name? \n";
  cin >> myName;
  // Madlibs
  /*
   removed "\n" in the middle of the paragraph
   changed percent cin to number variable
   added percent above. forgot to add user input
  */

  cout << "Dear " << name << ",\nI am " << emotion
       << " that I was not able to complete my homework on time. My pet "
       << animal << " ate my textbook, and I was only able to retrieve "
       << number << " pages from its jaws. I hope I can get at least a "
       << grade << " grade because I've done " << percent
       << "% of the work.\nSincerely,\n"
       << myName << "\n";

  return 0;
}
