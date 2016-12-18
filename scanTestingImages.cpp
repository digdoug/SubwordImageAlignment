#include <iostream>
#include "scanTestingImages.h"

using namespace std;

scanTestingImages::scanTestingImages(){
}


void scanTestingImages::scanImage(string fileName){

	fstream fs;
	fs.open(fileName);
	stringstream ss;
	if (fs.is_open()){
		while(!fs.eof()){
			fs >> ss;
		}
	} else {
		cout << "file does not exist" << endl;
	}

	cout << ss;


}