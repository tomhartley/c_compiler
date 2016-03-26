#ifndef c_tokens_hpp
#define c_tokens_hpp

#include <string>

using namespace std;

class RawToken {
public:
    int lineNum;
    string sourceFile;
	void setDetails(int lineNum, const char * sourceFile);
};

class RawInteger : public RawToken {
public:
    long long val;
	RawInteger(const char *rawInt);
};

class RawKeyword : public RawToken {
public:
    string keywordStr;
	RawKeyword(const char *keywd);
};

class RawOperator : public RawToken {
public:
    string operatorStr;
	string operatorID;
	RawOperator(const char * opID, const char * opStr);
};


class RawIdentifier : public RawToken {
public:
    string idenStr;
	RawIdentifier(const char *iden);
};



#endif