#include <iostream>
#include <cstdlib>
#include <vector>
#include <exception>

#include "Container_G.hpp"

using namespace std;

int main() {
   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::Container()"          << endl;
   cout << "-------------------------------------" << endl;
   Container<int, 10> c1;

   c1.show_details();
   c1.show_content();
   cout << c1 << endl;
   cout << endl;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::Container(it1, it2)"  << endl;
   cout << "-------------------------------------" << endl;
   vector v {1, 2, 3};
   Container<int, 5>c2 (v.cbegin(), v.cend());

   c2.show_details();
   c2.show_content();
   cout << c2 << endl;
   cout << endl;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::container(other)"     << endl;
   cout << "-------------------------------------" << endl;
   c2.show_details();
   Container<int, 10> c3(c2);

   c3.show_content();
   cout << c3 << endl;
   cout << endl;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::back()"               << endl;
   cout << "-------------------------------------" << endl;
   c3.show_content();
   c3.back() = 8;
   c3.show_content();
   c3.back() = 3;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::front()"              << endl;
   cout << "-------------------------------------" << endl;
   c3.show_content();
   c3.front() = 8;
   c3.show_content();
   c3.front() = 3;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::push_back()"          << endl;
   cout << "-------------------------------------" << endl;
   Container<char, 4> c4;
   c4.show_content();
   c4.push_back('a');
   c4.push_back('b');
   c4.push_back('c');

   c4.show_content();
   cout << c4 << endl;
   cout << endl;

   try {
      c4.push_back('d');
      c4.push_back('e');
      cout << endl;
   }
   catch (std::logic_error e) {
      cout << "EXCEPTION " << e.what() << endl;
   }
   cout << endl;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::push_front()"         << endl;
   cout << "-------------------------------------" << endl;
   Container<char, 8> c5(c4);
   try {
      c5.push_front('A');
      c5.push_front('B');
      c5.push_front('C');

      c5.show_content();
      cout << c5 << endl;
      cout << endl;

      c5.push_back('D');
      c5.push_back('E');
      cout << endl;
   }
   catch (std::logic_error e) {
      cout << "EXCEPTION " << e.what() << endl;
   }
   cout << endl;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::pop_back()"           << endl;
   cout << "-------------------------------------" << endl;
   Container c6(c4);
   try {
      c6.pop_back();
      c6.pop_back();

      c6.show_content();
      cout << c6 << endl;
      cout << endl;

      c6.pop_back();
      c6.pop_back();
      c6.pop_back();
      cout << endl;
   }
   catch (std::logic_error e) {
      cout << "EXCEPTION " << e.what() << endl;
   }
   cout << endl;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::pop_front()"          << endl;
   cout << "-------------------------------------" << endl;
   Container c7(c4);
   try {
      c7.pop_front();
      c7.pop_front();

      c7.show_content();
      cout << c7 << endl;
      cout << endl;

      c7.pop_front();
      c7.pop_front();
      c7.pop_front();
      cout << endl;
   }
   catch (std::logic_error e) {
      cout << "EXCEPTION " << e.what() << endl;
   }
   cout << endl;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::at(..)"               << endl;
   cout << "-------------------------------------" << endl;
   Container c8(c4);

   try {
      c8.pop_back();
      c8.pop_back();
      c8.show_content();

      cout << "c8.at(1) : " << c8.at(1) << endl;
      cout << "c8.at(1) = 'G';" << endl;
      c8.at(1) = 'G';
      cout << endl;

      c8.show_content();
      cout << c8 << endl;

      cout << "c8.at(2)  : " << c8.at(2);
   }
   catch (std::logic_error e) {
      cout << "EXCEPTION " << e.what() << endl;
   }
   cout << endl;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::iterator"             << endl;
   cout << "-------------------------------------" << endl;
   c3.show_content();
   cout << c3 << endl;
   cout << endl;
   cout << "*c3.begin() : " << *c3.begin() << endl;
   cout << endl;
   for (auto it=c3.begin(); it!=c3.end(); ++it)
      cout << *it << " ";
   cout << endl;
   cout << endl;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::operator << (..)"     << endl;
   cout << "-------------------------------------" << endl;
   c3.show_content();
   cout << c3 << endl;
   cout << endl;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::operator == (..)"     << endl;
   cout << "-------------------------------------" << endl;
   Container<int, 5> c_123;
   c_123.push_back(1).push_back(1).push_back(2).push_back(3).pop_front();

   Container<int, 5> c123;
   c123.push_back(1).push_back(2).push_back(3);

   Container<int, 5> c12;
   c12.push_back(1).push_back(2);

   Container<int, 5> c113;
   c113.push_back(1).push_back(1).push_back(3);

   cout << c_123 <<    " == " << c123 << "  "      << boolalpha << (c_123 == c123) << endl;
   cout << c123  <<    " == " << c12  << "     "   << boolalpha << (c123  == c12 ) << endl;
   cout << c12   << "    == " << c123 << "  "      << boolalpha << (c12   == c123) << endl;
   cout << c123  <<    " == " << c113 << "  "      << boolalpha << (c123  == c113) << endl;
   cout << c113  <<    " == " << c123 << "  "      << boolalpha << (c113  == c123) << endl;
   cout << endl;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::operator < (..)"      << endl;
   cout << "-------------------------------------" << endl;
   cout << c_123 <<    " <  " << c123 << "  "      << boolalpha << (c_123 <  c123) << endl;
   cout << c123  <<    " <  " << c12  << "     "   << boolalpha << (c123  <  c12 ) << endl;
   cout << c12   << "    <  " << c123 << "  "      << boolalpha << (c12   <  c123) << endl;
   cout << c123  <<    " <  " << c113 << "  "      << boolalpha << (c123  <  c113) << endl;
   cout << c113  <<    " <  " << c123 << "  "      << boolalpha << (c113  <  c123) << endl;
   cout << endl;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::operator > (..)"      << endl;
   cout << "-------------------------------------" << endl;
   cout << c_123 <<    " >  " << c123 << "  "      << boolalpha << (c_123 >  c123) << endl;
   cout << c123  <<    " >  " << c12  << "     "   << boolalpha << (c123  >  c12 ) << endl;
   cout << c12   << "    >  " << c123 << "  "      << boolalpha << (c12   >  c123) << endl;
   cout << c123  <<    " >  " << c113 << "  "      << boolalpha << (c123  >  c113) << endl;
   cout << c113  <<    " >  " << c123 << "  "      << boolalpha << (c113  >  c123) << endl;
   cout << endl;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::operator <= (..)"     << endl;
   cout << "-------------------------------------" << endl;
   cout << c_123 <<    " <= " << c123 << "  "      << boolalpha << (c_123 <=  c123) << endl;
   cout << c123  <<    " <= " << c12  << "     "   << boolalpha << (c123  <=  c12 ) << endl;
   cout << c12   << "    <= " << c123 << "  "      << boolalpha << (c12   <=  c123) << endl;
   cout << c123  <<    " <= " << c113 << "  "      << boolalpha << (c123  <=  c113) << endl;
   cout << c113  <<    " <= " << c123 << "  "      << boolalpha << (c113  <=  c123) << endl;
   cout << endl;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::operator >= (..)"     << endl;
   cout << "-------------------------------------" << endl;
   cout << c_123 <<    " >= " << c123 << "  "      << boolalpha << (c_123 >=  c123) << endl;
   cout << c123  <<    " >= " << c12  << "     "   << boolalpha << (c123  >=  c12 ) << endl;
   cout << c12   << "    >= " << c123 << "  "      << boolalpha << (c12   >=  c123) << endl;
   cout << c123  <<    " >= " << c113 << "  "      << boolalpha << (c123  >=  c113) << endl;
   cout << c113  <<    " >= " << c123 << "  "      << boolalpha << (c113  >=  c123) << endl;
   cout << endl;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::full()"               << endl;
   cout << "-------------------------------------" << endl;
   Container<int, 3> c13;
   int val=0;
   while (not c13.full())
      c13.push_back(++val);

   c13.show_details();
   c13.show_content();
   cout << c13 << endl;
   cout << endl;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::empty()"              << endl;
   cout << "-------------------------------------" << endl;
   while (not c13.empty()) {
      c13.pop_front();
   }

   c13.show_details();
   c13.show_content();
   cout << c13 << endl;
   cout << endl;

   return EXIT_SUCCESS;
}