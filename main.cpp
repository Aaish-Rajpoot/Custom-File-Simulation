#include "filesystem.h"
#include <iostream>
using namespace std;

int main() {
    Directory dir("MyDocs");
    dir.addFile("resume.pdf", 120);
    dir.addFile("project.cpp", 80);
    dir.listFiles();
    return 0;
}
