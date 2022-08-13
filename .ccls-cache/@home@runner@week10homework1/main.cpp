#include <iostream>
#include <string>
using namespace std;

string changea(string changea1) {
  string a = changea1.substr(0,1);
  string b = changea1.substr(1, changea1.length()-2);
  string c = changea1.substr(changea1.length()-1, changea1.length());
  return c + b + a;
}

/*
make function for swapping first letter with last letter of

1: why do you need this function? To swap the first letter with the last letter
2: what are input parameters? input string
3: what are return? the now swapped string
4: whats the logic? swap the first letter with the last letter of the string,
then return the swapped string

// orginal
s = abfdasfdasfewq

// split into three parts
s_first=a
s_mid = bfdasfdasfew
s_last = q

// swap
return s_last + s_mid + s_first


a = first letter in  string
b = last letter in string
changea(a, b){
temp = a
a = b
b = temp
return
}

*/

/*

1. changea(str):
{
   exchange letter for first/last letter of string.
}

main(){

  1. input string
  2. call changea()
  3. print result
}

  */
int main() {
  string changea1, changea2;
  getline(cin, changea1);
  string v = changea(changea1);
  cout << v;
}