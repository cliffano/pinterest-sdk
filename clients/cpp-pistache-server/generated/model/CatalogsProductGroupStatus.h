/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * CatalogsProductGroupStatus.h
 *
 * 
 */

#ifndef CatalogsProductGroupStatus_H_
#define CatalogsProductGroupStatus_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  CatalogsProductGroupStatus
{
public:
    CatalogsProductGroupStatus();
    virtual ~CatalogsProductGroupStatus() = default;

    enum class eCatalogsProductGroupStatus {
    // To have a valid default value.
    // Avoiding name clashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    ACTIVE, 
    INACTIVE
    };

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

    bool operator==(const CatalogsProductGroupStatus& rhs) const;
    bool operator!=(const CatalogsProductGroupStatus& rhs) const;

    /////////////////////////////////////////////
    /// CatalogsProductGroupStatus members

    CatalogsProductGroupStatus::eCatalogsProductGroupStatus getValue() const;
    void setValue(CatalogsProductGroupStatus::eCatalogsProductGroupStatus value);
    
    friend void to_json(nlohmann::json& j, const CatalogsProductGroupStatus& o);
    friend void from_json(const nlohmann::json& j, CatalogsProductGroupStatus& o);
protected:
    CatalogsProductGroupStatus::eCatalogsProductGroupStatus m_value = CatalogsProductGroupStatus::eCatalogsProductGroupStatus::INVALID_VALUE_OPENAPI_GENERATED;
};

} // namespace org::openapitools::server::model

#endif /* CatalogsProductGroupStatus_H_ */
