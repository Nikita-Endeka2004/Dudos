#include <iostream>
#include <windows.h>

void ithinkimgoinginsane(HBRUSH kistochka, HDC wow, int a, int b, int c, int d) {
	CreateSolidBrush(RGB(250, 250, 1));
	SelectObject(wow, kistochka);
	Ellipse(wow, a, b, c, d);
	return;
}
void hysteria(HDC insane) {
	POINT wish;
	GetCursorPos(&wish);
	DrawIcon(insane, wish.x, wish.y, LoadIcon(NULL, IDI_ERROR));
	return;
}
void doesformhileisgathinsky(int a, HDC ok) {
	StretchBlt(ok, -80, -80, a + 100, a + 100, ok, 0, 0, a, a, SRCINVERT);
	return;
}
void triaska(int a, int b, int c, HDC da) {
	BitBlt(da, b, c, a, a, da, 0, 0, SRCCOPY);
}
int main() {
	::ShowWindow(::GetConsoleWindow(), SW_HIDE);
	int i = 0, a, b;
	HDC d = GetDC(0);
	while (i < (SHRT_MAX / 4)) {
		srand(time(0));
		ithinkimgoinginsane(0, GetDC(0), rand(), rand() % 15, rand() % 15, rand());
		hysteria(GetDC(0));
		doesformhileisgathinsky(GetSystemMetrics(0), GetDC(0));
		triaska(GetSystemMetrics(0), rand() % -4, rand() % 4, GetDC(0));
		a = GetSystemMetrics(0), b = rand() % a;
		BitBlt(d, b, 70, 10, a, d, b, 0, SRCCOPY);
		i++;
	}
}