/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * CatalogsFeedProductCounts.h
 *
 * The counts can be null early in the process.
 */

#ifndef CatalogsFeedProductCounts_H_
#define CatalogsFeedProductCounts_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// The counts can be null early in the process.
/// </summary>
class  CatalogsFeedProductCounts
{
public:
    CatalogsFeedProductCounts();
    virtual ~CatalogsFeedProductCounts() = default;


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

    bool operator==(const CatalogsFeedProductCounts& rhs) const;
    bool operator!=(const CatalogsFeedProductCounts& rhs) const;

    /////////////////////////////////////////////
    /// CatalogsFeedProductCounts members

    /// <summary>
    /// The number of products in the feed file.
    /// </summary>
    int32_t getOriginal() const;
    void setOriginal(int32_t const value);
    bool originalIsSet() const;
    void unsetOriginal();

    friend  void to_json(nlohmann::json& j, const CatalogsFeedProductCounts& o);
    friend  void from_json(const nlohmann::json& j, CatalogsFeedProductCounts& o);
protected:
    int32_t m_Original;
    bool m_OriginalIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* CatalogsFeedProductCounts_H_ */
