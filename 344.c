// Normal version

void reverseString(char* s, int sSize) {
    int temp = 0;
    for (int i=0; i<sSize/2; i++){
        temp = s[i];
        s[i] = s[sSize-1-i];
        s[sSize-1-i] = temp;
    }
}

// Pointer version
void reverseString(char* s, int sSize) {
    char* left = s;
    char* right = s + sSize - 1;
    char temp;

    while (left < right) {
        temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
}
