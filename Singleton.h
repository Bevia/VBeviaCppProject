#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>
#include <memory>
#include <mutex>

class Singleton {
public:
    // Delete the copy constructor and assignment operator
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    // Static method to get the instance of the Singleton
    static Singleton& getInstance() {
        static Singleton instance; // Guaranteed to be destroyed and instantiated on first use
        return instance;
    }

    // Example method
    void doSomething() {
        std::cout << "Singleton instance is working!" << std::endl;
    }

private:
    // Private constructor to prevent instantiation
    Singleton() = default;

    // Destructor
    ~Singleton() = default;
};

#endif // SINGLETON_H
