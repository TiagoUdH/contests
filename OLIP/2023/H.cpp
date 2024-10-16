#include <iostream>
#include <cstdlib>

using namespace std;

int dateToInt(int m, int d, int y)
{
  return 1461 * (y + 4800 + (m - 14) / 12) / 4 +
         367 * (m - 2 - (m - 14) / 12 * 12) / 12 -
         3 * ((y + 4900 + (m - 14) / 12) / 100) / 4 +
         d - 32075;
}

int main()
{
  int d, m, jd;

  cin >> d;
  cin.ignore();
  cin >> m;

  jd = dateToInt(m, d, 0);

  if (jd <= 1721078)
  {
    cout << "capricornio" << endl;
  }
  else if (jd <= 1721108)
  {
    cout << "aquario" << endl;
  }
  else if (jd <= 1721139)
  {
    cout << "peixes" << endl;
  }
  else if (jd <= 1721170)
  {
    cout << "aries" << endl;
  }
  else if (jd <= 1721200)
  {
    cout << "touro" << endl;
  }
  else if (jd <= 1721231)
  {
    cout << "gemeos" << endl;
  }
  else if (jd <= 1721263)
  {
    cout << "cancer" << endl;
  }
  else if (jd <= 1721294)
  {
    cout << "leao" << endl;
  }
  else if (jd <= 1721325)
  {
    cout << "virgem" << endl;
  }
  else if (jd <= 1721355)
  {
    cout << "libra" << endl;
  }
  else if (jd <= 1721385)
  {
    cout << "escorpiao" << endl;
  }
  else if (jd <= 1721415)
  {
    cout << "sagitario" << endl;
  }
  else
  {
    cout << "capricornio" << endl;
  }

  return 0;
}
