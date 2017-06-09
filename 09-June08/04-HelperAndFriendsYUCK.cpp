

#include <iostream>
using namespace std;
class Container {
   int m_value;
public:
   Container(int value =0) {
       set(value);
   }

   Container& operator++() {
      m_value++;
      return *this;
   }

   const Container& operator+=(const Container& RO) {
      m_value += RO.m_value;
      return *this;
   }
   void set(int value) {
      m_value = value;
   }
   ostream& display(ostream& ostr=cout)const {
      ostr << m_value;
      return ostr;
   }

   Container operator+(const Container& RO)const {
      Container res = *this;
      res += RO;
      return res;
   }
   friend istream& operator >> (istream& ostr, Container& RO);
};

ostream& operator<<(ostream& ostr, const Container& RO) {
   return RO.display(ostr);
}

istream& operator>>(istream& istr, Container& RO) {
   istr >> RO.m_value;
   return istr;
}

int main() {
   Container C(10), D(5), E, F;
   cout << "Enter the value of the Container: ";
   cin >> C;
   cout << C << endl;
   //C.operator++(); //++C;
   F = ++C;
   cout << C << endl;
   cout << F << endl;
   cout << endl;
   //C.operator+=(D); // C += D;
   F = C += D;
   cout << C << endl;
   cout << F << endl;
   //E = C.operator+( D);
   E = C + D;
   cout << E << endl;
   return 0;
}


