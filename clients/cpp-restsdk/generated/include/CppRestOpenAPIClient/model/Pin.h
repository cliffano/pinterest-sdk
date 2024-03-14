/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Pin.h
 *
 * Pin
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Pin_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Pin_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/PinMediaSource.h"
#include "CppRestOpenAPIClient/model/Pin_media.h"
#include "CppRestOpenAPIClient/model/Board_owner.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class Board_owner;
class Pin_media;
class PinMediaSource;

/// <summary>
/// Pin
/// </summary>
class  Pin
    : public ModelBase
{
public:
    Pin();
    virtual ~Pin();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Pin members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreated_at();

    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLink() const;
    bool linkIsSet() const;
    void unsetLink();

    void setLink(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTitle() const;
    bool titleIsSet() const;
    void unsetTitle();

    void setTitle(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();

    void setDescription(const utility::string_t& value);

    /// <summary>
    /// Dominant pin color. Hex number, e.g. \\\&quot;#6E7874\\\&quot;.
    /// </summary>
    utility::string_t getDominantColor() const;
    bool dominantColorIsSet() const;
    void unsetDominant_color();

    void setDominantColor(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAltText() const;
    bool altTextIsSet() const;
    void unsetAlt_text();

    void setAltText(const utility::string_t& value);

    /// <summary>
    /// The board to which this Pin belongs.
    /// </summary>
    utility::string_t getBoardId() const;
    bool boardIdIsSet() const;
    void unsetBoard_id();

    void setBoardId(const utility::string_t& value);

    /// <summary>
    /// The board section to which this Pin belongs.
    /// </summary>
    utility::string_t getBoardSectionId() const;
    bool boardSectionIdIsSet() const;
    void unsetBoard_section_id();

    void setBoardSectionId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Board_owner> getBoardOwner() const;
    bool boardOwnerIsSet() const;
    void unsetBoard_owner();

    void setBoardOwner(const std::shared_ptr<Board_owner>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Pin_media> getMedia() const;
    bool mediaIsSet() const;
    void unsetMedia();

    void setMedia(const std::shared_ptr<Pin_media>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<PinMediaSource> getMediaSource() const;
    bool mediaSourceIsSet() const;
    void unsetMedia_source();

    void setMediaSource(const std::shared_ptr<PinMediaSource>& value);

    /// <summary>
    /// The source pin id if this pin was saved from another pin. &lt;a href&#x3D;\&quot;https://help.pinterest.com/article/save-pins-on-pinterest\&quot;&gt;Learn more&lt;/a&gt;.
    /// </summary>
    utility::string_t getParentPinId() const;
    bool parentPinIdIsSet() const;
    void unsetParent_pin_id();

    void setParentPinId(const utility::string_t& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::datetime m_Created_at;
    bool m_Created_atIsSet;
    utility::string_t m_Link;
    bool m_LinkIsSet;
    utility::string_t m_Title;
    bool m_TitleIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    utility::string_t m_Dominant_color;
    bool m_Dominant_colorIsSet;
    utility::string_t m_Alt_text;
    bool m_Alt_textIsSet;
    utility::string_t m_Board_id;
    bool m_Board_idIsSet;
    utility::string_t m_Board_section_id;
    bool m_Board_section_idIsSet;
    std::shared_ptr<Board_owner> m_Board_owner;
    bool m_Board_ownerIsSet;
    std::shared_ptr<Pin_media> m_Media;
    bool m_MediaIsSet;
    std::shared_ptr<PinMediaSource> m_Media_source;
    bool m_Media_sourceIsSet;
    utility::string_t m_Parent_pin_id;
    bool m_Parent_pin_idIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Pin_H_ */
