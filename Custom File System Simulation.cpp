#include "filesystem.h"
#include <iostream>
using namespace std;

File::File(string n, int s) : name(n), size(s) {}

Directory::Directory(string n) : name(n) {}

void Directory::addFile(string name, int size) {
    files.emplace_back(name, size);
}

void Directory::listFiles() {
    cout << "Files in " << name << ":\n";
    for (auto& file : files) {
        cout << "- " << file.name << " (" << file.size << "KB)\n";
    }
}
