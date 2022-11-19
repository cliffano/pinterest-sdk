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
 * CatalogsFeedProcessingStatus.h
 *
 * 
 */

#ifndef CatalogsFeedProcessingStatus_H_
#define CatalogsFeedProcessingStatus_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  CatalogsFeedProcessingStatus
{
public:
    CatalogsFeedProcessingStatus();
    virtual ~CatalogsFeedProcessingStatus() = default;

    enum class eCatalogsFeedProcessingStatus {
    // To have a valid default value.
    // Avoiding name clashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    COMPLETED, 
    COMPLETED_EARLY, 
    DISAPPROVED, 
    FAILED, 
    PROCESSING, 
    QUEUED_FOR_PROCESSING, 
    UNDER_APPEAL, 
    UNDER_REVIEW
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

    bool operator==(const CatalogsFeedProcessingStatus& rhs) const;
    bool operator!=(const CatalogsFeedProcessingStatus& rhs) const;

    /////////////////////////////////////////////
    /// CatalogsFeedProcessingStatus members

    CatalogsFeedProcessingStatus::eCatalogsFeedProcessingStatus getValue() const;
    void setValue(CatalogsFeedProcessingStatus::eCatalogsFeedProcessingStatus value);
    
    friend void to_json(nlohmann::json& j, const CatalogsFeedProcessingStatus& o);
    friend void from_json(const nlohmann::json& j, CatalogsFeedProcessingStatus& o);
protected:
    CatalogsFeedProcessingStatus::eCatalogsFeedProcessingStatus m_value = CatalogsFeedProcessingStatus::eCatalogsFeedProcessingStatus::INVALID_VALUE_OPENAPI_GENERATED;
};

} // namespace org::openapitools::server::model

#endif /* CatalogsFeedProcessingStatus_H_ */
