/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * AdGroupArrayResponseElement.h
 *
 * 
 */

#ifndef AdGroupArrayResponseElement_H_
#define AdGroupArrayResponseElement_H_


#include "AdGroupResponse.h"
#include "Exception.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  AdGroupArrayResponseElement
{
public:
    AdGroupArrayResponseElement();
    virtual ~AdGroupArrayResponseElement() = default;


    /// <summary>
    /// Validate the current data in the model. Throws a ValidationException on failure.
    /// </summary>
    void validate() const;

    /// <summary>
    /// Validate the current data in the model. Returns false on error and writes an error
    /// message into the given stringstream.
    /// </summary>
    bool validate(std::stringstream& msg) const;

    /// <summary>
    /// Helper overload for validate. Used when one model stores another model and calls it's validate.
    /// Not meant to be called outside that case.
    /// </summary>
    bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

    bool operator==(const AdGroupArrayResponseElement& rhs) const;
    bool operator!=(const AdGroupArrayResponseElement& rhs) const;

    /////////////////////////////////////////////
    /// AdGroupArrayResponseElement members

    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::AdGroupResponse getData() const;
    void setData(org::openapitools::server::model::AdGroupResponse const& value);
    bool dataIsSet() const;
    void unsetData();
    /// <summary>
    /// 
    /// </summary>
    std::vector<org::openapitools::server::model::Exception> getExceptions() const;
    void setExceptions(std::vector<org::openapitools::server::model::Exception> const& value);
    bool exceptionsIsSet() const;
    void unsetExceptions();

    friend void to_json(nlohmann::json& j, const AdGroupArrayResponseElement& o);
    friend void from_json(const nlohmann::json& j, AdGroupArrayResponseElement& o);
protected:
    org::openapitools::server::model::AdGroupResponse m_Data;
    bool m_DataIsSet;
    std::vector<org::openapitools::server::model::Exception> m_Exceptions;
    bool m_ExceptionsIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* AdGroupArrayResponseElement_H_ */
