# OOPS-CONCEPTS
1. **OBJECT ORIENTED PROGRAMING**- object-oriented Programming (OOPs) is a programming paradigm that uses objects and classes in programming. It aims to implement real-world entities like inheritance, polymorphisms, encapsulation, etc. in the programming. The main concept of OOPs is to bind the data and the functions that work on that together as a single unit so that no other part of the code can access this data.
IT Consists of 6 main key components:

  - Class
  - Objects

  There are four pillars in oops concepts For any programming language
   - Polymorphism
   - Encapsulation
   - Inheritance
   - Data Abstraction
![image](https://github.com/KshitizSadh/OOPS-CONCEPTS/assets/142923024/0fd5f57e-1269-4f2b-a66f-aae311a4e060)

## *Class*
A class is a set of specifications or blueprint about an entity. It defines a set of data elements and methods also called as attributes and behaviors.
Use **class** keyword to create a class.  

    class Anime:
    pass

### *Objects*
An object is the real entity created based on class specifications. Object allows to use the data members and method prescribed the class.  

    object = horror()
**Creating a class and object with class and instance attributes**

    class ANIME:

	# class attribute
	attr1 = "mammal"

	# Instance attribute
	def __init__(self, name):
		self.name = name

    # Driver code
    # Object instantiation
    Rodger = Dog("Rodger")
    Tommy = Dog("Tommy")

    # Accessing class attributes
    print("Rodger is a {}".format(Rodger.__class__.attr1))
    print("Tommy is also a {}".format(Tommy.__class__.attr1))

    # Accessing instance attributes
    print("My name is {}".format(Rodger.name))
    print("My name is {}".format(Tommy.name)) 

  # method overriding




   


