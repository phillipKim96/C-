class Menu // 전체 메뉴와 메뉴 정보
{
private:
	int* appetizer[3]; //에피타이저
	int* mainMenu[6]; //메인 메뉴
	int* disertMenu[4]; //디저트 메뉴
	int* vaberage[10]; // 음료 메뉴
	char* appetizerMenuingredient[30]; // 에피타이저 메뉴 재료 정보
	char* mainMenuingredient[40]; //메인 메뉴 재료 정보
	char* disertMenuingredient[40]; //디저트 메뉴 재료 정보
	int* appetizerMenuprice[3]; //에피타이저 메뉴 가격
	int* mainMenuprice[6]; //메인 메뉴 가격
	int* disertMenuprice[4]; //디저트 메뉴 가격
	int* veberageprice[10]; //음료 가격


public:
	void setAppetizeringredientprice(int appetizer, char appetizerMenuingredient, char appetizerMenuprice); // 에피타이저 메뉴 & 재료 & 가격
	void setmainMeningredientprice(int mainMenu, char mainMenuingredient, char mainMenuprice); // 메인 메뉴 & 재료 & 가격
	void setdisertMenuingredientprice(int disertMenu, char disertMenuingredient, int disertMenuprice); // 파스타 메뉴 & 재료  & 가격
	void setVaberageprice(int vaberage, int veberageprice); //음료 & 가격
};