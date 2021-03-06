/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Pin.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Pin::Pin()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Created_at = utility::datetime();
    m_Created_atIsSet = false;
    m_Link = utility::conversions::to_string_t("");
    m_LinkIsSet = false;
    m_Title = utility::conversions::to_string_t("");
    m_TitleIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_Alt_text = utility::conversions::to_string_t("");
    m_Alt_textIsSet = false;
    m_Board_id = utility::conversions::to_string_t("");
    m_Board_idIsSet = false;
    m_Board_section_id = utility::conversions::to_string_t("");
    m_Board_section_idIsSet = false;
    m_Board_ownerIsSet = false;
    m_MediaIsSet = false;
    m_Media_sourceIsSet = false;
}

Pin::~Pin()
{
}

void Pin::validate()
{
    // TODO: implement validation
}

web::json::value Pin::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_Created_atIsSet)
    {
        val[utility::conversions::to_string_t(U("created_at"))] = ModelBase::toJson(m_Created_at);
    }
    if(m_LinkIsSet)
    {
        val[utility::conversions::to_string_t(U("link"))] = ModelBase::toJson(m_Link);
    }
    if(m_TitleIsSet)
    {
        val[utility::conversions::to_string_t(U("title"))] = ModelBase::toJson(m_Title);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t(U("description"))] = ModelBase::toJson(m_Description);
    }
    if(m_Alt_textIsSet)
    {
        val[utility::conversions::to_string_t(U("alt_text"))] = ModelBase::toJson(m_Alt_text);
    }
    if(m_Board_idIsSet)
    {
        val[utility::conversions::to_string_t(U("board_id"))] = ModelBase::toJson(m_Board_id);
    }
    if(m_Board_section_idIsSet)
    {
        val[utility::conversions::to_string_t(U("board_section_id"))] = ModelBase::toJson(m_Board_section_id);
    }
    if(m_Board_ownerIsSet)
    {
        val[utility::conversions::to_string_t(U("board_owner"))] = ModelBase::toJson(m_Board_owner);
    }
    if(m_MediaIsSet)
    {
        val[utility::conversions::to_string_t(U("media"))] = ModelBase::toJson(m_Media);
    }
    if(m_Media_sourceIsSet)
    {
        val[utility::conversions::to_string_t(U("media_source"))] = ModelBase::toJson(m_Media_source);
    }

    return val;
}

bool Pin::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("created_at"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("created_at")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_created_at;
            ok &= ModelBase::fromJson(fieldValue, refVal_created_at);
            setCreatedAt(refVal_created_at);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("link"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("link")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_link;
            ok &= ModelBase::fromJson(fieldValue, refVal_link);
            setLink(refVal_link);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("title"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("title")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_title;
            ok &= ModelBase::fromJson(fieldValue, refVal_title);
            setTitle(refVal_title);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("description"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("description")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_description;
            ok &= ModelBase::fromJson(fieldValue, refVal_description);
            setDescription(refVal_description);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("alt_text"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("alt_text")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_alt_text;
            ok &= ModelBase::fromJson(fieldValue, refVal_alt_text);
            setAltText(refVal_alt_text);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("board_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("board_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_board_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_board_id);
            setBoardId(refVal_board_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("board_section_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("board_section_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_board_section_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_board_section_id);
            setBoardSectionId(refVal_board_section_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("board_owner"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("board_owner")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BoardOwner> refVal_board_owner;
            ok &= ModelBase::fromJson(fieldValue, refVal_board_owner);
            setBoardOwner(refVal_board_owner);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("media"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("media")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<PinMedia> refVal_media;
            ok &= ModelBase::fromJson(fieldValue, refVal_media);
            setMedia(refVal_media);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("media_source"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("media_source")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<PinMediaSource> refVal_media_source;
            ok &= ModelBase::fromJson(fieldValue, refVal_media_source);
            setMediaSource(refVal_media_source);
        }
    }
    return ok;
}

void Pin::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_Created_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("created_at")), m_Created_at));
    }
    if(m_LinkIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("link")), m_Link));
    }
    if(m_TitleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("title")), m_Title));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("description")), m_Description));
    }
    if(m_Alt_textIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("alt_text")), m_Alt_text));
    }
    if(m_Board_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("board_id")), m_Board_id));
    }
    if(m_Board_section_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("board_section_id")), m_Board_section_id));
    }
    if(m_Board_ownerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("board_owner")), m_Board_owner));
    }
    if(m_MediaIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("media")), m_Media));
    }
    if(m_Media_sourceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("media_source")), m_Media_source));
    }
}

bool Pin::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("created_at"))))
    {
        utility::datetime refVal_created_at;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("created_at"))), refVal_created_at );
        setCreatedAt(refVal_created_at);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("link"))))
    {
        utility::string_t refVal_link;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("link"))), refVal_link );
        setLink(refVal_link);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("title"))))
    {
        utility::string_t refVal_title;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("title"))), refVal_title );
        setTitle(refVal_title);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("description"))))
    {
        utility::string_t refVal_description;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("description"))), refVal_description );
        setDescription(refVal_description);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("alt_text"))))
    {
        utility::string_t refVal_alt_text;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("alt_text"))), refVal_alt_text );
        setAltText(refVal_alt_text);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("board_id"))))
    {
        utility::string_t refVal_board_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("board_id"))), refVal_board_id );
        setBoardId(refVal_board_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("board_section_id"))))
    {
        utility::string_t refVal_board_section_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("board_section_id"))), refVal_board_section_id );
        setBoardSectionId(refVal_board_section_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("board_owner"))))
    {
        std::shared_ptr<BoardOwner> refVal_board_owner;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("board_owner"))), refVal_board_owner );
        setBoardOwner(refVal_board_owner);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("media"))))
    {
        std::shared_ptr<PinMedia> refVal_media;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("media"))), refVal_media );
        setMedia(refVal_media);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("media_source"))))
    {
        std::shared_ptr<PinMediaSource> refVal_media_source;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("media_source"))), refVal_media_source );
        setMediaSource(refVal_media_source);
    }
    return ok;
}

utility::string_t Pin::getId() const
{
    return m_Id;
}

void Pin::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool Pin::idIsSet() const
{
    return m_IdIsSet;
}

void Pin::unsetId()
{
    m_IdIsSet = false;
}
utility::datetime Pin::getCreatedAt() const
{
    return m_Created_at;
}

void Pin::setCreatedAt(const utility::datetime& value)
{
    m_Created_at = value;
    m_Created_atIsSet = true;
}

bool Pin::createdAtIsSet() const
{
    return m_Created_atIsSet;
}

void Pin::unsetCreated_at()
{
    m_Created_atIsSet = false;
}
utility::string_t Pin::getLink() const
{
    return m_Link;
}

void Pin::setLink(const utility::string_t& value)
{
    m_Link = value;
    m_LinkIsSet = true;
}

bool Pin::linkIsSet() const
{
    return m_LinkIsSet;
}

void Pin::unsetLink()
{
    m_LinkIsSet = false;
}
utility::string_t Pin::getTitle() const
{
    return m_Title;
}

void Pin::setTitle(const utility::string_t& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}

bool Pin::titleIsSet() const
{
    return m_TitleIsSet;
}

void Pin::unsetTitle()
{
    m_TitleIsSet = false;
}
utility::string_t Pin::getDescription() const
{
    return m_Description;
}

void Pin::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool Pin::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void Pin::unsetDescription()
{
    m_DescriptionIsSet = false;
}
utility::string_t Pin::getAltText() const
{
    return m_Alt_text;
}

void Pin::setAltText(const utility::string_t& value)
{
    m_Alt_text = value;
    m_Alt_textIsSet = true;
}

bool Pin::altTextIsSet() const
{
    return m_Alt_textIsSet;
}

void Pin::unsetAlt_text()
{
    m_Alt_textIsSet = false;
}
utility::string_t Pin::getBoardId() const
{
    return m_Board_id;
}

void Pin::setBoardId(const utility::string_t& value)
{
    m_Board_id = value;
    m_Board_idIsSet = true;
}

bool Pin::boardIdIsSet() const
{
    return m_Board_idIsSet;
}

void Pin::unsetBoard_id()
{
    m_Board_idIsSet = false;
}
utility::string_t Pin::getBoardSectionId() const
{
    return m_Board_section_id;
}

void Pin::setBoardSectionId(const utility::string_t& value)
{
    m_Board_section_id = value;
    m_Board_section_idIsSet = true;
}

bool Pin::boardSectionIdIsSet() const
{
    return m_Board_section_idIsSet;
}

void Pin::unsetBoard_section_id()
{
    m_Board_section_idIsSet = false;
}
std::shared_ptr<BoardOwner> Pin::getBoardOwner() const
{
    return m_Board_owner;
}

void Pin::setBoardOwner(const std::shared_ptr<BoardOwner>& value)
{
    m_Board_owner = value;
    m_Board_ownerIsSet = true;
}

bool Pin::boardOwnerIsSet() const
{
    return m_Board_ownerIsSet;
}

void Pin::unsetBoard_owner()
{
    m_Board_ownerIsSet = false;
}
std::shared_ptr<PinMedia> Pin::getMedia() const
{
    return m_Media;
}

void Pin::setMedia(const std::shared_ptr<PinMedia>& value)
{
    m_Media = value;
    m_MediaIsSet = true;
}

bool Pin::mediaIsSet() const
{
    return m_MediaIsSet;
}

void Pin::unsetMedia()
{
    m_MediaIsSet = false;
}
std::shared_ptr<PinMediaSource> Pin::getMediaSource() const
{
    return m_Media_source;
}

void Pin::setMediaSource(const std::shared_ptr<PinMediaSource>& value)
{
    m_Media_source = value;
    m_Media_sourceIsSet = true;
}

bool Pin::mediaSourceIsSet() const
{
    return m_Media_sourceIsSet;
}

void Pin::unsetMedia_source()
{
    m_Media_sourceIsSet = false;
}
}
}
}
}


