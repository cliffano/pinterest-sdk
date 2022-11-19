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
 * KeywordUpdate.h
 *
 * 
 */

#ifndef KeywordUpdate_H_
#define KeywordUpdate_H_


#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  KeywordUpdate
{
public:
    KeywordUpdate();
    virtual ~KeywordUpdate() = default;


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

    bool operator==(const KeywordUpdate& rhs) const;
    bool operator!=(const KeywordUpdate& rhs) const;

    /////////////////////////////////////////////
    /// KeywordUpdate members

    /// <summary>
    /// Keyword ID.
    /// </summary>
    std::string getId() const;
    void setId(std::string const& value);
    /// <summary>
    /// Is keyword archived?
    /// </summary>
    bool isArchived() const;
    void setArchived(bool const value);
    bool archivedIsSet() const;
    void unsetArchived();
    /// <summary>
    /// Keyword custom bid in microcurrency - null if inherited from parent ad group.
    /// </summary>
    int32_t getBid() const;
    void setBid(int32_t const value);
    bool bidIsSet() const;
    void unsetBid();

    friend void to_json(nlohmann::json& j, const KeywordUpdate& o);
    friend void from_json(const nlohmann::json& j, KeywordUpdate& o);
protected:
    std::string m_Id;

    bool m_Archived;
    bool m_ArchivedIsSet;
    int32_t m_Bid;
    bool m_BidIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* KeywordUpdate_H_ */
