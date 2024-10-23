#include <iostream>
#include <vector>

using std::cout, std::endl, std::vector;

enum Color {red, orange, yellow, green};

struct Item {
	int space;
	int itemName;
};

class Box {
	public:
		int length;
		int width;
		int height;
		int volume;
		Color boxColor;
		vector<Item> items;
		Box(int l, int w, int h, Color c){
			length = l;
			width = w;
			height = h;
			volume = l * w * h;
			boxColor = c;
		}
	void addItem();
};

void Box::addItem(){
	// will check if item fits and then add a struct of the item
}

int main(){
	return 0;
}