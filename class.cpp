#include <iostream>
#include "class.h"
using namespace std;

TV::TV()
{
  is_on = false;
  channel = 0;
  volume = 0;
  cout << "TV set delivered!" << endl;
}

TV::~TV()
{
}

ostream &operator<<(ostream &b, const TV &a)
{
  if (a.is_on == false)
  {
    return (b << "is_on:  " << a.is_on<< "\n");
  }

  else
    return (b << "is_on:  " << a.is_on << "  channel: " << a.channel << "  volume: " << a.volume<< "\n");
}


void TV::receive(int a)
{
  if(is_on == false && a == 1000)
  {
    is_on = true;
  }

  else if (is_on == true && a == 1000)
  {
    is_on = false;
  }

  else if(a == 1111 && is_on == true)
  {
    if (channel == 99) channel=0;
    else channel++;
  }

  else if(a == 2222 && is_on == true)
  {
    if (channel == 0) channel=99;
    else channel--;
  }

  else if(a == 3333 && is_on == true)
  {
    if (volume == 99) volume=99;
    else volume++;
  }

  else if(a == 4444 && is_on == true)
  {
    if (volume == 0) volume=0;
    else volume--;
  }
  else
  {
    cout << "error... no such option!\t";
  }
}


TV_Pilot::TV_Pilot()
{
  cout << "Remote control device delivered!" << endl;
}

TV_Pilot::~TV_Pilot()
{
}


int TV_Pilot::send(char x)
{
  if (x == '1') {return 1000;}
  else if (x == '2') {return 1111;}
  else if (x == '3') {return 2222;}
  else if (x == '4') {return 3333;}
  else if (x == '5') {return 4444;}
  else return 9999;
}
