bool isAnagram(char* s, char* t) {
    int freq[26] = {0};

    while (*s){
        freq[*s - 'a']++;
        s++;
    }
    while (*t){
        freq[*t - 'a']--;
        t++;
    }
    for (int i = 0; i <26; i++){
        if (freq[i] != 0) return false;
    }
    return true;
}
