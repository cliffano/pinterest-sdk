/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.4.1
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * CatalogsFeedIngestionDetails.h
 *
 * 
 */

#ifndef CatalogsFeedIngestionDetails_H_
#define CatalogsFeedIngestionDetails_H_


#include "CatalogsFeedIngestionErrors.h"
#include "CatalogsFeedIngestionInfo.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  CatalogsFeedIngestionDetails
{
public:
    CatalogsFeedIngestionDetails();
    virtual ~CatalogsFeedIngestionDetails() = default;


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

    bool operator==(const CatalogsFeedIngestionDetails& rhs) const;
    bool operator!=(const CatalogsFeedIngestionDetails& rhs) const;

    /////////////////////////////////////////////
    /// CatalogsFeedIngestionDetails members

    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsFeedIngestionErrors getErrors() const;
    void setErrors(org::openapitools::server::model::CatalogsFeedIngestionErrors const& value);
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsFeedIngestionInfo getInfo() const;
    void setInfo(org::openapitools::server::model::CatalogsFeedIngestionInfo const& value);

    friend void to_json(nlohmann::json& j, const CatalogsFeedIngestionDetails& o);
    friend void from_json(const nlohmann::json& j, CatalogsFeedIngestionDetails& o);
protected:
    org::openapitools::server::model::CatalogsFeedIngestionErrors m_Errors;

    org::openapitools::server::model::CatalogsFeedIngestionInfo m_Info;

    
};

} // namespace org::openapitools::server::model

#endif /* CatalogsFeedIngestionDetails_H_ */
