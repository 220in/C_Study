#include <iostream>
using namespace std;

class SinvelCap
{
public:
	void Take() const { cout << "�๰��" << endl; }
};

class SneezeCap
{
public:
	void Take() const{ cout << "��ä���" << endl; }
};

class SnuffleCap
{
public:
	void Take() const { cout << "�ڶո���" << endl; }
};

// ĸ��ȭ
class CONTAC600
{
private:
	SinvelCap sin;
	SneezeCap sne;
	SnuffleCap snu;
public:
	void Take() const
	{
		sin.Take();
		sne.Take();
		snu.Take();
	}
};


// ȯ�� Ŭ����
class ColdPatient
{
public:
	void TakeSinvelCap(const SinvelCap &cap)const { cap.Take();}
	void TakeSneezeCap(const SneezeCap &cap)const { cap.Take(); }
	void TakeSnuffleCap(const SnuffleCap &cap)const { cap.Take(); }
};
int main(void)
{
	SinvelCap scap;
	SneezeCap zcap;
	SnuffleCap ncap;

	ColdPatient sufferer;
	sufferer.TakeSinvelCap(scap);
	sufferer.TakeSneezeCap(zcap);
	sufferer.TakeSnuffleCap(ncap);
	return 0;
}