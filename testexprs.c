int f(int a, int b) {
    if (10<10) {
        return 1;
    }
    if (10>10) {
        return 2;
    }
    if (10>=11) {
        return 3;
    }
    if (10<=9) {
        return 4;
    }
    if (10==9) {
        return 5;
    }
    if (0 && 1) {
        return 6;
    }
    if (1 && 0) {
        return 7;
    }
    if (0 || 0) {
        return 8;
    }
    if (0!=0) {
        return 9;
    }
    if ((10-9) != 1) {
        return 10;
    }
    if ((10+9) != 19) {
        return 11;
    }
    if ((3 << 1) != 6) {
        return 12;
    }
    if ((9 >> 1) != 4) {
        return 13;
    }
    if ((9 & 1) != 1) {
        return 14;
    }
    if ((9 | 3) != 11) {
        return 15;
    }
    if ((5 * 4) != 20) {
        return 16;
    }
    if ((20 / 5) != 4) {
        return 17;
    }
    if ((20 % 3) != 2) {
        return 18;
    }
    if ((9 ^ 3) != 10) {
        return 19;
    }

    int x;
    x+= (2 & 3);
    x+= (5 | 0);
    x+= (9 == 9);
    x+= (9 != 8);
    x+= (9>8);
    x+= (9<10);
    x+= (9>=9);
    x+= (9<=9);
    if (x!=8) {
        return 20+x;
    }
 
   return 0;
}


if ((9 & 1) != 1) {
    return 14;
}
if ((9 | 3) != 11) {
    return 15;
}
if ((5 * 4) != 20) {
    return 16;
}
if ((20 / 5) != 4) {
    return 17;
}
if ((20 % 3) != 2) {
    return 18;
}
if ((9 ^ 3) != 10) {
    return 19;
}


int f(int a, int b) {
    int x;
    x+= (2 & 3);
    x+= (5 | 0);
    x+= (9 == 9);
    x+= (9 != 8);
    x+= (9>8);
    x+= (9<10);
    x+= (9>=9);
    x+= (9<=9);
    if (x!=8) {
        return 20;
    }
}
