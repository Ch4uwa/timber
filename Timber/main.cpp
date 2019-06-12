#include "includes.h"
#include "AssetManager.h"


int main()
{
	sf::VideoMode vm(VM_WIDTH, VM_HEIGHT);
	sf::RenderWindow window(vm, "TIMBER!");
	sf::Clock clock;


	while (window.isOpen())
	{
		
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			window.close();
		}

		// activate a bee and set the speed


		// clear surface
		window.clear();


		// Draw surface


		// Display on surface
		window.display();
	}
}