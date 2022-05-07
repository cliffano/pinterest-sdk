/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: pinterest-api@pinterest.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * Board.h
 *
 * Board
 */

#ifndef Board_H_
#define Board_H_


#include <string>
#include "BoardOwner.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Board
/// </summary>
class  Board
{
public:
    Board();
    virtual ~Board() = default;


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

    bool operator==(const Board& rhs) const;
    bool operator!=(const Board& rhs) const;

    /////////////////////////////////////////////
    /// Board members

    /// <summary>
    /// 
    /// </summary>
    std::string getId() const;
    void setId(std::string const& value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// 
    /// </summary>
    std::string getName() const;
    void setName(std::string const& value);
    /// <summary>
    /// 
    /// </summary>
    std::string getDescription() const;
    void setDescription(std::string const& value);
    bool descriptionIsSet() const;
    void unsetDescription();
    /// <summary>
    /// 
    /// </summary>
    BoardOwner getOwner() const;
    void setOwner(BoardOwner const& value);
    bool ownerIsSet() const;
    void unsetOwner();
    /// <summary>
    /// Privacy setting for a board. Learn more about &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/article/secret-boards\&quot;&gt;secret boards&lt;/a&gt; and &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/protected-boards\&quot;&gt;protected boards&lt;/a&gt;
    /// </summary>
    std::string getPrivacy() const;
    void setPrivacy(std::string const& value);
    bool privacyIsSet() const;
    void unsetPrivacy();

    friend void to_json(nlohmann::json& j, const Board& o);
    friend void from_json(const nlohmann::json& j, Board& o);
protected:
    std::string m_Id;
    bool m_IdIsSet;
    std::string m_Name;

    std::string m_Description;
    bool m_DescriptionIsSet;
    BoardOwner m_Owner;
    bool m_OwnerIsSet;
    std::string m_Privacy;
    bool m_PrivacyIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* Board_H_ */
