#include <iostream>
using namespace std;

string x;
int ar[10] = { 10,20,30,40,50,60,70,80,90 };
short int num, ost, vic, res, pon;
string doll[4] = { "доллар", "доллара","долларов","надцать" };
string chisla[10] = { "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять", "десять" };
string desiatki[8] = { "двадцать", "тридцать", "сорок", "пятьдесят", "шестьдесят", "семьдесят", "восемьдесят", "девяносто" };
string sot[2] = { "сто", "тысяча" };
void edin()// начинаются с 20-ти
{
	if (ost == 0)
		cout << x << " " << doll[2] << endl;
	if (ost == 1)
		cout << x << " " << chisla[0] << " " << doll[0] << endl;
	if (ost == 2)
		cout << x << " " << chisla[1] << " " << doll[1] << endl;
	if (ost == 3)
		cout << x << " " << chisla[2] << " " << doll[1] << endl;
	if (ost == 4)
		cout << x << " " << chisla[3] << " " << doll[1] << endl;
	if (ost == 5)
		cout << x << " " << chisla[4] << " " << doll[2] << endl;
	if (ost == 6)
		cout << x << " " << chisla[5] << " " << doll[2] << endl;
	if (ost == 7)
		cout << x << " " << chisla[6] << " " << doll[2] << endl;
	if (ost == 8)
		cout << x << " " << chisla[7] << " " << doll[2] << endl;
	if (ost == 9)
		cout << x << " " << chisla[8] << " " << doll[2] << endl;
}
void desnad()
{
	if (ost == 0)
		cout << chisla[9] << " " << doll[2] << endl;
	if (ost == 1)
		cout << chisla[0] << doll[3] << " " << doll[2] << endl;
	if (ost == 2)
	{
		chisla[1].pop_back(); chisla[1].insert(2, "е");
		cout << chisla[1] << doll[3] << " " << doll[2] << endl;
	}
	if (ost == 3)
		cout << chisla[2] << doll[3] << " " << doll[2] << endl;
	if (ost == 4)
	{
		chisla[3].pop_back();
		cout << chisla[3] << doll[3] << " " << doll[2] << endl;
	}
	if (ost == 5)
	{
		chisla[4].pop_back();
		cout << chisla[4] << doll[3] << " " << doll[2] << endl;
	}
	if (ost == 6)
	{
		chisla[5].pop_back();
		cout << chisla[5] << doll[3] << " " << doll[2] << endl;
	}
	if (ost == 7)
	{
		chisla[6].pop_back();
		cout << chisla[6] << doll[3] << " " << doll[2] << endl;
	}
	if (ost == 8)
	{
		chisla[7].pop_back();
		cout << chisla[7] << doll[3] << " " << doll[2] << endl;
	}
	if (ost == 9)
	{
		chisla[8].pop_back();
		cout << chisla[8] << doll[3] << " " << doll[2] << endl;
	}
}
void smena()
{
	if (num >= 200)
	{
		chisla[1].pop_back();
		chisla[1].insert(2, "е");
		sot[0].pop_back();
		sot[0].insert(2, "и");
	}
	if (num >= 300)
	{
		sot[0].pop_back();
		sot[0].insert(2, "а");
	}
	if (num >= 400)
	{
		sot[0].pop_back();
		sot[0].insert(2, "а");
	}
	if (num >= 500)
	{
		sot[0].pop_back(); sot[0].pop_back();
		sot[0].insert(1, "о"); sot[0].insert(2, "т");
	}
	if (num >= 600)
	{
		sot[0].pop_back(); sot[0].pop_back();
		sot[0].insert(1, "о"); sot[0].insert(2, "т");
	}
	if (num >= 700)
	{
		sot[0].pop_back(); sot[0].pop_back();
		sot[0].insert(1, "о"); sot[0].insert(2, "т");
	}
	if (num >= 800)
	{
		sot[0].pop_back(); sot[0].pop_back();
		sot[0].insert(1, "о"); sot[0].insert(2, "т");
	}
	if (num >= 900)
	{
		sot[0].pop_back(); sot[0].pop_back();
		sot[0].insert(1, "о"); sot[0].insert(2, "т");
	}
	if (num >= 2000 && num < 5000)
	{
		sot[1].pop_back();
		sot[1].insert(5, "и");
	}
	if (num >= 5000)
		sot[1].pop_back();
}
void dlasot()
{
	string chisla[10] = { "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять", "десять" };
	if (ost == 0)
		cout << x << " " << doll[2] << endl;
	if (ost == 1)
		cout << x << " " << chisla[0] << " " << doll[0] << endl;
	if (ost == 2)
		cout << x << " " << chisla[1] << " " << doll[1]<< endl;
	if (ost == 3)
		cout << x << " " << chisla[2] << " " << doll[1] << endl;
	if (ost == 4)
		cout << x << " " << chisla[3] << " " << doll[1] << endl;
	if (ost == 5)
		cout << x << " " << chisla[4] << " " << doll[2] << endl;
	if (ost == 6)
		cout << x << " " << chisla[5] << " " << doll[2] << endl;
	if (ost == 7)
		cout << x << " " << chisla[6] << " " << doll[2] << endl;
	if (ost == 8)
		cout << x << " " << chisla[7] << " " << doll[2] << endl;
	if (ost == 9)
		cout << x << " " << chisla[8] << " " << doll[2] << endl;
}
void tis_ost()
{
	if (ost == 1)
	{
		x = chisla[0];
		cout << x << " " << doll[0] << endl;
	}
	if (ost == 2)
	{
		x = chisla[1];
		cout << x << " " << doll[1] << endl;
	}
	if (ost == 3)
	{
		x = chisla[2];
		cout << x << " " << doll[1] << endl;
	}
	if (ost == 4)
	{
		x = chisla[3];
		cout << x << " " << doll[1] << endl;
	}
	if (ost == 5)
	{
		x = chisla[4];
		cout << x << " " << doll[2] << endl;
	}
	if (ost == 6)
	{
		x = chisla[5];
		cout << x << " " << doll[2] << endl;
	}
	if (ost == 7)
	{
		x = chisla[6];
		cout << x << " " << doll[2] << endl;
	}
	if (ost == 8)
	{
		x = chisla[7];
		cout << x << " " << doll[2] << endl;
	}
	if (ost == 9)
	{
		x = chisla[8];
		cout << x << " " << doll[2] << endl;
	}
}
void sotni()
{
	if (res == 0)
	{
		tis_ost();
	}
	if (res == ar[0])
	{
		desnad();
	}
	if (res == ar[1])
	{
		x = desiatki[0];
		dlasot();
	}
	if (res == ar[2])
	{
		x = desiatki[1];
		dlasot();
	}
	if (res == ar[3])
	{
		x = desiatki[2];
		dlasot();
	}
	if (res == ar[4])
	{
		x = desiatki[3];
		dlasot();
	}
	if (res == ar[5])
	{
		x = desiatki[4];
		dlasot();
	}
	if (res == ar[6])
	{
		x = desiatki[5];
		dlasot();
	}
	if (res == ar[7])
	{
		x = desiatki[6];
		dlasot();
	}
	if (res == ar[8])
	{
		x = desiatki[7];
		dlasot();
	}
}
void tisiachi()
{
	int pon_pon[9] = { 100, 200, 300, 400, 500, 600, 700, 800, 900 };
	if (num >= (pon + pon_pon[0]) && num <= (pon + pon_pon[0] + 99))
	{
		cout << sot[0] << " ";

		res = vic - (pon + pon_pon[0]);
		if (num == pon + pon_pon[0])
			cout << doll[2] << endl;
		sotni();
	}
	if (num >= (pon + pon_pon[1]) && num <= (pon + pon_pon[1] + 99))
	{	
		sot[0].pop_back(); sot[0].pop_back();
		sot[0].insert(1, "т"); sot[0].insert(2, "и");
		cout << chisla[1] + sot[0] << " ";
		res = vic - (pon + pon_pon[1]);
		if (num == pon + pon_pon[1])
			cout << doll[2] << endl;
		sotni();
	}
	if (num >= (pon + pon_pon[2]) && num <= (pon + pon_pon[2] + 99))
	{
		sot[0].pop_back(); sot[0].insert(2, "а");
		cout << chisla[2] + sot[0] << " ";
		res = vic - (pon + pon_pon[2]);
		if (num == pon + pon_pon[2])
			cout << doll[2] << endl;
		sotni();
	}
	if (num >= (pon + pon_pon[3]) && num <= (pon + pon_pon[3] + 99))
	{
		sot[0].pop_back(); sot[0].pop_back();
		sot[0].insert(1, "т"); sot[0].insert(2, "а");
		cout << chisla[3] + sot[0] << " ";
		res = vic - (pon + pon_pon[3]);
		if (num == pon + pon_pon[3])
			cout << doll[2] << endl;
		sotni();
	}
	if (num >= (pon + pon_pon[4]) && num <= (pon + pon_pon[4] + 99))
	{
		sot[0].pop_back(); sot[0].pop_back();
		sot[0].insert(1, "о"); sot[0].insert(2, "т");
		cout << chisla[4] + sot[0] << " ";
		res = vic - (pon + pon_pon[4]);
		if (num == pon + pon_pon[4])
			cout << doll[2] << endl;
		sotni();
	}
	if (num >= (pon + pon_pon[5]) && num <= (pon + pon_pon[5] + 99))
	{
		sot[0].pop_back(); sot[0].pop_back();
		sot[0].insert(1, "о"); sot[0].insert(2, "т");
		cout << chisla[5] + sot[0] << " ";
		res = vic - (pon + pon_pon[5]);
		if (num == pon + pon_pon[5])
			cout << doll[2] << endl;
		sotni();
	}
	if (num >= (pon + pon_pon[6]) && num <= (pon + pon_pon[6] + 99))
	{
		sot[0].pop_back(); sot[0].pop_back();
		sot[0].insert(1, "о"); sot[0].insert(2, "т");
		cout << chisla[6] + sot[0] << " ";
		res = vic - (pon + pon_pon[6]);
		if (num == pon + pon_pon[6])
			cout << doll[2] << endl;
		sotni();
	}
	if (num >= (pon + pon_pon[7]) && num <= (pon + pon_pon[7] + 99))
	{
		sot[0].pop_back(); sot[0].pop_back();
		sot[0].insert(1, "о"); sot[0].insert(2, "т");
		cout << chisla[7] + sot[0] << " ";
		res = vic - (pon + pon_pon[7]);
		if (num == pon + pon_pon[7])
			cout << doll[2] << endl;
		sotni();
	}
	if (num >= pon + pon_pon[8])
	{
		sot[0].pop_back(); sot[0].pop_back();
		sot[0].insert(1, "о"); sot[0].insert(2, "т");
		cout << chisla[8] + sot[0] << " ";
		res = vic - (pon + pon_pon[8]);
		if (num == pon + pon_pon[8])
			cout << doll[2] << endl;
		sotni();
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Задача №3 - Название числа" << endl;
	cout << "Введите кол-во долларов от 1 до 9999" << endl;
	cin >> num;
	ost = num % 10;
	vic = num - ost;
		// От 1 до 10
		if (num <= 10)
		{
			int ar[10] = { 1,2,3,4,5,6,7,8,9,10 };
			if (num == ar[0])
				cout << chisla[0] << " " << doll[0] << " " << endl;
			if (num == ar[1])
				cout << chisla[1] << " " << doll[1] << " " << endl;
			if (num == ar[2])
				cout << chisla[2] << " " << doll[1] << " " << endl;
			if (num == ar[3])
				cout << chisla[3] << " " << doll[1] << " " << endl;
			if (num == ar[4])
				cout << chisla[4] << " " << doll[2] << " " << endl;
			if (num == ar[5])
				cout << chisla[5] << " " << doll[2] << " " << endl;
			if (num == ar[6])
				cout << chisla[6] << " " << doll[2] << " " << endl;
			if (num == ar[7])
				cout << chisla[7] << " " << doll[2] << " " << endl;
			if (num == ar[8])
				cout << chisla[8] << " " << doll[2] << " " << endl;
			if (num == ar[9])
				cout << chisla[9] << " " << doll[2] << " " << endl;
		}
		//От 11 до 99
		if (num > 10)
		{
			if (vic == ar[0])
			{
				desnad();
			}
			if (vic == ar[1])
			{
				x = desiatki[0];
				edin();
			}
			if (vic == ar[2])
			{
				x = desiatki[1];
				edin();
			}
			if (vic == ar[3])
			{
				x = desiatki[2];
				edin();

			}
			if (vic == ar[4])
			{
				x = desiatki[3];
				edin();

			}
			if (vic == ar[5])
			{
				x = desiatki[4];
				edin();

			}
			if (vic == ar[6])
			{
				x = desiatki[5];
				edin();

			}
			if (vic == ar[7])
			{
				x = desiatki[6];
				edin();

			}
			if (vic == ar[8])
			{
				x = desiatki[7];
				edin();
			}
		}
		//От 100 до 999
		if (num < 1000)
		{
			if (num >= 100 && num <= 199)
			{
				res = (num - ost) - 100;
				if (num == 100)
					cout << sot[0] << " " << doll[2] << endl;
				else
					cout << sot[0] << " ";
				sotni();
			}
			if (num >= 200 && num <= 299)
			{
				smena();
				res = (num - ost) - 200;
				if (num == 200)
					cout << chisla[1] + sot[0] << " " << doll[2] << endl;
				else
					cout << chisla[1] + sot[0] << " ";
				sotni();
			}
			if (num >= 300 && num <= 399)
			{
				smena();
				res = (num - ost) - 300;
				if (num == 300)
					cout << chisla[2] + sot[0] << " " << doll[2] << endl;
				else
					cout << chisla[2] + sot[0] << " ";
				sotni();
			}
			if (num >= 400 && num <= 499)
			{
				smena();
				res = (num - ost) - 400;
				if (num == 400)
					cout << chisla[3] + sot[0] << " " << doll[2] << endl;
				else
					cout << chisla[3] + sot[0] << " ";
				sotni();
			}
			if (num >= 500 && num <= 599)
			{
				smena();
				res = (num - ost) - 500;
				if (num == 500)
					cout << chisla[4] + sot[0] << " " << doll[2] << endl;
				else
					cout << chisla[4] + sot[0] << " ";
				sotni();
			}
			if (num >= 600 && num <= 699)
			{
				smena();
				res = (num - ost) - 600;
				if (num == 600)
					cout << chisla[5] + sot[0] << " " << doll[2] << endl;
				else
					cout << chisla[5] + sot[0] << " ";
				sotni();
			}
			if (num >= 700 && num <= 799)
			{
				smena();
				res = (num - ost) - 700;
				if (num == 700)
					cout << chisla[6] + sot[0] << " " << doll[2] << endl;
				else
					cout << chisla[6] + sot[0] << " ";
				sotni();
			}
			if (num >= 800 && num <= 899)
			{
				smena();
				res = (num - ost) - 800;
				if (num == 800)
					cout << chisla[7] + sot[0] << " " << doll[2] << endl;
				else
					cout << chisla[7] + sot[0] << " ";
				sotni();
			}
			if (num >= 900)
			{
				smena();
				res = (num - ost) - 900;
				if (num == 900)
					cout << chisla[8] + sot[0] << " " << doll[2] << endl;
				else
					cout << chisla[8] + sot[0] << " ";
				sotni();
			}
		}
		//От 1000 до 9999
		if (num >= 1000 && num <= 9999)
		{
			if (num >= 1000 && num <= 1999)
			{
				pon = 1000;
				cout << sot[1] << " ";
				if (num == 1000)
					cout << doll[2] << endl;
				if (num >= 1100)
					tisiachi();
				res = vic - pon;
				sotni();			
			}
			if (num >= 2000 && num <= 2999)
			{
				chisla[1].pop_back();
				chisla[1].insert(2, "е");
				smena();
				pon = 2000;
				cout << chisla[1] << " " << sot[1] << " ";
				if (num == 2000)
					cout << doll[2] << endl;
				if (num >= 2100)
					tisiachi();
				res = vic - pon;
				sotni();				
			}
			if (num >= 3000 && num <= 3999)
			{
				smena();
				pon = 3000;
				cout << chisla[2] << " " << sot[1] << " ";
				if (num == 3000)
					cout << doll[2] << endl;
				if (num >= 3100)
					tisiachi();
				res = vic - pon;
				sotni();
			}
			if (num >= 4000 && num <= 4999)
			{
				smena();
				pon = 4000;
				cout << chisla[3] << " " << sot[1] << " ";
				if (num == 4000)
					cout << doll[2] << endl;
				if (num >= 4100)
					tisiachi();
				res = vic - pon;
				sotni();
			}
			if (num >= 5000 && num <= 5999)
			{
				smena();
				pon = 5000;
				cout << chisla[4] << " " << sot[1] << " ";
				if (num == 5000)
					cout << doll[2] << endl;	
				if (num >= 5100)
					tisiachi();
				res = vic - pon;
				sotni();
			}
			if (num >= 6000 && num <= 6999)
			{
				smena();
				pon = 6000;
				cout << chisla[5] << " " << sot[1] << " ";
				if (num == 6000)
					cout << doll[2] << endl;		
				if (num >= 6100)
					tisiachi();
				res = vic - pon;
				sotni();
			}
			if (num >= 7000 && num <= 7999)
			{
				smena();
				pon = 7000;
				cout << chisla[6] << " " << sot[1] << " ";
				if (num == 7000)
					cout << doll[2] << endl;
				if (num >= 7100)
					tisiachi();
				res = vic - pon;
				sotni();
			}
			if (num >= 8000 && num <= 8999)
			{
				smena();
				pon = 8000;
				cout << chisla[7] << " " << sot[1] << " ";
				if (num == 8000)
					cout << doll[2] << endl;
				if (num >= 8100)
					tisiachi();
				res = vic - pon;
				sotni();
			}
			if (num >= 9000)
			{
				smena();
				pon = 9000;
				cout << chisla[8] << " " << sot[1] << " ";
				if (num == 9000)
					cout << doll[2] << endl;		
				if (num >= 9100)
					tisiachi();
				res = vic - pon;
				sotni();
			}
		}
		
	system("pause");
	return 0;
}
	

