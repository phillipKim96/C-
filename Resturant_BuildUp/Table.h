class Table //
{
private:
	char* tableNo[15]; //���̺� ��ȣ 
	char* tableMemberMaxCount; // ���̺�� �ִ� �ο�
	int emptyTableNumber; // �� ���̺� ��ȣ
	int myX; // �ǽð� ��ġ ���� x��
	int myY; //�ǽð� ��ġ ���� y�� 


public:
	void setTableNo(char number[15]); // �ֹ� ���̺� ��ȣ
	void setTableMaxCount(int n); // ���̺�� �ִ� �ο� 
	void setEmptyTableNumber(int emptyTableNumber); // �� ���̺� �ѹ�
	Table(int myX, int myY); // ��� ��ġ 
};