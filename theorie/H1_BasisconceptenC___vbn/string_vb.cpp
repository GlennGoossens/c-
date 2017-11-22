#include <string>

int main() {
   std::string s = "hallo";
   for (int i = 0 ; i < s.size() ; i++)
      printf("%c",s[i]);
   s[1] = 'e';
   
   for (char c : s)
      printf("%c",c);
}


