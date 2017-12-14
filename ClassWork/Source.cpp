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
//	ifstream t("file.txt"); // вывод с файла
//	string str;
//
//	if (t.is_open()) {   // если файл открыт
//		while (getline(t, str)) { // вывести на экран данные с файла
//			cout << str;
//		}
//	}
//	t.close(); // закрытие файла
//
//	ofstream o("file.txt", ios::app); // создали выходной поток в файл
//	string s;  // строка в которую будем записывать
//	cin >> s; // ввод данных
//
//	while (getline(cin, s)) { // пока строка вводиться, getline будет брать его значения
//		if (s != "exit") {   // пишется до тех пор пока не встретит "exit"
//			o << s; // записываем в поток, автоматически записывается в файл
//		}
//		else break;  // обрываем и выходим
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
	std::ofstream file("out.xml"); // записывает в файл
	cereal::XMLOutputArchive archive(file);
	bool arr[] = { true, false };
	std::vector<int> vec = { 1, 2, 3, 4, 5 };
	archive(CEREAL_NVP(vec),
		arr);
}