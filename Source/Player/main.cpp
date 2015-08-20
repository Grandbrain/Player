#include "Player.h"

void main()
{
	std::string e;
	std::string s;
	std::cin >> s;

	Sound sound;
	Player player;

	if (!player.Create()) return;
	if (!sound.LoadFromFile(s)) return;
	if (!player.SetSound(sound)) return;

	player.Play();

	do
	{
		std::cin >> e;
	} 
	while (e != "exit");
}