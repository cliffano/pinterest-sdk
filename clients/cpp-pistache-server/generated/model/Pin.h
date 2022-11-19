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
 * Pin.h
 *
 * Pin
 */

#ifndef Pin_H_
#define Pin_H_


#include "Pin_media_source.h"
#include <string>
#include "Board_owner.h"
#include "Pin_media.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Pin
/// </summary>
class  Pin
{
public:
    Pin();
    virtual ~Pin() = default;


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

    bool operator==(const Pin& rhs) const;
    bool operator!=(const Pin& rhs) const;

    /////////////////////////////////////////////
    /// Pin members

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
    std::string getCreatedAt() const;
    void setCreatedAt(std::string const& value);
    bool createdAtIsSet() const;
    void unsetCreated_at();
    /// <summary>
    /// 
    /// </summary>
    std::string getLink() const;
    void setLink(std::string const& value);
    bool linkIsSet() const;
    void unsetLink();
    /// <summary>
    /// 
    /// </summary>
    std::string getTitle() const;
    void setTitle(std::string const& value);
    bool titleIsSet() const;
    void unsetTitle();
    /// <summary>
    /// 
    /// </summary>
    std::string getDescription() const;
    void setDescription(std::string const& value);
    bool descriptionIsSet() const;
    void unsetDescription();
    /// <summary>
    /// Dominant pin color. Hex number, e.g. \\\&quot;#6E7874\\\&quot;.
    /// </summary>
    std::string getDominantColor() const;
    void setDominantColor(std::string const& value);
    bool dominantColorIsSet() const;
    void unsetDominant_color();
    /// <summary>
    /// 
    /// </summary>
    std::string getAltText() const;
    void setAltText(std::string const& value);
    bool altTextIsSet() const;
    void unsetAlt_text();
    /// <summary>
    /// The board to which this Pin belongs.
    /// </summary>
    std::string getBoardId() const;
    void setBoardId(std::string const& value);
    bool boardIdIsSet() const;
    void unsetBoard_id();
    /// <summary>
    /// The board section to which this Pin belongs.
    /// </summary>
    std::string getBoardSectionId() const;
    void setBoardSectionId(std::string const& value);
    bool boardSectionIdIsSet() const;
    void unsetBoard_section_id();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::Board_owner getBoardOwner() const;
    void setBoardOwner(org::openapitools::server::model::Board_owner const& value);
    bool boardOwnerIsSet() const;
    void unsetBoard_owner();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::Pin_media getMedia() const;
    void setMedia(org::openapitools::server::model::Pin_media const& value);
    bool mediaIsSet() const;
    void unsetMedia();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::Pin_media_source getMediaSource() const;
    void setMediaSource(org::openapitools::server::model::Pin_media_source const& value);
    bool mediaSourceIsSet() const;
    void unsetMedia_source();
    /// <summary>
    /// The source pin id if this pin was saved from another pin. &lt;a href&#x3D;\&quot;https://help.pinterest.com/article/save-pins-on-pinterest\&quot;&gt;Learn more&lt;/a&gt;.
    /// </summary>
    std::string getParentPinId() const;
    void setParentPinId(std::string const& value);
    bool parentPinIdIsSet() const;
    void unsetParent_pin_id();

    friend void to_json(nlohmann::json& j, const Pin& o);
    friend void from_json(const nlohmann::json& j, Pin& o);
protected:
    std::string m_Id;
    bool m_IdIsSet;
    std::string m_Created_at;
    bool m_Created_atIsSet;
    std::string m_Link;
    bool m_LinkIsSet;
    std::string m_Title;
    bool m_TitleIsSet;
    std::string m_Description;
    bool m_DescriptionIsSet;
    std::string m_Dominant_color;
    bool m_Dominant_colorIsSet;
    std::string m_Alt_text;
    bool m_Alt_textIsSet;
    std::string m_Board_id;
    bool m_Board_idIsSet;
    std::string m_Board_section_id;
    bool m_Board_section_idIsSet;
    org::openapitools::server::model::Board_owner m_Board_owner;
    bool m_Board_ownerIsSet;
    org::openapitools::server::model::Pin_media m_Media;
    bool m_MediaIsSet;
    org::openapitools::server::model::Pin_media_source m_Media_source;
    bool m_Media_sourceIsSet;
    std::string m_Parent_pin_id;
    bool m_Parent_pin_idIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* Pin_H_ */
