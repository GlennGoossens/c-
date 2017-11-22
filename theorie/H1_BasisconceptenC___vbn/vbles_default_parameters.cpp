#include <iostream>

void print_lijn(char c='-', int n=80);

/*
void print_lijn(char c) {
	print_lijn(c,80);
}

void print_lijn() {
	print_lijn('-', 80);
}
*/
int main() {
   print_lijn('*',20);
   print_lijn('$');
   print_lijn();
   print_lijn(15);
}

void print_lijn(char c, int n) {
	for (int i=0; i<n; i++)
	   printf("%c",c);
	printf("\n");
}


