#include "Sound.h"

void SoundIntro() {
	PlaySound(TEXT("Intro.wav"), NULL, SND_FILENAME | SND_SYNC);
}