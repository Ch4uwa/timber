#include "includes.h"
#include "AssetManager.h"


int main()
{
	sf::VideoMode vm(VM_WIDTH, VM_HEIGHT);
	sf::RenderWindow window(vm, "TIMBER!");

	AssetManager am;
	am.load_environment();
	am.set_position();
	am.activate_bee(true);
	am.activate_cloud(true,true,true);

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
		am.draw(window);


		// Display on surface
		window.display();
	}
}