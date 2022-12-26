#ifndef Huffman_h
#define Huffman_h
#include "LinkedList.h"
#include <string>
#include <fstream>

class encode
{
	List l;
	string text;
	string code;
	L_NODE *tree;

public:
	// constructor
	encode(string m = "");
	// load the data from file to tree
	void encodeText(string filename = "editior.txt");
	// decode the binary to the paragraph
	string decode(string filename = "compressedFile.txt");

private:
	// load the data from file
	void LoadTextFromFile(string filename = "editior.txt");
	// save the data paragraph ton file
	void saveToFile(string filename = "compressedFile.txt", int *arr = NULL, int n = 0);
	// this function generate codeusing any traversal
	void GenerateCode();
	// this generate code code and make code using the for the same purpose
	// this function generate codeusing any traversal
	void MakeCode(L_NODE *root, int arr[], int top, char search);
	// to checkl leaf or not
	int isLeaf(L_NODE *root);
};

#endif // !Huffman_h
