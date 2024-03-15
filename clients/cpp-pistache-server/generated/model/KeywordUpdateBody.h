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
 * KeywordUpdateBody.h
 *
 * 
 */

#ifndef KeywordUpdateBody_H_
#define KeywordUpdateBody_H_


#include "KeywordUpdate.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  KeywordUpdateBody
{
public:
    KeywordUpdateBody();
    virtual ~KeywordUpdateBody() = default;


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

    bool operator==(const KeywordUpdateBody& rhs) const;
    bool operator!=(const KeywordUpdateBody& rhs) const;

    /////////////////////////////////////////////
    /// KeywordUpdateBody members

    /// <summary>
    /// Keywords to update. Object array. Each object has 3 possible fields:&lt;br&gt;1. \&quot;id\&quot;: (required) keyword ID&lt;br&gt;2. \&quot;archived\&quot;: boolean. Should keyword be archived?&lt;br&gt;3. \&quot;bid\&quot;: number&lt;br&gt;For example: [{\&quot;id\&quot;:\&quot;2886610576653\&quot;, \&quot;archived\&quot;: false, \&quot;bid\&quot;: 20000}, {\&quot;id\&quot;:\&quot;2886610576654\&quot;,  \&quot;archived\&quot;: true, \&quot;bid\&quot;: 20000}, ...]
    /// </summary>
    std::vector<org::openapitools::server::model::KeywordUpdate> getKeywords() const;
    void setKeywords(std::vector<org::openapitools::server::model::KeywordUpdate> const& value);

    friend  void to_json(nlohmann::json& j, const KeywordUpdateBody& o);
    friend  void from_json(const nlohmann::json& j, KeywordUpdateBody& o);
protected:
    std::vector<org::openapitools::server::model::KeywordUpdate> m_Keywords;

    
};

} // namespace org::openapitools::server::model

#endif /* KeywordUpdateBody_H_ */
