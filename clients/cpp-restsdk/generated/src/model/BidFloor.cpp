/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/BidFloor.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



BidFloor::BidFloor()
{
    m_Bid_floorsIsSet = false;
    m_Type = utility::conversions::to_string_t("");
    m_TypeIsSet = false;
}

BidFloor::~BidFloor()
{
}

void BidFloor::validate()
{
    // TODO: implement validation
}

web::json::value BidFloor::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Bid_floorsIsSet)
    {
        val[utility::conversions::to_string_t(U("bid_floors"))] = ModelBase::toJson(m_Bid_floors);
    }
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t(U("type"))] = ModelBase::toJson(m_Type);
    }

    return val;
}

bool BidFloor::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("bid_floors"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("bid_floors")));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal_setBidFloors;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBidFloors);
            setBidFloors(refVal_setBidFloors);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("type")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setType);
            setType(refVal_setType);
        }
    }
    return ok;
}

void BidFloor::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Bid_floorsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("bid_floors")), m_Bid_floors));
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("type")), m_Type));
    }
}

bool BidFloor::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("bid_floors"))))
    {
        std::vector<int32_t> refVal_setBidFloors;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("bid_floors"))), refVal_setBidFloors );
        setBidFloors(refVal_setBidFloors);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("type"))))
    {
        utility::string_t refVal_setType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("type"))), refVal_setType );
        setType(refVal_setType);
    }
    return ok;
}

std::vector<int32_t>& BidFloor::getBidFloors()
{
    return m_Bid_floors;
}

void BidFloor::setBidFloors(std::vector<int32_t> value)
{
    m_Bid_floors = value;
    m_Bid_floorsIsSet = true;
}

bool BidFloor::bidFloorsIsSet() const
{
    return m_Bid_floorsIsSet;
}

void BidFloor::unsetBid_floors()
{
    m_Bid_floorsIsSet = false;
}
utility::string_t BidFloor::getType() const
{
    return m_Type;
}

void BidFloor::setType(const utility::string_t& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}

bool BidFloor::typeIsSet() const
{
    return m_TypeIsSet;
}

void BidFloor::unsetType()
{
    m_TypeIsSet = false;
}
}
}
}
}


