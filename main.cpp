int main() {
	car c1{"t-roc",1.968,182 };
	car c2{ "tiguan", 1.968,184 };
	car c3{"jetta",1.395,150};
	car c4{};

	cout << "폭스바겐차의 = " << c1.getname() << "," << "배기량 :" << c1.getkm() << "cc" << "," << "최대출력 :" << c1.gethp() << "hp" << endl;
	cout << "폭스바겐차의 = " << c2.getname() << "," << "배기량 :" << c2.getkm() << "cc" << "," << "최대출력 :" << c2.gethp() << "hp" << endl;
	cout << "폭스바겐차의 = " << c3.getname() << "," << "배기량 :" << c3.getkm() << "cc" << "," << "최대출력 :" << c3.gethp() << "hp" << endl;
	cout << "폭스바겐차의 = " << c4.getname() << "," << "배기량 :" << c4.getkm() << "cc" << "," << "최대출력 :" << c4.gethp() << "hp" << endl;
}