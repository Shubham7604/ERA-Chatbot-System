
/*
----------------------------------------------------------------------------
               Project title   : ERA(personal assistant)
               Made By         : SHUBHAM GHUGE
               Written in      : C++
               Started project : 1 march , 2022
               Platform        : Windows
               IDE used        : Code blocks
               Last Modified   : 01 june 2022
               Total Code      : 700+ Lines
 ----------------------------------------------------------------------------
*/



#ifndef ASSISTANT_H
#define ASSISTANT_H
using namespace std;

class assistant
{

   public:
              assistant();
              ~assistant();
         void greeting();
         void typing(string);
         void clock();
         void speak(string);

};

#endif // ASSISTANT_H
