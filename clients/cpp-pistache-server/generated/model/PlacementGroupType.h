/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.4.1
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * PlacementGroupType.h
 *
 * Campaign placement group type
 */

#ifndef PlacementGroupType_H_
#define PlacementGroupType_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Campaign placement group type
/// </summary>
class  PlacementGroupType
{
public:
    PlacementGroupType();
    virtual ~PlacementGroupType() = default;

    enum class ePlacementGroupType {
    // To have a valid default value.
    // Avoiding name clashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    ALL, 
    SEARCH, 
    BROWSE, 
    OTHER
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

    bool operator==(const PlacementGroupType& rhs) const;
    bool operator!=(const PlacementGroupType& rhs) const;

    /////////////////////////////////////////////
    /// PlacementGroupType members

    PlacementGroupType::ePlacementGroupType getValue() const;
    void setValue(PlacementGroupType::ePlacementGroupType value);
    
    friend void to_json(nlohmann::json& j, const PlacementGroupType& o);
    friend void from_json(const nlohmann::json& j, PlacementGroupType& o);
protected:
    PlacementGroupType::ePlacementGroupType m_value = PlacementGroupType::ePlacementGroupType::INVALID_VALUE_OPENAPI_GENERATED;
};

} // namespace org::openapitools::server::model

#endif /* PlacementGroupType_H_ */
