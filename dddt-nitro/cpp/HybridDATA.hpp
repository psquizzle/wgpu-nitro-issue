// HybridFS.cpp
#pragma once

#include "HybridDATASpec.hpp"

namespace margelo::nitro::dddt
{

  class HybridDATA : public HybridDATASpec
  {
  public:
    HybridDATA() : HybridObject(TAG) {}

  public:
    double add(double a, double b) override;
    std::shared_ptr<Promise<std::string>> retrieveStringAsyncTest() override;

    void loadHybridMethods() override
    {
      // call base protoype
      HybridDATASpec::loadHybridMethods();
    }
  };

} // namespace margelo::nitro::dddt