int strStr(char* haystack, char* needle) {
    if (*needle == '\0') return 0;
    for (int i =0; haystack[i]; i++){
        int j = 0;
        while (haystack[i+j] && needle[j] && haystack[i+j] == needle[j]){
            j++;
        }
        if (needle[j] == '\0') return i;
    }
    return -1;
}

//Best solution
int strStr(char* haystack, char* needle) {
    int len1=strlen(haystack);
    int len2=strlen(needle);
    int count=0;
    for(int i=0;i<=len1-len2;i++){
        int j=0;
        while(j<len2 && haystack[i+j]==needle[j]){
            j++;
        }
        if(j==len2){
            return i;
        }
    }
    return -1;
}
