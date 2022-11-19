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
 * Ad_accounts_list_200_response_allOf.h
 *
 * 
 */

#ifndef Ad_accounts_list_200_response_allOf_H_
#define Ad_accounts_list_200_response_allOf_H_


#include "AdAccount.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  Ad_accounts_list_200_response_allOf
{
public:
    Ad_accounts_list_200_response_allOf();
    virtual ~Ad_accounts_list_200_response_allOf() = default;


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

    bool operator==(const Ad_accounts_list_200_response_allOf& rhs) const;
    bool operator!=(const Ad_accounts_list_200_response_allOf& rhs) const;

    /////////////////////////////////////////////
    /// Ad_accounts_list_200_response_allOf members

    /// <summary>
    /// Ad accounts
    /// </summary>
    std::vector<org::openapitools::server::model::AdAccount> getItems() const;
    void setItems(std::vector<org::openapitools::server::model::AdAccount> const& value);
    bool itemsIsSet() const;
    void unsetItems();

    friend void to_json(nlohmann::json& j, const Ad_accounts_list_200_response_allOf& o);
    friend void from_json(const nlohmann::json& j, Ad_accounts_list_200_response_allOf& o);
protected:
    std::vector<org::openapitools::server::model::AdAccount> m_Items;
    bool m_ItemsIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* Ad_accounts_list_200_response_allOf_H_ */
