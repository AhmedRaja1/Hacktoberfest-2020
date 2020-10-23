// Singleton Design Pattern
// author@HamzaMateen

#include <iostream>
#include <string>

/** 
The goal hereby is to create a class, which:
    1. has a method inorder for a single instance creation.
    2. has a method to make its features available to client (outer code)
    3. has properties/resources available via prior method API 
**/

class Singleton 
{
    public: // API 
    std::string& getClassName() {
        return this->nameOfClass;
    }
    
    int getCallCount() { 
        return this->callCount; 
    }
    // method to create static (undestroyable instance) of the class 
    static Singleton& getInstance () 
    {
        static Singleton instance;
        callCount++;
        
        return instance;
        
    }
    
 
    private: // properties
        std::string nameOfClass = "Singleton";
        static int callCount; // No of times the getInstance() method has been called
    
    private: // private ctor 
        Singleton(){ /*EMPTY*/}
};
int Singleton::callCount = 0;

// main driver code 
int main() 
{
    // creating 1st Instance 
    Singleton firstInstance = Singleton::getInstance();
    
    // accessing resources 
    std::cout << "The class name is " << firstInstance.getClassName() << " and it has been created " << firstInstance.getCallCount() << " times\n\n" << std::endl;
    
    // creating 2nd instance 
    Singleton secondInstance = Singleton::getInstance();
    
    // accessing resources 
    std::cout << "The class name is " << secondInstance.getClassName()<< " and it has been created " << secondInstance.getCallCount() << " times.\n\n" << std::endl;

    // conclusion
    std::cout << "----**CONCLUSION**------" << std::endl;
    std::cout << "We can clearly see that resources are same but callCount has incremented from 1 to 2 because the same instance of the class is returned. This is called the Singleton Design Pattern, where only one instance of a class is created. This was discovered by Michael Meyers, the author of Effective C++." << std::endl;
    
    return 0;
}
