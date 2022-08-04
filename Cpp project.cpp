// Simple Animation to Race a  Man from Start to Finish
//This is an interactive console project, where your choice of character
// (any letter from a to z) will appear to move funnily from start to finish line. If he finishes 
//the race within the specified counter (in our case, 1000000), then we print a particular message, else
// another message.

#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
int main (){
  srand(time(0));
  const int size=60;
  cout << "Enter a letter to begin \n ";
  char x; cin>> x;
  int position = size /2;
  while (true) {
    cout << "|START|" ;
    for (int i=0; i<size;i++) {
      if (i == position) 
        cout << x;
      else cout << " ";}
    cout << "|FINISH|" << endl;
    int move= rand()%3 - 1;
    position = position + move; 
    if (position <1) {cout << "You could not finish the race!" <<endl; break;}
    if (position >size-1) {cout << "Yay! You finished the race" << endl; break;}
    for(int sleep=0; sleep< 1000000 ; ++ sleep);
  }   
  return 0; 
}