class Table //
{
private:
	char* tableNo[15]; //테이블 번호 
	char* tableMemberMaxCount; // 테이블당 최대 인원
	int emptyTableNumber; // 빈 테이블 번호
	int myX; // 실시간 위치 정보 x축
	int myY; //실시간 위치 정보 y축 


public:
	void setTableNo(char number[15]); // 주문 테이블 번호
	void setTableMaxCount(int n); // 테이블당 최대 인원 
	void setEmptyTableNumber(int emptyTableNumber); // 빈 테이블 넘버
	Table(int myX, int myY); // 기계 위치 
};