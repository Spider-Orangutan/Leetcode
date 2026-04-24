int furthestDistanceFromOrigin(char* moves) {
    int diff = 0, _ = 0;
    while (*moves){
            if (*moves == 'L') diff++;
            else if (*moves == 'R') diff--;
            else _++;
            *moves++;
    }
    return _+abs(diff);
}
