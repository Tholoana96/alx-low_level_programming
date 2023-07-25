#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 *main- generate random password for program
 *
 * Return: 0 success
 */

void generate_password(int length, char* password) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+[]{}|;:',.<>?";
    int charset_length = strlen(charset);

    srand(time(NULL));
    for (int i = 0; i < length - 1; i++) {
        password[i] = charset[rand() % charset_length];
    }
    password[length - 1] = '\0';
}

int main() {
    int password_length = 12; // Change this to the desired password length
    char random_password[password_length];
    
    generate_password(password_length, random_password);
    printf("Random password: %s\n", random_password);
    
    return 0;
}

