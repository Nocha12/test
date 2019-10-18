#include <iostream>
#include <vector>

using namespace std;

int main()
{
   string operators[4] = {"plus", "minus", "times", "divided by"};
   string op;
   double operands[2];

   cin >> operands[0] >> op;
   if(op == "divided")
       cin >> op >> operands[1];
   else
       cin >> operands[1];

   if(op == operators[0])
      cout << operands[0] << " " << op << " " << operands[1] << " is " << operands[0] + operands[1];
   else if(op == operators[1])
      cout << operands[0] << " " << op << " " << operands[1] << " is " << operands[0] - operands[1];
   else if(op == operators[2])
      cout << operands[0] << " " << op << " " << operands[1] << " is " << operands[0] * operands[1];
   else
      cout << operands[0] << " " << operators[3] << " " << operands[1] << " is " << operands[0] / operands[1];
   return 0;
}
