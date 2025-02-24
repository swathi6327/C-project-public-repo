#include <stdio.h>
#include <string.h>

void rev(char* s) {

    // Initialize l and r pointers
    int l = 0;
    int r = strlen(s) - 1;
    char t;

    // Swap characters till l and r meet
    while (l < r) {
      
        // Swap characters
        t = s[l];
        s[l] = s[r];
        s[r] = t;

        // Move pointers towards each other
        l++;
        r--;
    }
}

int main() {
    char s[100] = "abcde";
	
  	// Reversing s
    rev(s);
  
    printf("%s", s);
    return 0;
}
