#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool haakjes_OK(char expr[]){
  stack<char> s;
  char a, b, c;

      for (int i=0; i<strlen(expr); i++)
      {
          if (expr[i]=='('||expr[i]=='['||expr[i]=='{')
          {
              s.push(expr[i]);
          }
          else
          {
              switch (expr[i])
              {
              case ')':
                  a = s.top();
                  s.pop();
                  if (a=='{'||a=='[')
                      cout<<"niet gelijk" << endl;
                  break;
              case '}':
                  b = s.top();
                  s.pop();
                  if (b=='('||b=='[')
                      cout<<"niet gelijk" << endl;
                  break;
              case ']':
                  c=s.top();
                  s.pop();
                  if (c=='('||c=='{')
                      cout<<"niet gelijk" << endl;
                  break;
              }
          }
      }
      if (s.empty())
          return true;
      else
          return false;
}

int main(){
/*Schrijf een logische functie haakjes_OK(s) die nagaat of de standaardstring s
een C++-opdracht of -codefragment bevat waarin de eventuele haakjes
(ronde, vierkante, accolades) goed staan.
Onderstel voor de eenvoud dat het codefragment geen constante C-string
(tussen dubbele aan- halingstekens) en geen commentaar bevat.
Zorg je er ook voor dat deze logische functie makkelijk uitbreidbaar is
voor nog andere soorten haakjes (bijvoorbeeld <>)?
Dat wil dus zeggen dat je geen if / else if / else if / ... / else- structuur
gebruikt als het ook zonder kan.
*/
    char expr[]="{()}[]";

    if(haakjes_OK(expr))
        cout<<"gelijk";
    else
        cout<<"niet gelijk";
    return 0;
}
