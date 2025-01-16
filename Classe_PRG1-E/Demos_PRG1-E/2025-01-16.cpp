#include <iostream>
#include <cstdlib>
#include <vector>
#include <exception>

using namespace std;

class Pile {
public:
   Pile() : index(0) {};

   void push(int val) { data[index] = val; ++index;}
//   int  pop()         { --index; return data[index]; }

   int  top()         { if (index == 0)
                           throw std::invalid_argument("pile vide");
                        return data[index-1];
                     }
   void  pop()         { if (index == 0)
                           throw std::invalid_argument("pile vide");
                        --index; }

private:
   size_t index;
   vector<int> data;
};

//------------------------------------------------------------
int main() {

}