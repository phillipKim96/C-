class Payment //
{
private:
	int tabletotalprice; //테이블 총 식사 가격
	//char wayofpayment[2]; n빵..
	int paymentMethod[3]; //결제 방식 3가지 

public:
	void setTabletotalprice(int price); // 주문 테이블 번호
	void setpaymentMethod(int paymentMethod[3]);
}; 
