#ifndef ICT_TOOLS_H__
#define ICT_TOOLS_H__
namespace ict {

   void keybFlush();
   int getStr(char* str, int maxlen);
   int getInt();
   double getDouble();
   int getLimInt(int lowerLimit, int upperLimit);
   double getLimDbl(double lowerLimit, double upperLimit);
   int yes();
}
#endif