#include <iostream>
#include <string>
#include <fstream>
#include <iostream>
#include <cereal/archives/xml.hpp>
#include <cereal/types/vector.hpp>
using namespace std;


//int main() {
//	setlocale(LC_ALL, "ru");
//
//	ifstream t("file.txt"); // ����� � �����
//	string str;
//
//	if (t.is_open()) {   // ���� ���� ������
//		while (getline(t, str)) { // ������� �� ����� ������ � �����
//			cout << str;
//		}
//	}
//	t.close(); // �������� �����
//
//	ofstream o("file.txt", ios::app); // ������� �������� ����� � ����
//	string s;  // ������ � ������� ����� ����������
//	cin >> s; // ���� ������
//
//	while (getline(cin, s)) { // ���� ������ ���������, getline ����� ����� ��� ��������
//		if (s != "exit") {   // ������� �� ��� ��� ���� �� �������� "exit"
//			o << s; // ���������� � �����, ������������� ������������ � ����
//		}
//		else break;  // �������� � �������
//	}
//	o.close();
//
//	system("pause");
//	return 0;
//}


//#include <cereal/types/unordered_map.hpp>
//#include <cereal/types/memory.hpp>
//#include <cereal/archives/binary.hpp>
//#include <fstream>
//
//struct MyRecord
//{
//	uint8_t x, y;
//	float z;
//
//	template <class Archive>
//	void serialize(Archive & ar)
//	{
//		ar(x, y, z);
//	}
//};
//
//struct SomeData
//{
//	int32_t id;
//	std::shared_ptr<std::unordered_map<uint32_t, MyRecord>> data;
//
//	template <class Archive>
//	void save(Archive & ar) const
//	{
//		ar(data);
//	}
//
//	template <class Archive>
//	void load(Archive & ar)
//	{
//		static int32_t idGen = 0;
//		id = idGen++;
//		ar(data);
//	}
//};
//
//int main()
//{
//	std::ofstream os("out.cereal", std::ios::binary);
//	cereal::BinaryOutputArchive archive(os);
//
//	SomeData myData;
//	archive(myData);
//
//	return 0;
//}


//#include <iostream>
//#include <cereal/archives/json.hpp>
//#include <cereal/types/vector.hpp>
//
//int main()
//{
//	cereal::JSONOutputArchive archive(std::cout);
//	bool arr[] = { true, false };
//	std::vector<int> vec = { 1, 2, 3, 4, 5 };
//	archive(CEREAL_NVP(vec),
//		arr);
//}



int main()
{
	std::ofstream file("out.xml"); // ���������� � ����
	cereal::XMLOutputArchive archive(file);
	bool arr[] = { true, false };
	std::vector<int> vec = { 1, 2, 3, 4, 5 };
	archive(CEREAL_NVP(vec),
		arr);
}