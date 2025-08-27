#include<iostream>
#include<fstream>
#include<string>
#include<cctype>

using namespace std;
//读取文件中的捐款人数，人名和金额，创建动态结构数组，最后输出

struct list { string name; int num=0; };

int main()
{
	cout << "Enter the name of data file:\n";
	ifstream file;
	char filename[20];
	
	cin >> filename;
	file.open(filename);
	if (!file.is_open())
	{
		cout << "Could not open the file ! ! !";
		return 1;
	}



	//任务1，读取计算总共几个字符
	char word;
	int wordnum = 0;
	file.get(word);
	while (!file.eof())
	{
		if (isalpha(word))
			wordnum++;
		file.get(word);
	}
	cout << "total word: " << wordnum << " words.\n";
	file.close();
	file.open(filename);




	//任务2，存储，输出
	int people; 
	int count = 0;
	int grandcount = 0;
	file >> people;
	file.ignore();
	list* temp = new list[people];
	while (count < people && getline(file, temp[count].name) )//读取数据并储存
	{
		file >> temp[count].num;
		if (temp[count].num >= 10000)
		{
			grandcount++;
		}
		file.ignore();
		count++;
	}
	file.close();

	//for (int j = 0; j < people; j++)//测试数据可读
	//{
	//	cout << temp[j].name << endl;
	//	cout << temp[j].num << endl;
	//}


	list* grand = new list[grandcount];
	list* normal = new list[people-grandcount];
	int x = 0; int y = 0;
	for (int j = 0; j < people; j++)//记录重要投资者
	{
		
		if (temp[j].num >= 10000)
		{
			grand[x] = temp[j];
			x++;
		}
		else
		{
			normal[y] = temp[j];
			y++;
		}
	}
	cout << "\nThe grand patrons:\n";
	for (int j = 0; j < grandcount; j++)
	{
		cout << grand[j].name << "\t";
		cout << grand[j].num << endl;
	};
	cout << "\nThe patrons:\n";
	for (int j = 0; j < grandcount; j++)
	{
		cout << normal[j].name << "\t";
		cout << normal[j].num << endl;
	};
	delete[] temp;
	delete[] grand;
	delete[] normal;
	return 0;

	//遇到的问题：
	//数据文件最后多了一个回车空行，导致动态数组多读取了一个空行而越界，程序无法运行(已经解决，可增加while循环的条件以免getline额外读取)
	//删除动态空间的时候要注意new[]开辟的是数组，删除要用delete[]
	//别忘记写close（）关闭文件
}