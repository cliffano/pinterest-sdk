/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.12.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * Ad_groups_list_200_response.h
 *
 * 
 */

#ifndef Ad_groups_list_200_response_H_
#define Ad_groups_list_200_response_H_


#include "AdGroupResponse.h"
#include <string>
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  Ad_groups_list_200_response
{
public:
    Ad_groups_list_200_response();
    virtual ~Ad_groups_list_200_response() = default;


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

    bool operator==(const Ad_groups_list_200_response& rhs) const;
    bool operator!=(const Ad_groups_list_200_response& rhs) const;

    /////////////////////////////////////////////
    /// Ad_groups_list_200_response members

    /// <summary>
    /// 
    /// </summary>
    std::vector<org::openapitools::server::model::AdGroupResponse> getItems() const;
    void setItems(std::vector<org::openapitools::server::model::AdGroupResponse> const& value);
    /// <summary>
    /// 
    /// </summary>
    std::string getBookmark() const;
    void setBookmark(std::string const& value);
    bool bookmarkIsSet() const;
    void unsetBookmark();

    friend  void to_json(nlohmann::json& j, const Ad_groups_list_200_response& o);
    friend  void from_json(const nlohmann::json& j, Ad_groups_list_200_response& o);
protected:
    std::vector<org::openapitools::server::model::AdGroupResponse> m_Items;

    std::string m_Bookmark;
    bool m_BookmarkIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* Ad_groups_list_200_response_H_ */
