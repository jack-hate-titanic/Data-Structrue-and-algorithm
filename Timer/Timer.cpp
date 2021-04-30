#include <time.h>
#include <string>
#include <cmath>
#include <iostream>
using namespace std;
class Timer
{
  clock_t startT, endT;
  string label;
  bool isEnd;

public:
  Timer(string name = "Time")
  {
    startT = clock();
    label = name;
    isEnd = false;
  }

  ~Timer()
  {
    if (!isEnd)
    {
      endT = clock();
      double endTime = (double)(endT - startT) / 1000;
      cout << label << ":" << endTime << "s" << endl;
    };
  };
};
