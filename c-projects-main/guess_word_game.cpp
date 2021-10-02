#include <iostream>
#include <string.h>
#include <cstdlib>
#include <ctime>
using namespace std;



int main(){
int random_number;
string
words[]={"village","party","busy","dancing","planting","roots","problem","flooding","poor","farming","matter",
"minerals","gases","liquids","organisms","biomass","waste","sources","animal","production","choice", "seven",
"world","about","again", "heart", "pizza", "water", "happy","sixty","board", "month", "Angel", "death", "green", "music", "fifty",
"three", "party",
"piano", "Kelly", "mouth", "woman", "sugar", "amber", "dream", "apple", "laugh", "tiger", "faith", "earth",
"river", "money", "peace",
"forty","words", "smile", "abate", "house", "alone", "watch", "lemon", "South", "erica", "anime", "after", "santa",
"women", "admin",
"Jesus",
"stone","ability","absence","academy","account","accused","achieve","acquire","address","advance","adverse",
"advised","adviser",
"against","airline","airport","alcohol","alleged","already","analyst","ancient","another","anxiety","anxious","any",
"body","applied","arrange",
"arrival","article","assault"};
srand(time(NULL));
random_number=(rand()%100+1);
string guess_word=words[random_number];
cout<<"Guess The Word"<<endl;
for(int i=0; i<guess_word.length(); i++){
cout<<"-";
}
cout<<" \n The Word Consist Of "<<guess_word.length()<< " Dashes"<<endl;
string entrWord;
cout<<"\n Enter Your Guess Word"<<endl;
cin>>entrWord;for(int i=0; i<2; i++){
if(guess_word==entrWord){
cout<<"You Win"<<endl;
}
else if(guess_word!=entrWord){
cout<<"\n Try again"<<endl;
cin>>entrWord;
cout<<"\n You lose"<<endl;
}
}
return 0;
}
