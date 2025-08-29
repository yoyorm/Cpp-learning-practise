#include<iostream>
using namespace std;

//编写一个box结构
// 然后编写两个函数，一个负责传递box的地址并将volume成员计算出来
//另一个函数按值传递box结构，并且显示每个成员的值

struct box
{
	char maker[40];
	float height;
	float weight;
	float length;
	float volume;
};



void show_box(box x);
void volume_box(box* x);

int main()
{
	box initial;
	box* pointer = &initial;
	cout << "Enter the maker of the Box:";
	cin >> initial.maker;
	cout << "Enter the height,weight,length of the Box:";
	cin >> initial.height;
	cin >> initial.weight;
	cin >> initial.length;
	volume_box(pointer);
	show_box(initial);

}

void show_box(box x)
{
	cout << endl;
	cout << "Maker:\t" << x.maker<<endl;
	cout << "Height:\t" << x.height << endl;
	cout << "Weight:\t" << x.weight << endl;
	cout << "Length:\t" << x.length << endl;
	cout << "Volume:\t" << x.volume << endl;
}

void volume_box(box* x)
{
	x->volume = x->height * x->length * x->weight;
}