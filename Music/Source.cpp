#include"Duh.h"
#include"Orcestr.h"
#include"Strun.h"
#include"Udar.h"

void main()
{
	Orcestr pmt;

	pmt.addPlayer(new Udar("Steve"));
	pmt.addPlayer(new Duh("Rodjer"));
	pmt.addPlayer(new Strun("Peter"));

	pmt.getOrcestr();

	system("pause");
}