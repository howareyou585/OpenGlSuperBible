#include "my_application.h"



my_application::my_application()
{
}


my_application::~my_application()
{
}

void my_application::render(double currentTime)
{
	//static const GLfloat red[] = {1.0f,0.f,0.f,1.f};
	GLfloat color[] = { sin(currentTime)*0.5 + 0.5, cos(currentTime)*0.5 + 0.5,0,1.0 };
	glClearBufferfv(GL_COLOR, 0, color);
	
}
