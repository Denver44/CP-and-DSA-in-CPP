
// ******************************* CURRENT DATE TIME MONTH AND YEAR *************************************//
// #include <iostream>
// #include <ctime> // this library is made up for the time and date .
// using namespace std;

// int main()
// {

//   time_t currenttime;                  // here the time_t is data type with variable name current time.
//   time(&currenttime);                  // using the time function we store the current time in it.
//   cout << ctime(&currenttime) << endl; // ctime it convert the time into the sting form so that human can read it.

//   return 0;
// }

//****************************************************************************************************************************//
// ******************************* CURRENT DATE TIME MONTH AND YEAR USING CHRONO LIBRARY *************************************//

// #include <iostream>
// #include <chrono> // this chrono library is used to print the current date day month year it doesnt include std in it so we have to use namespace std.
// #include <ctime>
// using namespace std;

// int main()

// {
//   //***************** WITH USING NAMESPACE STD  *************************///
//   auto currentime = chrono::system_clock::to_time_t(chrono::system_clock::now());
//   cout << ctime(&currentime);
//   //***************** WITHOUT USING NAMESPACE STD *************************///
//   // auto currentime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
//   // std::cout << ctime(&currentime);

//   return 0;
// }

//**********************************************************************************************************************************//
//*********************************** USING CHRONO WE FIND THE TIME ELPASED OF FUNCTION********************************************//
#include <iostream>
#include <chrono> // this chrono library is used to print the current date day month year it doesnt include std in it so we have to use namespace std.
#include <ctime>
using namespace std;

int main()

{

  chrono::time_point<chrono::system_clock> start, end;
  start = chrono::system_clock::now();
  end = chrono::system_clock::now();

  chrono ::duration<double> elapsed_seconds = end - start;
  time_t end_time = chrono::system_clock::to_time_t(end);
  cout << "finished computation at " << ctime(&end_time)
       << "elapsed time: " << elapsed_seconds.count() << "s\n";

  return 0;
}