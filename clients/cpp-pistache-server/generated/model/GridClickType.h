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
 * GridClickType.h
 *
 * Where a user is taken after clicking on an ad in grid.
 */

#ifndef GridClickType_H_
#define GridClickType_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Where a user is taken after clicking on an ad in grid.
/// </summary>
class  GridClickType
{
public:
    GridClickType();
    virtual ~GridClickType() = default;

    enum class eGridClickType {
    // To have a valid default value.
    // Avoiding name clashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    CLOSEUP, 
    DIRECT_TO_DESTINATION
    };

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

    bool operator==(const GridClickType& rhs) const;
    bool operator!=(const GridClickType& rhs) const;

    /////////////////////////////////////////////
    /// GridClickType members

    GridClickType::eGridClickType getValue() const;
    void setValue(GridClickType::eGridClickType value);
    
    friend  void to_json(nlohmann::json& j, const GridClickType& o);
    friend  void from_json(const nlohmann::json& j, GridClickType& o);
protected:
    GridClickType::eGridClickType m_value = GridClickType::eGridClickType::INVALID_VALUE_OPENAPI_GENERATED;
};

} // namespace org::openapitools::server::model

#endif /* GridClickType_H_ */
