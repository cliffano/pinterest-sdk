/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.2.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/Pins_save_request.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Pins_save_request::Pins_save_request()
{
    m_Board_id = utility::conversions::to_string_t("");
    m_Board_idIsSet = false;
    m_Board_section_id = utility::conversions::to_string_t("");
    m_Board_section_idIsSet = false;
}

Pins_save_request::~Pins_save_request()
{
}

void Pins_save_request::validate()
{
    // TODO: implement validation
}

web::json::value Pins_save_request::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Board_idIsSet)
    {
        val[utility::conversions::to_string_t(U("board_id"))] = ModelBase::toJson(m_Board_id);
    }
    if(m_Board_section_idIsSet)
    {
        val[utility::conversions::to_string_t(U("board_section_id"))] = ModelBase::toJson(m_Board_section_id);
    }

    return val;
}

bool Pins_save_request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("board_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("board_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setBoardId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBoardId);
            setBoardId(refVal_setBoardId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("board_section_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("board_section_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setBoardSectionId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBoardSectionId);
            setBoardSectionId(refVal_setBoardSectionId);
        }
    }
    return ok;
}

void Pins_save_request::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Board_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("board_id")), m_Board_id));
    }
    if(m_Board_section_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("board_section_id")), m_Board_section_id));
    }
}

bool Pins_save_request::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("board_id"))))
    {
        utility::string_t refVal_setBoardId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("board_id"))), refVal_setBoardId );
        setBoardId(refVal_setBoardId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("board_section_id"))))
    {
        utility::string_t refVal_setBoardSectionId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("board_section_id"))), refVal_setBoardSectionId );
        setBoardSectionId(refVal_setBoardSectionId);
    }
    return ok;
}

utility::string_t Pins_save_request::getBoardId() const
{
    return m_Board_id;
}

void Pins_save_request::setBoardId(const utility::string_t& value)
{
    m_Board_id = value;
    m_Board_idIsSet = true;
}

bool Pins_save_request::boardIdIsSet() const
{
    return m_Board_idIsSet;
}

void Pins_save_request::unsetBoard_id()
{
    m_Board_idIsSet = false;
}
utility::string_t Pins_save_request::getBoardSectionId() const
{
    return m_Board_section_id;
}

void Pins_save_request::setBoardSectionId(const utility::string_t& value)
{
    m_Board_section_id = value;
    m_Board_section_idIsSet = true;
}

bool Pins_save_request::boardSectionIdIsSet() const
{
    return m_Board_section_idIsSet;
}

void Pins_save_request::unsetBoard_section_id()
{
    m_Board_section_idIsSet = false;
}
}
}
}
}


