#include "Palier.hpp"
#include <cstdlib>
#include <iostream>

int Palier::_paliers[PALIER_NIVEAU_MAX];
using namespace std;
Palier::Palier() {
  for (int i = 0 ; i < PALIER_NIVEAU_MAX ; ++i) {
    _paliers[i] = fibonacci(i) ;
  }
}

int Palier::fibonacci(int n) {
  int i;
  _paliers[0] = 1 ;
 _paliers[1] = 2;
  for(i = 0; i < PALIER_NIVEAU_MAX; i++)
    if(_paliers[i] == 0) break;
  while(i <= n) {
    _paliers[i] = _paliers[i-1] + _paliers[i-2];
    i++;
  }
  return _paliers[n];
}

int Palier::niveau(int exp) {
  for (int i = 0 ; i < PALIER_NIVEAU_MAX - 1 ; ++i) {
    if (exp < _paliers[i + 1] && exp >= _paliers[i]) {
      return i + 1 ;
    }
  }
  if(exp <= 0)
    return 0;
  return PALIER_NIVEAU_MAX  ;
}

Palier::~Palier() {
}

int main(){
  Palier::fibonacci(20);
  for(int i = 0 ; i<10 ; i++)
    cout << Palier::niveau(i*10000) << endl;
  return 0;
}
