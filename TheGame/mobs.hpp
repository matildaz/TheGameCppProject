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
	/*
	<summary>
	��������� lightMobs ��������� ����� (�����������)
	� ������� ���� ���������� ���� ����� ���������:
	1) healthPoints - �������� �� ������� ���������� ����� ��������
	2) standartHealthPoints - �������� �� �� ���������� ����� ��������, � ������� ����������� ���
	3) coins - �������� �� �� ���������� �����, ������� ������� �����, ����� ����� ������� ����
	</summary>
	*/
	int healthPoints = 10;
	int standartHealthPoints = 10;
	int coins = 5;
	std::vector<std::string > sprites;

	int levelUp()
	{
		/// <summary>
		/// ������� �� ��������� �� ���� ������� ���������� � ������ �������� ���� int
		/// </summary>
		/// <returns>
		/// ��� ���������� ������ ������� ��� ���������� � ������� ����������� ����� �������� � ����� � �������
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
		/// ������� �� ��������� �� ���� ������� ���������� � ���������� �������� ���� bool
		/// </summary>
		/// <returns>
		/// ������� ��������� �� ������� � ���� ����� �������� � � ����������� �� ���������� ������� ���� "true", ���� "false"
		/// </returns>
		if (healthPoints <= 0)
			return true;
		else
			return false;
	}

	std::string getNextSprite(int n)
	{
		/// <summary>
		/// ������� ��������� �� ���� ���� �������� � ������ ���������� ������
		/// </summary>
		/// <param name="n"> 
		/// �������� �������� �� ����� ����������� ������� ��� ����������
		/// </param>
		/// <returns>
		/// ���������� ���������� ������ � ������� std::string
		/// </returns>
		return sprites[n];
	}
};

struct boss
{
	/*
	<summary>
	��������� boss ��������� ����� (�����������) ���������� ��������
	� ������� ���� ���������� ���� ����� ���������:
	1) healthPoints - �������� �� ������� ���������� ����� ��������
	2) standartHealthPoints - �������� �� �� ���������� ����� ��������, � ������� ����������� ���
	3) coins - �������� �� �� ���������� �����, ������� ������� �����, ����� ����� ������� ����
	</summary>
	*/
	int healthPoints = 100;
	int coins = 100;
	std::vector<std::string > sprites;

	int levelUp()
	{
		/// <summary>
		/// ������� �� ��������� �� ���� ������� ���������� � ������ �������� ���� int
		/// </summary>
		/// <returns>
		/// ��� ���������� ������ ������� ��� ���������� � ������� ����������� ����� �������� � ����� � �������
		/// </returns>
		healthPoints += 100;
		coins += 100;
		return 0;
	}

	bool isNotAlive()
	{
		/// <summary>
		/// ������� �� ��������� �� ���� ������� ���������� � ���������� �������� ���� bool
		/// </summary>
		/// <returns>
		/// ������� ��������� �� ������� � ���� ����� �������� � � ����������� �� ���������� ������� ���� "true", ���� "false"
		/// </returns>
		if (healthPoints <= 0)
			return true;
		else
			return false;
	}
};

class player
{
	/*
	<summary>
	����� Player ��������� ������ � �������� ���� ����� ���������:
	1) damage - ���� ��������� �� ���� ���� �� ����
	2) coins - ���������� ����� � �������� (������)
	3) costOfUpgrade - ��������� ��������� ������
	</summary>
	*/
	public:
		int damage = 1;
		int coins = 0;
		int costOfUpgrade = 10;

		int swordUpgrade()
		{
			/// <summary>
			/// ������� �� ��������� �� ���� ������� ���������� � ���������� �������� ���� int
			/// </summary>
			/// <returns>
			/// ������� ����������� ���� ������ �� ���� ���� �� ���� �������
			/// </returns>
			damage += 1;
			return 0;
		}

		int costUpdate()
		{
			/// <summary>
			/// ������� �� ��������� �� ���� ������� ���������� � ���������� �������� ���� int
			/// </summary>
			/// <returns>
			/// ������� ����������� ����� ����, ��� ����� �������� ���� ����, ����� ������� ���� �� ��������� ���������� �����
			/// </returns>
			costOfUpgrade += 10;
			return 0;
		}
};