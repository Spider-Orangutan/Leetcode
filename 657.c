bool judgeCircle(char* moves) {
    int v = 0, h = 0;

    while (*moves) {
        v += (*moves == 'U') - (*moves == 'D');
        h += (*moves == 'R') - (*moves == 'L');
        moves++;
    }

    return (v == 0 && h == 0);
}
