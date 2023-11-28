#pragma once
#pragma warning (disable : 26495)

#include "Button.h"

class CheckBox : public Button
{
public:
	CheckBox();
	CheckBox(Control*, std::string, RECT);
	CheckBox(Control*, std::string, int = 0, int = 0);

	void check();
	void uncheck();
	void setOnCheckChange(f_onCheckChange);
	void setChecked(bool);
protected:
	f_onCheckChange mOnCheckChange;
	bool mChecked = false;

	virtual LRESULT execute(UINT, WPARAM, LPARAM);
};