class Menu // ��ü �޴��� �޴� ����
{
private:
	int* appetizer[3]; //����Ÿ����
	int* mainMenu[6]; //���� �޴�
	int* disertMenu[4]; //����Ʈ �޴�
	int* vaberage[10]; // ���� �޴�
	char* appetizerMenuingredient[30]; // ����Ÿ���� �޴� ��� ����
	char* mainMenuingredient[40]; //���� �޴� ��� ����
	char* disertMenuingredient[40]; //����Ʈ �޴� ��� ����
	int* appetizerMenuprice[3]; //����Ÿ���� �޴� ����
	int* mainMenuprice[6]; //���� �޴� ����
	int* disertMenuprice[4]; //����Ʈ �޴� ����
	int* veberageprice[10]; //���� ����


public:
	void setAppetizeringredientprice(int appetizer, char appetizerMenuingredient, char appetizerMenuprice); // ����Ÿ���� �޴� & ��� & ����
	void setmainMeningredientprice(int mainMenu, char mainMenuingredient, char mainMenuprice); // ���� �޴� & ��� & ����
	void setdisertMenuingredientprice(int disertMenu, char disertMenuingredient, int disertMenuprice); // �Ľ�Ÿ �޴� & ���  & ����
	void setVaberageprice(int vaberage, int veberageprice); //���� & ����
};