#pragma once
#include <iostream>
#include <map>
#include <vector>

using namespace std;

class MessageBook{
public:
    vector<int> vp;
    MessageBook();
    ~MessageBook();
    void AddMessage(int number, const string& message);
    void DeleteMessage(int number);
    vector<int> GetNumbers();
    const string& GetMessage(int number);
    
private:
    map<int, string> messages_;
};


