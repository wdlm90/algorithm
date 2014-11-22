#include<stdio.h>
using namespace std;
template<typename T>
class StackWithMin
{
	private:
	stack<T> m_data;
	stack<T> m_min;
	private:
	StackWithMin(void){}
	~StackWithMin(void){}
	void push(const T &value);
	void pop();
	const T& min() const;
};
template<typename T> void StackWithMin<T>::push(const T &value)
{
	m_data.push(value);
	if(m_min.size()==0||value<m_data.top())
	m_min.push(value);
	else
	m_min.push(m_top());
}
template<typename T> void StackWithMin<T>::pop()
{
	if(m_data.size()>0&&m_min.size()>0)
	{
		m_data.pop();
		m_min.pop();
	}
}
template<typename T> const T& StackWithMin<T>::min() const
{
	if(m_data.size()>0&&m_min.size()>0)
	return m_min.top();
}

