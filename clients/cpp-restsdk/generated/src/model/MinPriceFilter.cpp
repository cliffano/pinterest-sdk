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



#include "CppRestOpenAPIClient/model/MinPriceFilter.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



MinPriceFilter::MinPriceFilter()
{
    m_MIN_PRICEIsSet = false;
}

MinPriceFilter::~MinPriceFilter()
{
}

void MinPriceFilter::validate()
{
    // TODO: implement validation
}

web::json::value MinPriceFilter::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_MIN_PRICEIsSet)
    {
        val[utility::conversions::to_string_t(U("MIN_PRICE"))] = ModelBase::toJson(m_MIN_PRICE);
    }

    return val;
}

bool MinPriceFilter::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("MIN_PRICE"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("MIN_PRICE")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsProductGroupPricingCriteria> refVal_setMINPRICE;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMINPRICE);
            setMINPRICE(refVal_setMINPRICE);
        }
    }
    return ok;
}

void MinPriceFilter::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_MIN_PRICEIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("MIN_PRICE")), m_MIN_PRICE));
    }
}

bool MinPriceFilter::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("MIN_PRICE"))))
    {
        std::shared_ptr<CatalogsProductGroupPricingCriteria> refVal_setMINPRICE;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("MIN_PRICE"))), refVal_setMINPRICE );
        setMINPRICE(refVal_setMINPRICE);
    }
    return ok;
}

std::shared_ptr<CatalogsProductGroupPricingCriteria> MinPriceFilter::getMINPRICE() const
{
    return m_MIN_PRICE;
}

void MinPriceFilter::setMINPRICE(const std::shared_ptr<CatalogsProductGroupPricingCriteria>& value)
{
    m_MIN_PRICE = value;
    m_MIN_PRICEIsSet = true;
}

bool MinPriceFilter::mINPRICEIsSet() const
{
    return m_MIN_PRICEIsSet;
}

void MinPriceFilter::unsetMIN_PRICE()
{
    m_MIN_PRICEIsSet = false;
}
}
}
}
}


