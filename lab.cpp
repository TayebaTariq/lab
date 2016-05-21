#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

class band
{
protected:
	int memberCount;
public:
	band()
	{
		memberCount = 5;
	}
	int getMemberCount()
	{
		return memberCount;
	}
	virtual int totalCount() = 0;
	virtual string bandType(){ return "Band"; }
};

class metalBand :public band
{
	//int totalM;
	int pyrotechnicians;
public:
	metalBand(int pyro)
	{
		this->pyrotechnicians = pyro;
	}
	int totalCount()
	{
		int tech = pyrotechnicians + getMemberCount();
		return tech;
	}
	/*void setTotalM(int tm){ totalM = tm; }
	int getTotalM(){ return totalM; }*/
	string bandType(){ return "Metal Band"; }
};

class symphony :public band
{
	int conductor;
public:
	symphony(int condctor)
	{
		this->conductor = condctor;
	}
	int totalCount()
	{
		return (conductor + getMemberCount());
	}
	string bandType(){ return "Symphony"; }
};

class jazz :public band
{
	int conductor;
public:
	int totalCount()
	{
		return getMemberCount();
	}
	string bandType(){ return "Jazz Band"; }
};

class marchingBand :public band
{
	int conductor;
public:
	int totalCount()
	{
		return getMemberCount();
	}
	string bandType(){ return "Marching Band"; }
};

int main()
{
	band *b;
	metalBand m(3); m.totalCount(); b = &m;
	cout << "The band  " << b->bandType() << " has " << b->totalCount() << " members." << endl;

	marchingBand mb; mb.totalCount(); b = &mb;
	cout << "The band  " << b->bandType() << " has " << b->totalCount() << " members." << endl;

	jazz j; j.totalCount(); b = &j;
	cout << "The band  " << b->bandType() << " has " << b->totalCount() << " members." << endl;

	symphony s(1); s.totalCount(); b = &s;
	cout << "The band  " << b->bandType() << " has " << b->totalCount() << " members." << endl;

	


	_getche();
	return 0;
}