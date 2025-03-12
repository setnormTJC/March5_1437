#pragma once
class Shape
{
protected: 
	//setting a virtual function "equal to 0" means that the function is a "PURE, virtual function"
	virtual int calculateArea() = 0; //virtual means can be overridden by children of this class

	//furthermore, a class with any pure virtual function is called an ABSTRACT class
};

class Rectangle : public Shape
{
	int length, width; 

	int calculateArea() override; //this overrides the parent class's definition of calculateArea
};

class Triangle : public Shape
{
	int base, height; 

	int calculateArea() override; 
};
