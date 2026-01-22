char* firstPalindrome(char** words, int wordsSize) {
    for (int i=0; i<wordsSize; i++){
        int left = 0;
        int right = strlen(words[i])-1;
        bool palindrome = true;
        while (left<right){
            if (words[i][left] != words[i][right]){
                palindrome = false;
                break;
            }
            left++;
            right--;
        }
        if (palindrome) return words[i];
    }
    return "";
}
