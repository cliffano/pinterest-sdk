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
 * BoardOwner.h
 *
 * 
 */

#ifndef BoardOwner_H_
#define BoardOwner_H_


#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  BoardOwner
{
public:
    BoardOwner();
    virtual ~BoardOwner() = default;


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

    bool operator==(const BoardOwner& rhs) const;
    bool operator!=(const BoardOwner& rhs) const;

    /////////////////////////////////////////////
    /// BoardOwner members

    /// <summary>
    /// 
    /// </summary>
    std::string getUsername() const;
    void setUsername(std::string const& value);
    bool usernameIsSet() const;
    void unsetUsername();

    friend void to_json(nlohmann::json& j, const BoardOwner& o);
    friend void from_json(const nlohmann::json& j, BoardOwner& o);
protected:
    std::string m_Username;
    bool m_UsernameIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* BoardOwner_H_ */
