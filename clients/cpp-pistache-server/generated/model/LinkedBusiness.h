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
 * LinkedBusiness.h
 *
 * 
 */

#ifndef LinkedBusiness_H_
#define LinkedBusiness_H_


#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  LinkedBusiness
{
public:
    LinkedBusiness();
    virtual ~LinkedBusiness() = default;


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

    bool operator==(const LinkedBusiness& rhs) const;
    bool operator!=(const LinkedBusiness& rhs) const;

    /////////////////////////////////////////////
    /// LinkedBusiness members

    /// <summary>
    /// Username
    /// </summary>
    std::string getUsername() const;
    void setUsername(std::string const& value);
    bool usernameIsSet() const;
    void unsetUsername();
    /// <summary>
    /// image_small_url
    /// </summary>
    std::string getImageSmallUrl() const;
    void setImageSmallUrl(std::string const& value);
    bool imageSmallUrlIsSet() const;
    void unsetImage_small_url();
    /// <summary>
    /// image_medium_url
    /// </summary>
    std::string getImageMediumUrl() const;
    void setImageMediumUrl(std::string const& value);
    bool imageMediumUrlIsSet() const;
    void unsetImage_medium_url();
    /// <summary>
    /// image_large_url
    /// </summary>
    std::string getImageLargeUrl() const;
    void setImageLargeUrl(std::string const& value);
    bool imageLargeUrlIsSet() const;
    void unsetImage_large_url();
    /// <summary>
    /// image_xlarge_url
    /// </summary>
    std::string getImageXlargeUrl() const;
    void setImageXlargeUrl(std::string const& value);
    bool imageXlargeUrlIsSet() const;
    void unsetImage_xlarge_url();

    friend  void to_json(nlohmann::json& j, const LinkedBusiness& o);
    friend  void from_json(const nlohmann::json& j, LinkedBusiness& o);
protected:
    std::string m_Username;
    bool m_UsernameIsSet;
    std::string m_Image_small_url;
    bool m_Image_small_urlIsSet;
    std::string m_Image_medium_url;
    bool m_Image_medium_urlIsSet;
    std::string m_Image_large_url;
    bool m_Image_large_urlIsSet;
    std::string m_Image_xlarge_url;
    bool m_Image_xlarge_urlIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* LinkedBusiness_H_ */
