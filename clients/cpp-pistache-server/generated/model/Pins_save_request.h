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
 * Pins_save_request.h
 *
 * 
 */

#ifndef Pins_save_request_H_
#define Pins_save_request_H_


#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  Pins_save_request
{
public:
    Pins_save_request();
    virtual ~Pins_save_request() = default;


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

    bool operator==(const Pins_save_request& rhs) const;
    bool operator!=(const Pins_save_request& rhs) const;

    /////////////////////////////////////////////
    /// Pins_save_request members

    /// <summary>
    /// Unique identifier of the board to which the pin will be saved.
    /// </summary>
    std::string getBoardId() const;
    void setBoardId(std::string const& value);
    bool boardIdIsSet() const;
    void unsetBoard_id();
    /// <summary>
    /// Unique identifier of the board section to which the pin will be saved.
    /// </summary>
    std::string getBoardSectionId() const;
    void setBoardSectionId(std::string const& value);
    bool boardSectionIdIsSet() const;
    void unsetBoard_section_id();

    friend void to_json(nlohmann::json& j, const Pins_save_request& o);
    friend void from_json(const nlohmann::json& j, Pins_save_request& o);
protected:
    std::string m_Board_id;
    bool m_Board_idIsSet;
    std::string m_Board_section_id;
    bool m_Board_section_idIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* Pins_save_request_H_ */
