#include <iostream>
#include <string>
#include <climits>
#include <cstdlib>

using namespace std;

#include "class.h"

int main()
{
    TV a;
    TV_Pilot b;
    char aaa = '0';


    while(aaa!= 'e')
    {
      system("clear");cout<<a;
      cout << "\n\nmenu:" << endl;
      cout << "\n1. turn_on_off" << endl;
      cout << "\n2. channel_change_plus" << endl;
      cout << "3. channel_change_minus" << endl;
      cout << "\n4. volume_change_plus" << endl;
      cout << "5. volume_change_minus" << endl;
      cout << "\ne. EXIT" << endl;
      cout << "\nchoose the option: ";
      cin >>aaa;

        a.receive(b.send(aaa));
    }
    cout << "\n\ngame over...\n\n";

return 0;
}
