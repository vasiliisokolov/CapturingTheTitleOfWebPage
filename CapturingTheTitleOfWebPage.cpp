// CapturingTheTitleOfWebPage.cpp: определяет точку входа для приложения.
//

#include "CapturingTheTitleOfWebPage.h"

int main()
{
	
	cpr::Response r = cpr::Get(cpr::Url{"https://httpbin.org/html"}, 
		cpr::Header{{"Accept", "text/html"}});

	int s = r.text.find("<h1>");
	std::cout << s << std::endl;
	int f = r.text.rfind("<h1>");
	std::cout << f << std::endl;

	for (int i = s; i < f; i++)
	{
		std::cout << r.text[i];
	}
		

}
