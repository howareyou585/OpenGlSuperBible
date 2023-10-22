#pragma once
#include "sb7.h"
class my_application:public sb7::application
{
public:
	my_application();
	virtual ~my_application();
	virtual void render(double currentTime) override;
};
DECLARE_MAIN(my_application)
