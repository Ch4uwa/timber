#include "includes.h"
#include "AssetManager.h"



int main()
{
	sf::VideoMode vm(VM_WIDTH, VM_HEIGHT);
	sf::RenderWindow window(vm, "TIMBER!");

	AssetManager am;
	am.load_environment();



	while (window.isOpen())
	{

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			window.close();
		}

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		am.draw(window);
		//window.display();
	}

}