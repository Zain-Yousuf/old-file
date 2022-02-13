#include <iostream>
#include <string>
using namespace std;


class player {
  public:
    void playerattributes() {
      cout << "He is zain \n" ;
    }
};
class zain : public player {
  public:
    void playerattributes () {
      cout << "He is good player in circket \n" ;
    }
};
class bilal : public player {
  public:
    void playerattributes() {
      cout << " My age is 24\n" ;
    }
};

int main(){
string attributes[4] ={"kindness", "fast runing", "fast", "good player"};
attributes[0] = "strong";
  cout << attributes[0];
  player myplayer;
  zain myzain;
  bilal mybilal;

  myplayer.playerattributes();
  myzain.playerattributes();
  mybilal.playerattributes();
  return 0;
}
