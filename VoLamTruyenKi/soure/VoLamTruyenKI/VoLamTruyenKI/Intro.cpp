#include "Intro.h"
#include <thread>

Intro::Intro() {

}
Intro::~Intro()
{

}
void Intro::Out() {
	TaoChuChay x;
	thread threadSound(SoundIntro);
	string s = "   ----*Chao mung thay va cac ban den voi vo lam truyen ki*----";
	for (int i = 0; i < s.size(); i++) {
		x.HienThi(s[i], 45);
	}
	threadSound.join();
}