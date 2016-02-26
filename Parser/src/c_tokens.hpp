#include <string>

class RawToken {
public:
    int lineNum;
    string sourceFile;
};

class RawInteger : RawToken {
public:
    int val;
};

class RawKeyword : RawToken {
public:
    string keywordStr;
};

class RawOperator : RawToken {
public:
    string operatorStr;
};


class RawIdentifier : RawToken {
public:
    string idenStr;
}