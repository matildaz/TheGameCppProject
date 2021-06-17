#include "mobs.hpp"
#include <SFML/Graphics.hpp>
#include "string"
#include "vector"
#include "memory"

/**
* texture_mob gets a number and an array with sprites and outputs a specific sprite in the output
* \param n - an int type variable that points to the sprite number
* \param mob - variable of type std::vector<std:: string> having a certain number of sprites not exceeding "n"
* \return The function outputs a sprite with the number "n" from the array "mob" in std::vector<std:: string> type
*/
std::string texture_mob(int n, std::vector<std::string > mob)
{
	return mob[n];
}

/**
* curcorPosition defines the position of cursor
* \param position - a variable of type sf:: Vector2i containing the cursor coordinates
* \return The function returns "true" if the cursor is in the specified area and "false" if the cursor is not there
*/
bool cursorPosition(sf::Vector2i position)
{
	if ((position.x >= 200) && (position.x <= 600))
	{
		if (position.y >= 100 && position.y <= 550)
			return true;
	}
}

/**
 * curcorPositionInfo defines the position of cursor for info icon
 * \param position - a variable of type sf:: Vector2i containing the cursor
 * coordinates \return The function returns "true" if the cursor is in the
 * specified area and "false" if the cursor is not there
 */
bool cursorPositionInfo(sf::Vector2i position)
{
	if (position.x >= 703 && position.x <= 767)
	{
		if (position.y >= 35 && position.y <= 99)
			return true;
	}
}
/**
 * curcorPositionUp defines the position of cursor for upgrade button
 * \param position - a variable of type sf:: Vector2i containing the cursor
 * coordinates \return The function returns "true" if the cursor is in the
 * specified area and "false" if the cursor is not there
 */
bool cursorPositionUp(sf::Vector2i position)
{
	if ((position.x >= 75) && (position.x <= 725))
	{
		if (position.y >= 859 && position.y <= 939)
			return true;
	}
}

/**
* rendInfoWindow generates window with hints
* \return new window with hints and variable 0 
*/
int rendInfoWindow()
{
	sf::RenderWindow infoWindow(sf::VideoMode(500, 400), "Information"); // generating a window

	sf::Font font; // creating a font
	sf::Text text; // creating text
	font.loadFromFile("Fonts/BalooTammudu2-Bold.ttf"); // loading the font
	text.setFont(font); // combining font and text
	text.setCharacterSize(20); // setting the text size
	text.setFillColor(sf::Color::Black); // setting the text color
	text.setStyle(sf::Text::Bold); // setting the text style
	text.setPosition(20, 20); // setting the text position
	text.setString("May the force be with you, knight!\nHere are some things\nyou need to know:\n1) First of all - do not\ngive mobs chance to stay alive\n2) If you want to upgrade your sward -\njust klick on button with the cost of upgade\n3) Kill them all!");
	// writing a text

	while (infoWindow.isOpen()) //	opening a window (while the window is open)...
	{
		sf::Event event; // creating an event
		while (infoWindow.pollEvent(event)) // event recognition
		{
			if (event.type == sf::Event::Closed) // if the event is equal to closing the window, the window is closed
				infoWindow.close();
		}

		infoWindow.clear(sf::Color::White); // clearing the window
		infoWindow.draw(text); // drawing text
		infoWindow.display(); // displaying everything drawn in the window
	}

	return 0;
}

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 1000), "My window"); // creating a game window

	// background
	sf::Texture background; // generating background texture
	background.loadFromFile("sprites/background/Group 7backgroundV1.png"); // loading a texture from a file
	sf::Sprite backgroundSprite; // creating a sprite
	backgroundSprite.setTexture(background); // displaying a texture as a sprite

	// variables
	bool block = false; // the variable is responsible for pressing the key (if false-not pressed, true-pressed)
	int n = 0; // the variable is responsible for the sprite number
	int cntMinoyaur = 0; // has been used in earlier versions
	int cntMob = 0; // has been used in earlier versions

	// Player and mobs
	player knight; // creating a player
	lightMobs mob_1; // creating a mob
	lightMobs mob_2; // creating a mob
	lightMobs mob_3; // creating a mob
	boss boss_1; // creating a boss

	// Sprites and textures
	sf::Sprite sprite;
	sf::Texture texture;

	// Texts and fonts
	sf::Font font;
	sf::Text text;
	font.loadFromFile("Fonts/BalooTammudu2-Bold.ttf");
	text.setFont(font);
	text.setCharacterSize(40);
	text.setFillColor(sf::Color::Red);
	text.setStyle(sf::Text::Bold);
	text.setPosition(450, 660);

	sf::Text playerDamage;
	playerDamage.setFont(font);
	playerDamage.setCharacterSize(40);
	playerDamage.setFillColor(sf::Color::Red);
	playerDamage.setStyle(sf::Text::Bold);
	playerDamage.setPosition(100, 660);

	sf::Text playerCoins;
	playerCoins.setFont(font);
	playerCoins.setCharacterSize(40);
	playerCoins.setFillColor(sf::Color::Red);
	playerCoins.setStyle(sf::Text::Bold);
	playerCoins.setPosition(100, 770);

	sf::Text playerCostOfUpgrade;
	playerCostOfUpgrade.setFont(font);
	playerCostOfUpgrade.setCharacterSize(40);
	playerCostOfUpgrade.setFillColor(sf::Color::Red);
	playerCostOfUpgrade.setStyle(sf::Text::Bold);
	playerCostOfUpgrade.setPosition(100, 870);

	sf::Text bossIsNow;
	bossIsNow.setFont(font);
	bossIsNow.setCharacterSize(60);
	bossIsNow.setFillColor(sf::Color::Red);
	bossIsNow.setStyle(sf::Text::Bold);
	bossIsNow.setPosition(310, 50);

	while (window.isOpen()) // opening the game window
	{
		window.clear(sf::Color::White); // clearing the screen
		window.draw(backgroundSprite); // drawing the background

		// checking all window events that have been triggered since the last iteration of the loop
		sf::Event event;

		while (window.pollEvent(event))
		{
			// closing the window when you click the close button
			if (event.type == sf::Event::Closed)
				window.close();

			// checking for mouse keystrokes
			if (event.type == sf::Event::MouseButtonPressed)
			{
				if (!block) // if the key is already pressed, the program does not enter this if
				{
					block = true; // blocking constant pressing
					if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) // checking for left mouse button clicks
					{
						sf::Vector2i position = sf::Mouse::getPosition(window); // calculating the cursor position
						if (cursorPositionInfo(position) == true) // if the user clicked on the information icon, the help window opens
						{
							rendInfoWindow();
						}

						if (cursorPositionUp(position) == true & knight.coins >= knight.costOfUpgrade) // check for clicking a certain area and the required number of coins to improve
						{
							knight.swordUpgrade();
							knight.costUpdate();
							std::string coinsStr = std::to_string(knight.coins);
							coinsStr += " Coins";
							playerCoins.setString(coinsStr);
						}
					}

					if (mob_1.isNotAlive() == false) // check for health points for the first mob
					{
						if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) // checking for left mouse button clicks
						{
							sf::Vector2i position = sf::Mouse::getPosition(window); // calculating the cursor position
							if (cursorPosition(position) == true)
							{
								mob_1.healthPoints -= knight.damage;
								std::string hpStr;
								if (mob_1.healthPoints <= 0)
								{
									hpStr = std::to_string(mob_2.healthPoints);
								}
								else
								{
									hpStr = std::to_string(mob_1.healthPoints);
								}

								hpStr += " HP";if the mob dies, the player gets all the coins
								text.setString(hpStr);
								if (mob_1.isNotAlive()) // if the mob dies, the player gets all the coins
								{
									knight.coins += mob_1.coins;
									std::string coinsStr = std::to_string(knight.coins);
									coinsStr += " Coins";
									playerCoins.setString(coinsStr);
								}
							}
						}
					}
					else if (mob_2.isNotAlive() == false) // if the first mob is dead, the second mob is checked for health points.
					{
						if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) // checking for left mouse button clicks
						{
							sf::Vector2i position = sf::Mouse::getPosition(window); // calculating the cursor position
							if (cursorPosition(position) == true)
							{
								mob_2.healthPoints -= knight.damage;
								std::string hpStr;
								if (mob_2.healthPoints <= 0)
								{
									hpStr = std::to_string(mob_3.healthPoints);
								}
								else
								{
									hpStr = std::to_string(mob_2.healthPoints);
								}if the mob dies, the player gets all the coins
								hpStr += " HP";
								text.setString(hpStr);
								if (mob_2.isNotAlive()) // if the mob dies, the player gets all the coins
								{
									knight.coins += mob_2.coins;
									std::string coinsStr = std::to_string(knight.coins);
									coinsStr += " Coins";
									playerCoins.setString(coinsStr);
								}
							}
						}
					}
					else if (mob_3.isNotAlive() == false) // if the second mob dies, the third mob is checked for health points.
					{
						if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) // checking for left mouse button clicks
						{
							sf::Vector2i position = sf::Mouse::getPosition(window); // calculating the cursor position
							if (cursorPosition(position) == true)
							{
								mob_3.healthPoints -= knight.damage;
								std::string hpStr;
								if (mob_3.healthPoints <= 0)
								{
									hpStr = std::to_string(boss_1.healthPoints);
								}
								else
								{
									hpStr = std::to_string(mob_3.healthPoints);
								}

								hpStr += " HP";
								text.setString(hpStr);
								if (mob_3.isNotAlive()) // if the mob dies, the player gets all the coins
								{
									knight.coins += mob_3.coins;
									std::string coinsStr = std::to_string(knight.coins);
									coinsStr += " Coins";
									playerCoins.setString(coinsStr);
								}
							}
						}
					}

					if (mob_3.isNotAlive() == true) // if all the mobs are dead, then the BOSS comes in their place
					{
						if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) // checking for left mouse button clicks
						{
							sf::Vector2i position = sf::Mouse::getPosition(window); // calculating the cursor position
							if (cursorPosition(position) == true)
							{
								boss_1.healthPoints -= knight.damage;
								std::string hpStr;
								if (boss_1.healthPoints <= 0)
								{
									hpStr = std::to_string(mob_1.healthPoints);
								}
								else
								{
									hpStr = std::to_string(boss_1.healthPoints);
								}

								hpStr += " HP";
								text.setString(hpStr);
								if (boss_1.isNotAlive()) // if the boss dies, the player will get the treasure, and all the mobs and the boss himself will be resurrected, but with more health points
								{
									knight.coins += boss_1.coins;
									std::string coinsStr = std::to_string(knight.coins);
									coinsStr += " Coins";
									playerCoins.setString(coinsStr);
									mob_1.levelUp();
									mob_2.levelUp();
									mob_3.levelUp();
									boss_1.levelUp();
									cntMob = 0;
								}
							}
						}
					}
				}
			}

			if (event.type == sf::Event::MouseButtonReleased) // if the key is pressed, the lock is released from the clamping until it is pressed again
			{
				block = false;
			}
		}

		sf::Cursor cursor; // creating a cursor as a separate object
		if (cursor.loadFromSystem(sf::Cursor::Hand)) // separate cursor drawing
			window.setMouseCursor(cursor);

		if (mob_1.isNotAlive() == false) // while the first mob is alive, it is being drawn
		{
			// loading a mob texture from a file
			texture.loadFromFile(minotaur_1_stand[n]);
			sprite.setTexture(texture);
			sprite.setPosition(0, 105);
		}
		else if (mob_2.isNotAlive() == false) // while the second mob is alive, it is being drawn
		{
			// loading a mob texture from a file
			texture.loadFromFile(minotaur_2_stand[n]);
			sprite.setTexture(texture);
			sprite.setPosition(0, 105);
		}
		else if (mob_3.isNotAlive() == false) // while the third mob is alive, it is being drawn
		{
			// loading a mob texture from a file
			texture.loadFromFile(minotaur_3_stand[n]);
			sprite.setTexture(texture);
			sprite.setPosition(0, 105);
		}

		// writing a text with damage indicators per hit
		std::string damageStr = std::to_string(knight.damage);
		damageStr += " per one hit";
		playerDamage.setString(damageStr);
		playerCostOfUpgrade.setString(std::to_string(knight.costOfUpgrade) + " coins to upgrade your sword");

		if (mob_3.isNotAlive() == true) // while the boss is alive, it is being drawn
		{
			bossIsNow.setString("BOSS");
			window.draw(bossIsNow);
			texture.loadFromFile(boss_1_sprites[n]);
			sprite.setTexture(texture);
			sprite.setPosition(100, 200);
		}

		// sketches of individual objects
		window.draw(text);
		window.draw(sprite);
		window.draw(playerCoins);
		window.draw(playerDamage);
		window.draw(playerCostOfUpgrade);

		// displaying objects on the screen
		window.display();

		n += 1;
		if (n > 17) // increasing the sprite number
			n = 0;

	}

	return 0;
}