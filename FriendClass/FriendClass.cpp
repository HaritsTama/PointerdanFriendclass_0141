#include <iostream>
#include <string>
using namespace std;

class mahasiswa; //deklarasi class mahasiswa
class orang
{
private:
	string nama;
public:
	void setNama(string pNama);
	friend class siswa;
};

class siswa
{
private:
	int id;
public:
};

