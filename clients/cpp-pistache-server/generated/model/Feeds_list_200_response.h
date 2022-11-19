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
 * Feeds_list_200_response.h
 *
 * 
 */

#ifndef Feeds_list_200_response_H_
#define Feeds_list_200_response_H_


#include "CatalogsFeed.h"
#include <string>
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  Feeds_list_200_response
{
public:
    Feeds_list_200_response();
    virtual ~Feeds_list_200_response() = default;


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

    bool operator==(const Feeds_list_200_response& rhs) const;
    bool operator!=(const Feeds_list_200_response& rhs) const;

    /////////////////////////////////////////////
    /// Feeds_list_200_response members

    /// <summary>
    /// 
    /// </summary>
    std::vector<org::openapitools::server::model::CatalogsFeed> getItems() const;
    void setItems(std::vector<org::openapitools::server::model::CatalogsFeed> const& value);
    /// <summary>
    /// 
    /// </summary>
    std::string getBookmark() const;
    void setBookmark(std::string const& value);
    bool bookmarkIsSet() const;
    void unsetBookmark();

    friend void to_json(nlohmann::json& j, const Feeds_list_200_response& o);
    friend void from_json(const nlohmann::json& j, Feeds_list_200_response& o);
protected:
    std::vector<org::openapitools::server::model::CatalogsFeed> m_Items;

    std::string m_Bookmark;
    bool m_BookmarkIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* Feeds_list_200_response_H_ */
