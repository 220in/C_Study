#include <iostream>
using namespace std;

class SinvelCap
{
public:
	void Take() const { cout << "Äà¹°¾à" << endl; }
};

class SneezeCap
{
public:
	void Take() const{ cout << "ÀçÃ¤±â¾à" << endl; }
};

class SnuffleCap
{
public:
	void Take() const { cout << "ÄÚ¶Õ¸²¾à" << endl; }
};

// Ä¸½¶È­
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


// È¯ÀÚ Å¬·¡½º
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