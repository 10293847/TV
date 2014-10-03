#include <iostream>

using namespace std;


class TV
{
private:

  unsigned int channel;
  unsigned int volume;
  bool is_on;

public:

  TV();
  ~TV();

  friend ostream &operator<<(ostream &b, const TV &a);

  void receive(int a);
};


class TV_Pilot
{
public:

  TV_Pilot();
  ~TV_Pilot();

  int send(char x);
};
