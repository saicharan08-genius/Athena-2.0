#include <vector>
#include <iostream>
#include <cmath>
#include <string>
#include <stdlib.h>
#include <ctime>
#include <stdio.h>

 using namespace std;

 
string input1;

string input2;

string input3;

int i;

vector <string> BadMoodString{"bad", "worse", "worst", "pathetic", "dirty", "harm", "harmed", "dirtiest",
    "dreadful", "divorced", "fired", "divorcing", "robbed", "killed",
    "did not like", "unpleasant", "unwelcome", "unfortunate",
    "unfavourable", "die", "died", "I lost", "injured", "we lost",
    "unlucky", "adverse", "Nasty", "Terrible", "no", "No", "Nope", "nope",
    "nah", "Nah", "worrisome", "Worrisome", "miserable", "Miserable"};
    
     string jokes[3]  = {"Q: What’s the difference between England and a tea bag? A: The tea bag stays in the cup longer.",
	 "Q: “How many policemen does it take to screw in a light bulb? A:None. It turned itself in",
	 "A:Knock, knock B: Who’s there? A: Lettuce. B: Lettuce who? A: Lettuce in, it’s cold out here."};
	  
    string quotes[3] = {" Your limitation—it’s only your imagination", 
	"Push yourself, because no one else is going to do it for you" , 
	"Sometimes later becomes never.Do it now"};
	
void chat ()
{
  
cin >> input1;
  
if (input1.find("hi") >= 0 || input1.find("Hi") >= 0 || input1.find("Hello") >= 0 || input1.find("hello") >= 0 || input1.find("hey") >= 0 || input1.find("Hey") >= 0)
{
      
cout << "Hi! I am Athena! How are you?" << endl;
      
cin >> input2;
  
for (i = 0; i <= 65; i++)
{

if (input2.find(BadMoodString[i]) >= 0)
{

cout <<"oh sad...would you mind hearing some jokes of motivation to soothe you..??";
	      
break;
	    
}
else
{
	      
cout << "Woah...ok...so, do you jokes, motivation....?";
	      
break;
	    
}
	
}
cin >> input3;
string check[7] = {"joke", "jokes" , "Joke", "Jokes" , "funny " ,"fun" , "enjoy"};
string check1[6] = {"motivat" , "inspir" , "stimulat" , "Motivat" , "Inspir" , "Stimulat"};
int b , c;
for(b = 0 ; b <= 7 ; b++){
	if(input3.find(check[b]) >= 0){
		int arrayNum = random() % 7;
		cout << jokes[arrayNum];
		break;
	}
}
for(c = 0 ; c <= 6 ; c++){
	if(input3.find(check1[c]) >= 0){
		int arrayNum1 = random() % 6;
		cout << quotes[arrayNum1];
		break;
	}
}

string commonQuestions[8] = {"What is your name" , "what is your name" ,
 "where do you live" , "Where do you live"
  , "what is your age" , "What is your age" ,
   "can you" , "Can you"};
   
   
string commonQuestionAnswers[4] = {"Athena" , "I do not know that....perhaps, the location where you are?" ,
 "sorry....tbh i dont have age like human do :) " ,
  "idk if i can do that...i will take a shot later :) :P "};
  
string inputNext1;

cin >> input3;

if(inputNext1.find(commonQuestions[0]) >= 0 || inputNext1.find(commonQuestions[1]) >= 0){
	cout << commonQuestionAnswers[0];
}
else if(inputNext1.find(commonQuestions[2]) >= 0 || inputNext1.find(commonQuestions[3]) >= 0){
	cout << commonQuestionAnswers[1];
}
else if(inputNext1.find(commonQuestions[4]) >= 0 || inputNext1.find(commonQuestions[5]) >=0){
	cout << commonQuestionAnswers[2];
}
else if(inputNext1.find(commonQuestions[6]) >= 0 || inputNext1.find(commonQuestions[7]) >= 0){
	cout << commonQuestionAnswers[3];
}
}
}

int main () 
{
chat();
}	
