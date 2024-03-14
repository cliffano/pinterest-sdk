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
 * BoardUpdate.h
 *
 * Board fields for updates
 */

#ifndef BoardUpdate_H_
#define BoardUpdate_H_


#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Board fields for updates
/// </summary>
class  BoardUpdate
{
public:
    BoardUpdate();
    virtual ~BoardUpdate() = default;


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

    bool operator==(const BoardUpdate& rhs) const;
    bool operator!=(const BoardUpdate& rhs) const;

    /////////////////////////////////////////////
    /// BoardUpdate members

    /// <summary>
    /// 
    /// </summary>
    std::string getName() const;
    void setName(std::string const& value);
    bool nameIsSet() const;
    void unsetName();
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
    std::string getPrivacy() const;
    void setPrivacy(std::string const& value);
    bool privacyIsSet() const;
    void unsetPrivacy();

    friend  void to_json(nlohmann::json& j, const BoardUpdate& o);
    friend  void from_json(const nlohmann::json& j, BoardUpdate& o);
protected:
    std::string m_Name;
    bool m_NameIsSet;
    std::string m_Description;
    bool m_DescriptionIsSet;
    std::string m_Privacy;
    bool m_PrivacyIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* BoardUpdate_H_ */
