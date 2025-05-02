#include <stdio.h>
#include <string.h>

void reverse(char s[]);

int main() {
    char s[100];
    printf("Enter a String: ");
    fgets(s, 100, stdin);
    s[strcspn(s, "\n")] = '\0';  
    reverse(s);
    printf("Reversed String: %s\n", s);
    return 0;
}

void reverse(char s[]) {
    int len = strlen(s); 

    for (int i = 0; i < len / 2; i++) {
        char temp = s[i];
        s[i] = s[len - 1 - i];
        
        s[len - 1 - i] = temp;
    }
}
