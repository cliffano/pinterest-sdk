/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * BatchOperation.h
 *
 * The operation performed by the batch
 */

#ifndef BatchOperation_H_
#define BatchOperation_H_



#include <memory>
#include <vector>
#include <boost/property_tree/ptree.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// The operation performed by the batch
/// </summary>
class  BatchOperation 
{
public:
    BatchOperation() = default;
    explicit BatchOperation(boost::property_tree::ptree const& pt);
    virtual ~BatchOperation() = default;

    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// BatchOperation members

protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string toJsonString_internal(bool prettyJson = false);
    virtual void fromJsonString_internal(std::string const& jsonString);
    virtual boost::property_tree::ptree toPropertyTree_internal();
    virtual void fromPropertyTree_internal(boost::property_tree::ptree const& pt);


protected:
};

std::vector<BatchOperation> createBatchOperationVectorFromJsonString(const std::string& json);

}
}
}
}

#endif /* BatchOperation_H_ */
