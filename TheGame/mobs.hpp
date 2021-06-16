#include "algorithm"
#include "string"
#include "vector"

std::vector<std::string > minotaur_1_stand = { "sprites/minotaur_1/Minotaur_01_Taunt_000.png", "sprites/minotaur_1/Minotaur_01_Taunt_001.png",
	"sprites/minotaur_1/Minotaur_01_Taunt_002.png", "sprites/minotaur_1/Minotaur_01_Taunt_003.png", "sprites/minotaur_1/Minotaur_01_Taunt_004.png",
	"sprites/minotaur_1/Minotaur_01_Taunt_005.png", "sprites/minotaur_1/Minotaur_01_Taunt_006.png", "sprites/minotaur_1/Minotaur_01_Taunt_007.png",
	"sprites/minotaur_1/Minotaur_01_Taunt_008.png", "sprites/minotaur_1/Minotaur_01_Taunt_009.png", "sprites/minotaur_1/Minotaur_01_Taunt_010.png",
	"sprites/minotaur_1/Minotaur_01_Taunt_011.png", "sprites/minotaur_1/Minotaur_01_Taunt_012.png", "sprites/minotaur_1/Minotaur_01_Taunt_013.png",
	"sprites/minotaur_1/Minotaur_01_Taunt_014.png", "sprites/minotaur_1/Minotaur_01_Taunt_015.png", "sprites/minotaur_1/Minotaur_01_Taunt_016.png",
	"sprites/minotaur_1/Minotaur_01_Taunt_017.png" };

std::vector<std::string > minotaur_2_stand = { "sprites/minotaur_2/Minotaur_02_Taunt_000.png", "sprites/minotaur_2/Minotaur_02_Taunt_001.png",
	"sprites/minotaur_2/Minotaur_02_Taunt_002.png", "sprites/minotaur_2/Minotaur_02_Taunt_003.png", "sprites/minotaur_2/Minotaur_02_Taunt_004.png",
	"sprites/minotaur_2/Minotaur_02_Taunt_005.png", "sprites/minotaur_2/Minotaur_02_Taunt_006.png", "sprites/minotaur_2/Minotaur_02_Taunt_007.png",
	"sprites/minotaur_2/Minotaur_02_Taunt_008.png", "sprites/minotaur_2/Minotaur_02_Taunt_009.png", "sprites/minotaur_2/Minotaur_02_Taunt_010.png",
	"sprites/minotaur_2/Minotaur_02_Taunt_011.png", "sprites/minotaur_2/Minotaur_02_Taunt_012.png", "sprites/minotaur_2/Minotaur_02_Taunt_013.png",
	"sprites/minotaur_2/Minotaur_02_Taunt_014.png", "sprites/minotaur_2/Minotaur_02_Taunt_015.png", "sprites/minotaur_2/Minotaur_02_Taunt_016.png",
	"sprites/minotaur_2/Minotaur_02_Taunt_017.png" };

std::vector<std::string > minotaur_3_stand = { "sprites/minotaur_3/Minotaur_03_Taunt_000.png", "sprites/minotaur_3/Minotaur_03_Taunt_001.png",
	"sprites/minotaur_3/Minotaur_03_Taunt_002.png", "sprites/minotaur_3/Minotaur_03_Taunt_003.png", "sprites/minotaur_3/Minotaur_03_Taunt_004.png",
	"sprites/minotaur_3/Minotaur_03_Taunt_005.png", "sprites/minotaur_3/Minotaur_03_Taunt_006.png", "sprites/minotaur_3/Minotaur_03_Taunt_007.png",
	"sprites/minotaur_3/Minotaur_03_Taunt_008.png", "sprites/minotaur_3/Minotaur_03_Taunt_009.png", "sprites/minotaur_3/Minotaur_03_Taunt_010.png",
	"sprites/minotaur_3/Minotaur_03_Taunt_011.png", "sprites/minotaur_3/Minotaur_03_Taunt_012.png", "sprites/minotaur_3/Minotaur_03_Taunt_013.png",
	"sprites/minotaur_3/Minotaur_03_Taunt_014.png", "sprites/minotaur_3/Minotaur_03_Taunt_015.png", "sprites/minotaur_3/Minotaur_03_Taunt_016.png",
	"sprites/minotaur_3/Minotaur_03_Taunt_017.png" };

std::vector<std::string > boss_1_sprites = { "sprites/Wraith_3/PNG Sequences/Taunt/Wraith_03_Taunt_000.png", "sprites/Wraith_3/PNG Sequences/Taunt/Wraith_03_Taunt_001.png",
	"sprites/Wraith_3/PNG Sequences/Taunt/Wraith_03_Taunt_002.png", "sprites/Wraith_3/PNG Sequences/Taunt/Wraith_03_Taunt_003.png", "sprites/Wraith_3/PNG Sequences/Taunt/Wraith_03_Taunt_004.png",
	"sprites/Wraith_3/PNG Sequences/Taunt/Wraith_03_Taunt_005.png", "sprites/Wraith_3/PNG Sequences/Taunt/Wraith_03_Taunt_006.png", "sprites/Wraith_3/PNG Sequences/Taunt/Wraith_03_Taunt_007.png",
	"sprites/Wraith_3/PNG Sequences/Taunt/Wraith_03_Taunt_008.png", "sprites/Wraith_3/PNG Sequences/Taunt/Wraith_03_Taunt_009.png", "sprites/Wraith_3/PNG Sequences/Taunt/Wraith_03_Taunt_010.png",
	"sprites/Wraith_3/PNG Sequences/Taunt/Wraith_03_Taunt_011.png", "sprites/Wraith_3/PNG Sequences/Taunt/Wraith_03_Taunt_012.png", "sprites/Wraith_3/PNG Sequences/Taunt/Wraith_03_Taunt_013.png",
	"sprites/Wraith_3/PNG Sequences/Taunt/Wraith_03_Taunt_014.png", "sprites/Wraith_3/PNG Sequences/Taunt/Wraith_03_Taunt_015.png", "sprites/Wraith_3/PNG Sequences/Taunt/Wraith_03_Taunt_016.png",
	"sprites/Wraith_3/PNG Sequences/Taunt/Wraith_03_Taunt_017.png" };

struct lightMobs
{
	/// <summary>
	/// structure lightMobs defines mobs (enemies)
	/// each mob has got some parameters:
	/// healthPoints - responsible for the current number of health points
	/// standartHealthPoints - responsible for the number of health points that the mob will spawn with
	/// coins - responsible for the number of coins that the player will receive when he kills this mob
	/// </summary>
	int healthPoints = 10;
	int standartHealthPoints = 10;
	int coins = 5;
	std::vector<std::string > sprites;

	int levelUp()
	{
		/// <summary>
		/// The function does not accept any parameters as input and returns an int value
		/// </summary>
		/// <returns>
		/// When you perform this function, the mob is resurrected with a large number of health points and coins in your pocket
		/// </returns>
		while (healthPoints < standartHealthPoints)
			healthPoints += 1;
		healthPoints += 10;
		standartHealthPoints += 10;
		coins += 5;
		return 0;
	}

	bool isNotAlive()
	{
		/// <summary>
		/// The function does not accept any parameters as input and returns a bool value
		/// </summary>
		/// <returns>
		///	The function checks whether the mob has health points and, depending on the result, outputs either "true" or " false"
		/// </returns>
		if (healthPoints <= 0)
			return true;
		else
			return false;
	}

	std::string getNextSprite(int n)
	{
		/// <summary>
		/// The function takes one parameter as input and returns a specific sprite
		/// </summary>
		/// <param name="n"> 
		/// This parameter is responsible for selecting a specific sprite to draw
		/// </param>
		/// <returns>
		/// Returns a specific sprite in the std::string format
		/// </returns>
		return sprites[n];
	}
};

struct boss
{
    /// <summary>
    /// structure boss defines mobs with an increased level of difficulty (enemies)
    /// each mob has got some parameters:
    /// healthPoints - responsible for the current number of health points
    /// standartHealthPoints - responsible for the number of health points that
    /// the mob will spawn with coins - responsible for the number of coins that
    /// the player will receive when he kills this mob
    /// </summary>
	int healthPoints = 100;
	int coins = 100;
	std::vector<std::string > sprites;

	int levelUp()
	{
        /// <summary>
        /// The function does not accept any parameters as input and returns
        /// an int value
        /// </summary>
        /// <returns>
        /// When you perform this function, the mob is resurrected with a
        /// large number of health points and coins in your pocket
        /// </returns>
		healthPoints += 100;
		coins += 100;
		return 0;
	}

	bool isNotAlive()
	{
        /// <summary>
        /// The function does not accept any parameters as input and returns
        /// a bool value
        /// </summary>
        /// <returns>
        ///	The function checks whether the mob has health points and,
        ///depending on the result, outputs either "true" or " false"
        /// </returns>
		if (healthPoints <= 0)
			return true;
		else
			return false;
	}
};

class player
{
	/// <summary>
	/// The Player class describes a player that has these parameters:
	/// damage - damage dealt per hit to a mob
	/// coins - the number of coins in the wallet (now)
	/// costOfUpgrade - the cost of improving weapons
	/// </summary>
	public:
		int damage = 1;
		int coins = 0;
		int costOfUpgrade = 10;

		int swordUpgrade()
		{
			/// <summary>
			/// The function does not accept any parameters as input and returns an int value
			/// </summary>
			/// <returns>
			/// The function increases the player's damage per hit by one unit
			/// </returns>
			damage += 1;
			return 0;
		}

		int costUpdate()
		{
			/// <summary>
			/// The function does not accept any parameters as input and returns an int value
			/// </summary>
			/// <returns>
			/// The feature is triggered after the player has increased their damage to raise the price for the next damage increase
			/// </returns>
			costOfUpgrade += 10;
			return 0;
		}
};