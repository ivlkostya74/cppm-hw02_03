// cppm-hw02_03.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <Windows.h>
#include <iostream>
struct personalAdres {
	std::string contry;
	std::string city;
	std::string strit;
	int namberHouse;
	int apartmentNumber ;
	int postIndex;

};

void printCad (personalAdres* p){
	std::cout << "страна;"
		<< p ->contry << " \nгород:"
		<< p->city << "\nулица:"
		<< p->strit <<"\nдом номер: "
		<< p->namberHouse<<"\nквартира"
		<<p->apartmentNumber<<"\nиндекс"
		<<p->postIndex;
	return;
}
 void inputCard(personalAdres* p)
 {
	 std::cout << "страна;\n";
	 std::cin >> p->contry;
	 std::cout << "город:\n";
		 std::cin >> p->city;
		 std::cout << "улица:\n";
		 std::cin >> p->strit;
		 std::cout << "дом номер: \n";
		 std::cin >> p->namberHouse;
		 std::cout << "квартира:\n";
		 std::cin >> p->apartmentNumber;
		 std::cout << "индекс:\n";
		 std::cin >> p->postIndex;
		 return;
 }

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	personalAdres pers1;
	//personalAdres* p_pers1 = &pers1;
	personalAdres pers2;
	///personalAdres* p_pers2= &pers2;
	inputCard(&pers1);
	inputCard(&pers2);
	printCad(&pers1);
	std::cout << std::endl;
	std::cout << std::endl;
	printCad(&pers2);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
