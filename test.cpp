#include <iostream>
using namespace std;

int main() {
	int i = 0;
	char arr[5] = { NULL };
	char arr1[5];
	char* source = arr;
	char* dest = arr1;

	memcpy(dest, source, sizeof(arr));
	
	return 0;
}
