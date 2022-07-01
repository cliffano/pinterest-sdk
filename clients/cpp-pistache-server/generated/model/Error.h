/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * Error.h
 *
 * 
 */

#ifndef Error_H_
#define Error_H_


#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  Error
{
public:
    Error();
    virtual ~Error() = default;


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

    bool operator==(const Error& rhs) const;
    bool operator!=(const Error& rhs) const;

    /////////////////////////////////////////////
    /// Error members

    /// <summary>
    /// 
    /// </summary>
    int32_t getCode() const;
    void setCode(int32_t const value);
    /// <summary>
    /// 
    /// </summary>
    std::string getMessage() const;
    void setMessage(std::string const& value);

    friend void to_json(nlohmann::json& j, const Error& o);
    friend void from_json(const nlohmann::json& j, Error& o);
protected:
    int32_t m_Code;

    std::string m_Message;

    
};

} // namespace org::openapitools::server::model

#endif /* Error_H_ */
