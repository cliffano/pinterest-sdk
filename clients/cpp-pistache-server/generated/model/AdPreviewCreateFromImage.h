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
 * AdPreviewCreateFromImage.h
 *
 * 
 */

#ifndef AdPreviewCreateFromImage_H_
#define AdPreviewCreateFromImage_H_


#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  AdPreviewCreateFromImage
{
public:
    AdPreviewCreateFromImage();
    virtual ~AdPreviewCreateFromImage() = default;


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

    bool operator==(const AdPreviewCreateFromImage& rhs) const;
    bool operator!=(const AdPreviewCreateFromImage& rhs) const;

    /////////////////////////////////////////////
    /// AdPreviewCreateFromImage members

    /// <summary>
    /// Image URL.
    /// </summary>
    std::string getImageUrl() const;
    void setImageUrl(std::string const& value);
    /// <summary>
    /// Title displayed below ad.
    /// </summary>
    std::string getTitle() const;
    void setTitle(std::string const& value);

    friend  void to_json(nlohmann::json& j, const AdPreviewCreateFromImage& o);
    friend  void from_json(const nlohmann::json& j, AdPreviewCreateFromImage& o);
protected:
    std::string m_Image_url;

    std::string m_Title;

    
};

} // namespace org::openapitools::server::model

#endif /* AdPreviewCreateFromImage_H_ */
