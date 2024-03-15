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
 * PinUpdate_carousel_slots_inner.h
 *
 * 
 */

#ifndef PinUpdate_carousel_slots_inner_H_
#define PinUpdate_carousel_slots_inner_H_


#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  PinUpdate_carousel_slots_inner
{
public:
    PinUpdate_carousel_slots_inner();
    virtual ~PinUpdate_carousel_slots_inner() = default;


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

    bool operator==(const PinUpdate_carousel_slots_inner& rhs) const;
    bool operator!=(const PinUpdate_carousel_slots_inner& rhs) const;

    /////////////////////////////////////////////
    /// PinUpdate_carousel_slots_inner members

    /// <summary>
    /// Carousel Pin slot title.
    /// </summary>
    std::string getTitle() const;
    void setTitle(std::string const& value);
    bool titleIsSet() const;
    void unsetTitle();
    /// <summary>
    /// Carousel Pin slot description.
    /// </summary>
    std::string getDescription() const;
    void setDescription(std::string const& value);
    bool descriptionIsSet() const;
    void unsetDescription();
    /// <summary>
    /// Carousel Pin slot link.
    /// </summary>
    std::string getLink() const;
    void setLink(std::string const& value);
    bool linkIsSet() const;
    void unsetLink();

    friend  void to_json(nlohmann::json& j, const PinUpdate_carousel_slots_inner& o);
    friend  void from_json(const nlohmann::json& j, PinUpdate_carousel_slots_inner& o);
protected:
    std::string m_Title;
    bool m_TitleIsSet;
    std::string m_Description;
    bool m_DescriptionIsSet;
    std::string m_Link;
    bool m_LinkIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* PinUpdate_carousel_slots_inner_H_ */
