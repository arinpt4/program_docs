# Music Player Data Management System

This program is a C++ music management system designed to store and manage song data using advanced data structures. It provides efficient searching, sorted display, and undo capabilities.

## Features

1. Search for a Song: Quickly find song details using a unique Song ID via a Hash Table.
2. Sorted Display: View all songs sorted by their ID using a Binary Search Tree (BST).
3. Undo Deletion: Restore the most recently deleted song using a Stack.
4. Data Persistence: Save the current state of the library to a file for future use.

## Data Structures Used

1. Hash Table: Used for fast O(1) average case search operations. It handles collisions using linear probing and includes logic for automatic resizing (rehashing).
2. Binary Search Tree (BST): Used to maintain an ordered collection of songs by their ID, allowing for sorted data output.
3. Stack: Used to implement the undo functionality by storing deleted song objects in a Last-In, First-Out (LIFO) order.

## How to Compile and Run

To compile the program, use a C++ compiler such as g++. Run the following command from the root of the project directory:

g++ -o app main.cpp Song.cpp BST/BST.cpp FileIO/FileIO.cpp "Screen Output/ScreenManager.cpp" -I. -I"Screen Output" -IBST -IFileIO

After compiling, run the executable:

./app

## File Requirements

The program expects an "inputFile.txt" in the project directory. The data should be formatted as follows:
SongID; Song Name; Artist Name; Length; Year

Example:
NwoUe; just forget; Force of Nature; 3:55; 2004

## Menu Options

- S: Search for a Song by ID.
- P: Print all songs sorted by ID.
- D: Delete a song (simulated in menu, adds to undo stack).
- U: Undo the last deletion.
- F: Save data to file (clears the undo stack).
- Q: Quit the program.
- T: (Hidden) Display the internal structure of the BST as an indented tree.
