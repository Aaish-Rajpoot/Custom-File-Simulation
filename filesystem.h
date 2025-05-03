#ifndef FILESYSTEM_H
#define FILESYSTEM_H
#include <string>
#include <vector>
using namespace std;

class File {
public:
    string name;
    int size;
    File(string n, int s);
};

class Directory {
public:
    string name;
    vector<File> files;
    Directory(string n);
    void addFile(string name, int size);
    void listFiles();
};

#endif
#pragma once
