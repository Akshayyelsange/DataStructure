#include<iostream>
using namespace std;
#define MAX 10

class stack
{
int data[MAX];
int top;
public:
	stack()
	{
	top = -1;
	}
	void push()
	{
		
	
	for(int i=0;i<11;i++)
	{
		if(0==full())
		{
		top = top+1;
		data[top] = i;	
		cout<<"\npush "<<data[top];
		}
		else
		{
		cout<<"Overflow";
		break;	
		}

	}
	
	}
	void pop()
	{
		for(int i=0;i<MAX;i++)
		{
			if(stack_empty()==0)
			{
			cout<<"\nPop"<<data[top];
			top = top-1;	
			}
			else
			{
			cout<<"Underflow";
			break;	
			}
			
		}		
		
			
	}
	int full()
	{
		if(top==MAX-1)
		{
		return 1;
		}
		else
		{
		return 0;
		}	
	}
	int stack_empty()
	{	
		if(top==-1)
		{
		return 1;
		}
		else
		{
		return 0;
		}
	}	
};
int main()
{
stack st;
st.push();
st.pop();
//cout<<"hie";
return 0;
}
