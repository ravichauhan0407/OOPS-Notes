

What is OOPS ?

Object Oriented Programming is the principle of design & development of programme
using modular approach.

The procedural Programming focus on processing of instruction in order
to perform a desired computation.It emphasizes more on doing things like
algorithm.Used in C and pascal.

OOPS  combines both the data and the functions that opererate on that data into single unit
called the object.
It follows bottom up design techniques, it is piecing together the smaller systems to give
rise more complex system.

Another major component that plays a major role in OOP is the class.It is a template
that represents a group of objects which share common properties and relationships.

C++  AS A OOP LANGUAGE :
MAJOR IMPROVEMENTS OVER C :
* stream I / O
* string typing
* Inlining
* Default argumanet values
* Parameter passing by reference
* OOP Advantages

OOPS PRINCIPLE :

*OOPS   is methodolgy characterized the following concepts :

Encapsulation : The process of binding data members (variables, properties) and member functions
(methods) into a single unit. A class is the best example :

* Take an example of a pharmacy store.
* You go to the shop and ask for medicine.
* There only the chemist has the access to the medicines of the store and
he knows what medicine to give you.

* This reduces the risk of taking a medicine that is not prescribed to you.

* Here medicines are the member variables, chemist is the member function and you are the
external piece of code.




ABSTRACTION : It  refers to represent necessary features without including more details
or explanation. Data abstraction is a programming technique that is relies on the
sepration of interface and implementation.


* Take an example of laptop.
* When  you press a key on keyboard, the character appears on the screeen
* You need to know only this.
* How exactly it works is not required.
* This is called abstraction.



INHERITANCE : The mechanism of deriving a new class from an old class is called
inheritance.The old  class is known as base clsss while new class is derived class or subclass.
	ItThe inheritance is the most powerful featureof OOP.

	* For example, a child inherts the traits of his paresnts.It* With inheritance , we can reuse the fields and methods
	of the class.
	* Through effective use of inhertance you can save lot of time in your programming and also reduce errors.

	* Which in tuen will increase the quality of work and productivity.

	*  There are different types of inheritance : single, multiple, multilevel, hybrid.


	POLYMORPHISM : It means ability to take more than one form.

	* For example, a + is used to add two numbers, but it can also be used to concatenate two strings.

	* This is known as operator overloading. because same operator may behave differently on different instances.

	* Same way functions can be overloaded. For eg sum() can be used to add two  intergers as well as two floating points.



		C++ classes and Objects:

		* C++ is a object - oriented  programming.

		* Everything in C++ is associated  with classes objects with its
		attributes and methods.

		* attributes and methods are basically  variables and functions
		that belong to the class.

		* A class is a user - defined data type that  we can use in our
		programme   and work as an object constructor or a "blueprint"
		for creating objects.


		creating a class :

		class Class_NAME {
		    //Attribute
		    //Methods
		};

class Methods : Methods are functions that belongs to the class.They
define the behaviour / action take by object.


Real Life example of classes & objects

Object : Person

State / properties :
Black Hair Coloe : harColor = "BLACK";

5.5 feet : tall height = 5.5

Weight 60 kgs : weight = 60

Behaviour / Action :
Eat : eat()
Sleep : sleep()
Run : run()

Access Speciefiers :

Access Speciefiers define  how the members of a can be accessed :

In C++, there are  three access Speciefiers :

public - members are accessible from outside the class

private - members cannot be accessed from outside the class

protected - members cannot be accessed from outside the class.
It can be accessed in inherited classes.

By Default all members of a class are private.



class Class_Name
{
private:
	//
public:
	//
private:
	//
};



Static Members of a C++ class

We can define class members static  using static keyword


We can define class members static using static keyboard

when we decalare a member of a class as static it means no maater
how many objects of the class are created, there is only one copy
of the static members

A  static member is shared  by all objects of the class.

All static data is initialized to zero when object is created, of not

other initialization is present.

/***static varible create and acess****/
class A
{
public:
	static int age;
	static int getAge()
	{
		return age;
	}
};

int A::age = 0;
A::getAge();

Scope resoultion  operator is use to access static members


Most Important point :

static functions can only access  static
variables and static function

and functions outside the class.

Passing ans Returning a Object :

class Example
{
public:
	int num;

	Example add(Example E)
	{
		Example e;
		e.num = E.num + num;

		return e;
	}
};



FRIEND FUNCTION AND CLASSES

A  friend class can access private and protected members
of other class in  which it is decalared as friend

Example  of friend class :

class A
{
private:
	int  num;
	friend class B;
};

class B
{
public:
	void fun(A a)
	{
		cout << a.num;
	}
};


A friend function can also be given special access
private and protected members.A friend function can be :

1. A method of Another class

2. A global function

class A
{
private:
	int a;
public:
	friend void fun(A &x);
};

void fun(A &x)
{
	cout << x.a;
}


Const member functions in C++

An object decalared as const cannot be modified and hence, can invoke only const
member functions as these functions ensure not to modify the object

A const object can be created by prefixing the const keyword to the object
declaration

Any attempt to change the data member of const objects results in compile - time errors

Whenever an object is decalared as const, it needs to be initialize  at the time of declaration

when a function is decalared as const, it can be called on any type  of
object, const object as well as non - const objects


const functions are not allowed to modify the object on which
they are called.
Imp. const function can not modify class attributes



C++ constructors

* A constructor in C++ is a special method that is automatically called when
an object of a class is created

* It is used to initialize object's attributes

* Constructor have same name as that of  class

* These are must to make public

* Constructors do not have any  return type

Types of Constructors

Constructors are broadly classified in three types:

* Default Constructor

* Parameterized Constructor

* Copy Constructor



class has  default copy constructor
{
Obj ob2=ob1;
}


MOST MOST IMPORTANT

IT IS MADATORY TO DEFINE COPY CONSTRUCTOR  THORUGH PASS BY REFERENCE OTHERWISE

IT WILL GO INTO INFINITE LOOP BECAUSE Default COPYCONSTRUCTOR WILL BE CALLED AGAIN AND AGAIN


DESTRUCTOR:
It is a member function which destruct or delete an object


Syntax: ~ destructor_name();

-Destructor function is automatically invoke when objects are
destoryed;

- The destructor does not have arguments

- It cannot be static or const

- A destructor should be decalared in the public section of the
cckas

ORDER OF DESTRUCTION

when an object goes out of scope or is deleted,the sequence of events complete

desctruction is as follows:

The  class's destructor is called and the body of destructor function is
executed.

Destructors for non static member objects are called in the reverse
order which they appear in the class declaration

class A
{
public:
int num;
~A()
	{
		cout << "deconstructor" << " " << num;
	}
};



A a;
A b;// first call b desconstructor

Means destructor calls in reverse order



INHERITANCE

- In c++ , inheritance is a process in  which one object acquires
all the properties and behaviours of its parent object automatically

- In such way, you can reuse, extend or modify the attributes
and behaviours  which are defined in other class

- In c++, the cassa which inherits  the members of Another class is
called derived class and the class whose Members are inherited is

called base class.The derived class is the specialized class for the base class


Derived class

A Derived class is defined as the class derived from the base class

The syntax of Derived class :

class derived_class_name::viisbility - mode base_class_name
{
    // body
}

Public , Protect and Private inheritance


class A
{
    public:
    int x;
    private:
    int y;
    protected:
    int z;
};
class B: public A
{
public:
int fun()
	{
		return z;// B can access only protected and public
	}
};

Derived class only inherit public and protected  attributes;

Restrction :

PRIVATE >>>  PROTECTED >>>  PUBLIC


TYPES OF INHERITANCE

- SINGLE INHERITANCE

- MULTILEVEL INHERITANCE

- HIERARCHICAL INHERITANCE

- MULTIPLE INHERITANCE

- HYBRID INHERITANCE



SINGLE INHERITANCE:
Single inheritance is defined as the inheritance in which a derived

class is inherited from the only one base class;



MULTILEVEL INHERITANCE:
multilevel inheritance is a process of deriving a class from another derived class.
Inheritance is transitive so the last derived class acquires all the attributes
of all its base class.

class A
{

};
class B: A
{

}
class C: B
{

}

MultiPle Inheritance:

Multipel Inheritance is the process of deriving a new class

that inherits the attributes from two or more classes

class A
{
public:
	int x;
};
class B
{
public:
	int x;
};
class C: public A, public B
{
public:
	int fun()
	{
		return A::x;
	}
};

for Handling ambiguity we use scope resoultion
operator;
Ambiguity : A situation in which something has more than one
possible meaning and may therefore cause confusion


HYBRID INHERITANCE:
Hybrid inheritance is a combination of more than one type of inheritance

A
/   \
B     C
\     /
\   /
D


Data Hiding :
- Data Hiding is a concept in object - oriented programming
which confirms the  security of members of a class from
unauthorized access.

- Data hiding is a technique of protecting the data members
from being manipulated or hacked from any other source.

-  Data hiding also reduces some complexity of the system.Data hiding can be
achieved Through the Encapsulation, as Encapsulation is a subprocess
of data  hiding.

Data hiding gurantees restricted data access to class members
& maintain  object integrity.


Encapsulation:

-  Encapsulation binds the data & functions together which keeps both
safe from outside interferance.Data Encapsulation leads to data hiding.

- Encapsulation makes the system easier to operate by the end user


ABSTRACTION:

- Abstraction is primarily  used to hide the complexity
- It indicates the necessary characterstics of an object that differentiates it
from all other types of objects.
- An abstraction concentrates on the external aspect of an object.for an object,
abstraction  provides the  sepration of the crucial behaviour
from its implementation.

- A proper abstraction emphasizes on the details that are important for the
reader or user and suppress features that are irrelevant and deviant.


Types of ABSTRACTION :
-Procedural abstraction
- Data abstraction


POLYMORPHISM :

-The word POLYMORPHISM means having many forms.We can define
POLYMORPHISM as the ability of a message to be diplayed in more than
one  form.

In C++ POLYMORPHISM is mainly divided into two types :

- Compile time POLYMORPHISM

- Runtime POLYMORPHISM

Compile Time POLYMORPHISM :

This type of POLYMORPHISM is achieved by function  overloaded
and operator overloading

Operator overloading :

In c++, we can the way operators work for user - defined
	types objects, structures.This is known as operator overloading.

syntax :

	class className
	{
	    public:
	    returnType operator|symbol(argumanets)
{

}
};

when we overload &&  and || shortcircuting will be lose;

( ) && ( ) && ( )
first block is false  but the whole will be evaluated;


Runtime POLYMORPHISM :
-Runtime POLYMORPHISM is also known as dynamic polymorphishm or late
binding.In runtime polymorphishm, the function call is resolved
at run time.

- In contrast, to compile time or static polymorphishm , the compiler deduces
the object at run time and then decided which functions call
to bind to the object.In C++, runtime polymorphishm is
implemented using method overriding.


Method overriding :

- Inheritance is a feature of OOP that allows us to cerate derived classes from
base class.The derived classes inherit features of the base class.


- If the same function is defined in both derived class and the based class
and we call this function using the object of derived class, the function
of derived class is executed


Virtual Functions :

- A virtual function is a member function in the base class that we expect to
redefine in derived classes

- A virtual function is used in the base class in order to ensure that the
function is overridden.This especially applies to cases where a pointer of base
class points to an object of a derived class.

class B
{
public:
	virtual void print()
	{

	}
}

class D : public B
{
public:
	void print overide()
	{

	}
}
Here  you can skip to override virtual function


Virtual Base classes

- virtual base classes are used in virtual inheritance in a way of preventing
multiple "instances" of a given class appearing in an inheritance
hierarchy when using multiple inheritances



PURE VIRTUAL FUNCTION & ABSTRACT CLASSES

- pure virtual functions are used if a function doesnot have any use
in the base class but the function must be implemented by all
its derived classes

- A class that  contains a pure virtual function is known as an abtract class



ABSTRACT CLASS -

IF A CLASS HAS AT LEAST ONE VIRTUAL PURE VIRTUAL FUNCTION
THAN IT IS CALLED ABSTRACT CLASS .WE CANNOT CREATE Objects

OF ABTRACT CLASS.

class B
{
int a;
public:
virtual int fun() = 0;
}


Templates:

-Templates allows you to write generic programs.
you can create a  single function or a class to work
with different data types using Templates.

- Templates are often used in larger codebase for
the purpose of code reusability and flecibility of the programs.

- The concep of templates can be  used in two
different ways :

- function Templates

- class Templates

Function Templates
- A single function template can work with different
data types at once but, a single normal function can only work
with one set of data types

- If you need to perfrom identical operations on two or more
types of data you use function overloading to create two
functions with the required function declaration


- However, you can use function templates because
you can perform the same task writing less and
maintainable code

Declaring a function templates

A function template starts with the keyword template

by template Parameters / s indside < > which is followed by function
declaration.

template <class T>
T function (T arg)
{

}

example: -

template <class T>
T Large(T a, T b)
{
	return (a > b) ? a : b;
}

class Template

- sometimes , you need a class implementationt that is same for all classes,
only the data types uses are different

- class Templates make it easy to reuse the same code for all data types.

	- Example

	template <class T>
	class A
	{
	    public:
	    T a, b;
	    T mul()
{
	return a * b;
}
}

A<int> x;


template <class T, class B>
T mul(T a, B b)
{
	return a * b;
}



**************** finish ************************

























