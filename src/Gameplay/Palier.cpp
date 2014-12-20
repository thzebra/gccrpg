#include "Palier.hpp"

Palier::Palier() {
  for (int i = 0 ; i < PALIER_NIVEAU_MAX ; ++i) {
    _paliers[i] = fibonacci(i) ;
  }
}

int Palier::fibonacci(int n) {
  if (n <= 0) {
    return 0 ;
  }
  int valeurs[n + 1] ;
  valeurs[0] = 0 ;
  valeurs[1] = 1 ;
  for (int i = 2 ; i <= n ; ++i) {
    valeurs[i] = valeurs[i - 1] + valeurs[i - 2] ;
  }
  return valeurs[n] ;
}

int Palier::niveau(int exp) {
  for (int i = 0 ; i < PALIER_NIVEAU_MAX - 1 ; ++i) {
    if (exp < valeurs[i + 1] && exp >= valeurs[i]) {
      return i + 1 ;
    }
  }
  return PALIER_NIVEAU_MAX ;
}

Palier::~Palier() {
  delete[] _paliers ;
}
