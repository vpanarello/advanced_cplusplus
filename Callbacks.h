#pragma once

typedef void (*function_pointer)(void);


class Callbacks
{
private:
	int size;
	int top;
	function_pointer* cbs;

public:
	Callbacks(int);
	virtual ~Callbacks(void);

	int get_size(void);
	int get_top(void);
	int set_callback(function_pointer);
	void execute_all(void);
};

