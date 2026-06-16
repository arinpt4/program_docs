/*
Unit 1: Team Coordination - main(), integration, and testing
Name: Arin Thakkar
*/

#include <iostream>
#include "FileIO/FileIO.h"
#include "Screen Output/ScreenManager.h"
#include "Screen Output/Stack.h"

void printInfo();

int main() {
    HashTable<Song>* hash = nullptr;
    BST bst;
    Stack undoStack;
    std::string inputFileName = "inputFile.txt";

    // 1. Print Info
    printInfo();
    
    // 2. Load Data
    readSongData(hash, bst, inputFileName);

    // 3. Launch the Menu Loop (from ScreenManager)
    if (hash != nullptr) {
        runMenu(*hash, bst, undoStack);
    } else {
        std::cout << "Failed to initialize the system. Exiting.\n";
    }

    // 4. Clean up
    delete hash;
    return 0;
}

void printInfo(){
    std::cout << "*******************************************************************************************************" << std::endl;
    std::cout << "Welcome to the Song Player! The Song Player allows you to insert, delete, and view songs within a file." << std::endl;
    std::cout << "*******************************************************************************************************" << std::endl;
}