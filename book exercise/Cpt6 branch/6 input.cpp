#include<iostream>
#include<fstream>
#include<string>
#include<cctype>

using namespace std;
//��ȡ�ļ��еľ�������������ͽ�������̬�ṹ���飬������

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



	//����1����ȡ�����ܹ������ַ�
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




	//����2���洢�����
	int people; 
	int count = 0;
	int grandcount = 0;
	file >> people;
	file.ignore();
	list* temp = new list[people];
	while (count < people && getline(file, temp[count].name) )//��ȡ���ݲ�����
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

	//for (int j = 0; j < people; j++)//�������ݿɶ�
	//{
	//	cout << temp[j].name << endl;
	//	cout << temp[j].num << endl;
	//}


	list* grand = new list[grandcount];
	list* normal = new list[people-grandcount];
	int x = 0; int y = 0;
	for (int j = 0; j < people; j++)//��¼��ҪͶ����
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

	//���������⣺
	//�����ļ�������һ���س����У����¶�̬������ȡ��һ�����ж�Խ�磬�����޷�����(�Ѿ������������whileѭ������������getline�����ȡ)
	//ɾ����̬�ռ��ʱ��Ҫע��new[]���ٵ������飬ɾ��Ҫ��delete[]
	//������дclose�����ر��ļ�
}