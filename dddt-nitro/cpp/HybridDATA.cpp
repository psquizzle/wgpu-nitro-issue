// HybridDATA.cpp

#include "HybridDATA.hpp"
#include "add/add.hpp"
#include <future>

namespace margelo::nitro::dddt
{

    double HybridDATA::add(double a, double b)
    {
        return margelo::nitro::dddt::functions::add(a, b);
    }
std::shared_ptr<Promise<std::string>> HybridDATA::retrieveStringAsyncTest() {
    return Promise<std::string>::async([]() {
        return std::string("test");
    });
}

}
