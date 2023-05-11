#pragma once

#include <iostream>
#include <exception>
#include <string>

template <typename T>
class Array
{
private:
	T *_Arr;
	unsigned int _size;

public:
	class OutOfRange : public std::exception
	{
		const char *what() const throw()
		{
			return "Out of range access to array element.";
		}
	};
	Array(void) : _Arr(NULL), _size(0){};

	Array(unsigned int n) : _Arr(NULL), _size(n)
	{
		if (n)
			_Arr = new T[n]();
	};

	template<typename U>
	Array(Array<U> &other)
	{
		_size = other.size();
		if (_size)
		{
			_Arr = new T[_size];
			for (size_t i = 0; i < _size; i++)
				_Arr[i] = static_cast<T> (other[i]);
		}
		else
			_Arr = NULL;
	}

	Array(Array<T> const  &other)
	{
		_size = other.size();
		if (_size)
		{
			_Arr = new T[_size];
			for (size_t i = 0; i < _size; i++)
				_Arr[i] = static_cast<T> (other[i]);
		}
		else
			_Arr = NULL;
	}

	template<typename U>
	Array &operator=(Array<U> &other)
	{
		if ((void *)this != (void *)&other)
		{
			if (_Arr && _size)
				delete _Arr;
			_size = other.size();
			if (_size)
			{
				_Arr = new T[_size];
				for (size_t i = 0; i < _size; i++)
					_Arr[i] = static_cast<T>(other[i]);
			}
			else
				_Arr = NULL;
		}
		return *this;
	}

	Array &operator=(const Array<T> &other)
	{
		if (this != &other)
		{
			if (_Arr && _size)
				delete _Arr;
			if (other._size)
			{
				_Arr = new T[other._size];
				for (size_t i = 0; i < other._size; i++)
					_Arr[i] = static_cast<T>(other[i]);
			}
			else
				_Arr = NULL;
			_size = other._size;
		}
		return *this;
	}

	T &operator[](size_t index)
	{
		if (index < 0 || index >= _size)
			throw(OutOfRange());
		return _Arr[index];
	}

	const T &operator[](size_t index) const
	{
		if (index < 0 || index >= _size)
			throw(OutOfRange());
		return _Arr[index];
	}

	
	unsigned int size() const
	{
		return _size;
	}

	~Array()
	{
		if (_Arr && _size)
			delete [] _Arr;
	};
};
