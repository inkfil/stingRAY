
//Stack with Array as base structure
class StackArr{
	int top;
	public:
		int size=0;
		int m_Stack[MAX]; //array as base structure
		Stackarr():top(-1){}
		void push(int x);
		int pop();
		bool is_empty();
		bool is_full();
		int getsize();
};

//Stack with Linked List as base structure
class StackNode{
	public:
		int data;
		StackNode* next;
};
