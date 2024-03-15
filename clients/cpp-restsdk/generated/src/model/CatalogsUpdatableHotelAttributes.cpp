/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/CatalogsUpdatableHotelAttributes.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



CatalogsUpdatableHotelAttributes::CatalogsUpdatableHotelAttributes()
{
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Link = utility::conversions::to_string_t("");
    m_LinkIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_Brand = utility::conversions::to_string_t("");
    m_BrandIsSet = false;
    m_Latitude = 0.0;
    m_LatitudeIsSet = false;
    m_Longitude = 0.0;
    m_LongitudeIsSet = false;
    m_NeighborhoodIsSet = false;
    m_AddressIsSet = false;
    m_Custom_label_0 = utility::conversions::to_string_t("");
    m_Custom_label_0IsSet = false;
    m_Custom_label_1 = utility::conversions::to_string_t("");
    m_Custom_label_1IsSet = false;
    m_Custom_label_2 = utility::conversions::to_string_t("");
    m_Custom_label_2IsSet = false;
    m_Custom_label_3 = utility::conversions::to_string_t("");
    m_Custom_label_3IsSet = false;
    m_Custom_label_4 = utility::conversions::to_string_t("");
    m_Custom_label_4IsSet = false;
    m_Category = utility::conversions::to_string_t("");
    m_CategoryIsSet = false;
    m_Base_price = utility::conversions::to_string_t("");
    m_Base_priceIsSet = false;
    m_Sale_price = utility::conversions::to_string_t("");
    m_Sale_priceIsSet = false;
    m_Guest_ratingsIsSet = false;
}

CatalogsUpdatableHotelAttributes::~CatalogsUpdatableHotelAttributes()
{
}

void CatalogsUpdatableHotelAttributes::validate()
{
    // TODO: implement validation
}

web::json::value CatalogsUpdatableHotelAttributes::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_LinkIsSet)
    {
        val[utility::conversions::to_string_t(U("link"))] = ModelBase::toJson(m_Link);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t(U("description"))] = ModelBase::toJson(m_Description);
    }
    if(m_BrandIsSet)
    {
        val[utility::conversions::to_string_t(U("brand"))] = ModelBase::toJson(m_Brand);
    }
    if(m_LatitudeIsSet)
    {
        val[utility::conversions::to_string_t(U("latitude"))] = ModelBase::toJson(m_Latitude);
    }
    if(m_LongitudeIsSet)
    {
        val[utility::conversions::to_string_t(U("longitude"))] = ModelBase::toJson(m_Longitude);
    }
    if(m_NeighborhoodIsSet)
    {
        val[utility::conversions::to_string_t(U("neighborhood"))] = ModelBase::toJson(m_Neighborhood);
    }
    if(m_AddressIsSet)
    {
        val[utility::conversions::to_string_t(U("address"))] = ModelBase::toJson(m_Address);
    }
    if(m_Custom_label_0IsSet)
    {
        val[utility::conversions::to_string_t(U("custom_label_0"))] = ModelBase::toJson(m_Custom_label_0);
    }
    if(m_Custom_label_1IsSet)
    {
        val[utility::conversions::to_string_t(U("custom_label_1"))] = ModelBase::toJson(m_Custom_label_1);
    }
    if(m_Custom_label_2IsSet)
    {
        val[utility::conversions::to_string_t(U("custom_label_2"))] = ModelBase::toJson(m_Custom_label_2);
    }
    if(m_Custom_label_3IsSet)
    {
        val[utility::conversions::to_string_t(U("custom_label_3"))] = ModelBase::toJson(m_Custom_label_3);
    }
    if(m_Custom_label_4IsSet)
    {
        val[utility::conversions::to_string_t(U("custom_label_4"))] = ModelBase::toJson(m_Custom_label_4);
    }
    if(m_CategoryIsSet)
    {
        val[utility::conversions::to_string_t(U("category"))] = ModelBase::toJson(m_Category);
    }
    if(m_Base_priceIsSet)
    {
        val[utility::conversions::to_string_t(U("base_price"))] = ModelBase::toJson(m_Base_price);
    }
    if(m_Sale_priceIsSet)
    {
        val[utility::conversions::to_string_t(U("sale_price"))] = ModelBase::toJson(m_Sale_price);
    }
    if(m_Guest_ratingsIsSet)
    {
        val[utility::conversions::to_string_t(U("guest_ratings"))] = ModelBase::toJson(m_Guest_ratings);
    }

    return val;
}

bool CatalogsUpdatableHotelAttributes::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("link"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("link")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setLink;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLink);
            setLink(refVal_setLink);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("description"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("description")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDescription;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDescription);
            setDescription(refVal_setDescription);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("brand"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("brand")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setBrand;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBrand);
            setBrand(refVal_setBrand);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("latitude"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("latitude")));
        if(!fieldValue.is_null())
        {
            double refVal_setLatitude;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLatitude);
            setLatitude(refVal_setLatitude);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("longitude"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("longitude")));
        if(!fieldValue.is_null())
        {
            double refVal_setLongitude;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLongitude);
            setLongitude(refVal_setLongitude);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("neighborhood"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("neighborhood")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setNeighborhood;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNeighborhood);
            setNeighborhood(refVal_setNeighborhood);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("address"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("address")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsHotelAddress> refVal_setAddress;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAddress);
            setAddress(refVal_setAddress);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("custom_label_0"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("custom_label_0")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCustomLabel0;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCustomLabel0);
            setCustomLabel0(refVal_setCustomLabel0);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("custom_label_1"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("custom_label_1")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCustomLabel1;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCustomLabel1);
            setCustomLabel1(refVal_setCustomLabel1);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("custom_label_2"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("custom_label_2")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCustomLabel2;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCustomLabel2);
            setCustomLabel2(refVal_setCustomLabel2);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("custom_label_3"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("custom_label_3")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCustomLabel3;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCustomLabel3);
            setCustomLabel3(refVal_setCustomLabel3);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("custom_label_4"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("custom_label_4")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCustomLabel4;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCustomLabel4);
            setCustomLabel4(refVal_setCustomLabel4);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("category"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("category")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCategory;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCategory);
            setCategory(refVal_setCategory);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("base_price"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("base_price")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setBasePrice;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBasePrice);
            setBasePrice(refVal_setBasePrice);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("sale_price"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("sale_price")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSalePrice;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSalePrice);
            setSalePrice(refVal_setSalePrice);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("guest_ratings"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("guest_ratings")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsHotelGuestRatings> refVal_setGuestRatings;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGuestRatings);
            setGuestRatings(refVal_setGuestRatings);
        }
    }
    return ok;
}

void CatalogsUpdatableHotelAttributes::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_LinkIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("link")), m_Link));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("description")), m_Description));
    }
    if(m_BrandIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("brand")), m_Brand));
    }
    if(m_LatitudeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("latitude")), m_Latitude));
    }
    if(m_LongitudeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("longitude")), m_Longitude));
    }
    if(m_NeighborhoodIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("neighborhood")), m_Neighborhood));
    }
    if(m_AddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("address")), m_Address));
    }
    if(m_Custom_label_0IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("custom_label_0")), m_Custom_label_0));
    }
    if(m_Custom_label_1IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("custom_label_1")), m_Custom_label_1));
    }
    if(m_Custom_label_2IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("custom_label_2")), m_Custom_label_2));
    }
    if(m_Custom_label_3IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("custom_label_3")), m_Custom_label_3));
    }
    if(m_Custom_label_4IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("custom_label_4")), m_Custom_label_4));
    }
    if(m_CategoryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("category")), m_Category));
    }
    if(m_Base_priceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("base_price")), m_Base_price));
    }
    if(m_Sale_priceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("sale_price")), m_Sale_price));
    }
    if(m_Guest_ratingsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("guest_ratings")), m_Guest_ratings));
    }
}

bool CatalogsUpdatableHotelAttributes::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("link"))))
    {
        utility::string_t refVal_setLink;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("link"))), refVal_setLink );
        setLink(refVal_setLink);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("description"))))
    {
        utility::string_t refVal_setDescription;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("description"))), refVal_setDescription );
        setDescription(refVal_setDescription);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("brand"))))
    {
        utility::string_t refVal_setBrand;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("brand"))), refVal_setBrand );
        setBrand(refVal_setBrand);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("latitude"))))
    {
        double refVal_setLatitude;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("latitude"))), refVal_setLatitude );
        setLatitude(refVal_setLatitude);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("longitude"))))
    {
        double refVal_setLongitude;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("longitude"))), refVal_setLongitude );
        setLongitude(refVal_setLongitude);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("neighborhood"))))
    {
        std::vector<utility::string_t> refVal_setNeighborhood;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("neighborhood"))), refVal_setNeighborhood );
        setNeighborhood(refVal_setNeighborhood);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("address"))))
    {
        std::shared_ptr<CatalogsHotelAddress> refVal_setAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("address"))), refVal_setAddress );
        setAddress(refVal_setAddress);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("custom_label_0"))))
    {
        utility::string_t refVal_setCustomLabel0;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("custom_label_0"))), refVal_setCustomLabel0 );
        setCustomLabel0(refVal_setCustomLabel0);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("custom_label_1"))))
    {
        utility::string_t refVal_setCustomLabel1;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("custom_label_1"))), refVal_setCustomLabel1 );
        setCustomLabel1(refVal_setCustomLabel1);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("custom_label_2"))))
    {
        utility::string_t refVal_setCustomLabel2;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("custom_label_2"))), refVal_setCustomLabel2 );
        setCustomLabel2(refVal_setCustomLabel2);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("custom_label_3"))))
    {
        utility::string_t refVal_setCustomLabel3;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("custom_label_3"))), refVal_setCustomLabel3 );
        setCustomLabel3(refVal_setCustomLabel3);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("custom_label_4"))))
    {
        utility::string_t refVal_setCustomLabel4;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("custom_label_4"))), refVal_setCustomLabel4 );
        setCustomLabel4(refVal_setCustomLabel4);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("category"))))
    {
        utility::string_t refVal_setCategory;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("category"))), refVal_setCategory );
        setCategory(refVal_setCategory);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("base_price"))))
    {
        utility::string_t refVal_setBasePrice;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("base_price"))), refVal_setBasePrice );
        setBasePrice(refVal_setBasePrice);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("sale_price"))))
    {
        utility::string_t refVal_setSalePrice;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("sale_price"))), refVal_setSalePrice );
        setSalePrice(refVal_setSalePrice);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("guest_ratings"))))
    {
        std::shared_ptr<CatalogsHotelGuestRatings> refVal_setGuestRatings;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("guest_ratings"))), refVal_setGuestRatings );
        setGuestRatings(refVal_setGuestRatings);
    }
    return ok;
}

utility::string_t CatalogsUpdatableHotelAttributes::getName() const
{
    return m_Name;
}

void CatalogsUpdatableHotelAttributes::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool CatalogsUpdatableHotelAttributes::nameIsSet() const
{
    return m_NameIsSet;
}

void CatalogsUpdatableHotelAttributes::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t CatalogsUpdatableHotelAttributes::getLink() const
{
    return m_Link;
}

void CatalogsUpdatableHotelAttributes::setLink(const utility::string_t& value)
{
    m_Link = value;
    m_LinkIsSet = true;
}

bool CatalogsUpdatableHotelAttributes::linkIsSet() const
{
    return m_LinkIsSet;
}

void CatalogsUpdatableHotelAttributes::unsetLink()
{
    m_LinkIsSet = false;
}
utility::string_t CatalogsUpdatableHotelAttributes::getDescription() const
{
    return m_Description;
}

void CatalogsUpdatableHotelAttributes::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool CatalogsUpdatableHotelAttributes::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void CatalogsUpdatableHotelAttributes::unsetDescription()
{
    m_DescriptionIsSet = false;
}
utility::string_t CatalogsUpdatableHotelAttributes::getBrand() const
{
    return m_Brand;
}

void CatalogsUpdatableHotelAttributes::setBrand(const utility::string_t& value)
{
    m_Brand = value;
    m_BrandIsSet = true;
}

bool CatalogsUpdatableHotelAttributes::brandIsSet() const
{
    return m_BrandIsSet;
}

void CatalogsUpdatableHotelAttributes::unsetBrand()
{
    m_BrandIsSet = false;
}
double CatalogsUpdatableHotelAttributes::getLatitude() const
{
    return m_Latitude;
}

void CatalogsUpdatableHotelAttributes::setLatitude(double value)
{
    m_Latitude = value;
    m_LatitudeIsSet = true;
}

bool CatalogsUpdatableHotelAttributes::latitudeIsSet() const
{
    return m_LatitudeIsSet;
}

void CatalogsUpdatableHotelAttributes::unsetLatitude()
{
    m_LatitudeIsSet = false;
}
double CatalogsUpdatableHotelAttributes::getLongitude() const
{
    return m_Longitude;
}

void CatalogsUpdatableHotelAttributes::setLongitude(double value)
{
    m_Longitude = value;
    m_LongitudeIsSet = true;
}

bool CatalogsUpdatableHotelAttributes::longitudeIsSet() const
{
    return m_LongitudeIsSet;
}

void CatalogsUpdatableHotelAttributes::unsetLongitude()
{
    m_LongitudeIsSet = false;
}
std::vector<utility::string_t>& CatalogsUpdatableHotelAttributes::getNeighborhood()
{
    return m_Neighborhood;
}

void CatalogsUpdatableHotelAttributes::setNeighborhood(const std::vector<utility::string_t>& value)
{
    m_Neighborhood = value;
    m_NeighborhoodIsSet = true;
}

bool CatalogsUpdatableHotelAttributes::neighborhoodIsSet() const
{
    return m_NeighborhoodIsSet;
}

void CatalogsUpdatableHotelAttributes::unsetNeighborhood()
{
    m_NeighborhoodIsSet = false;
}
std::shared_ptr<CatalogsHotelAddress> CatalogsUpdatableHotelAttributes::getAddress() const
{
    return m_Address;
}

void CatalogsUpdatableHotelAttributes::setAddress(const std::shared_ptr<CatalogsHotelAddress>& value)
{
    m_Address = value;
    m_AddressIsSet = true;
}

bool CatalogsUpdatableHotelAttributes::addressIsSet() const
{
    return m_AddressIsSet;
}

void CatalogsUpdatableHotelAttributes::unsetAddress()
{
    m_AddressIsSet = false;
}
utility::string_t CatalogsUpdatableHotelAttributes::getCustomLabel0() const
{
    return m_Custom_label_0;
}

void CatalogsUpdatableHotelAttributes::setCustomLabel0(const utility::string_t& value)
{
    m_Custom_label_0 = value;
    m_Custom_label_0IsSet = true;
}

bool CatalogsUpdatableHotelAttributes::customLabel0IsSet() const
{
    return m_Custom_label_0IsSet;
}

void CatalogsUpdatableHotelAttributes::unsetCustom_label_0()
{
    m_Custom_label_0IsSet = false;
}
utility::string_t CatalogsUpdatableHotelAttributes::getCustomLabel1() const
{
    return m_Custom_label_1;
}

void CatalogsUpdatableHotelAttributes::setCustomLabel1(const utility::string_t& value)
{
    m_Custom_label_1 = value;
    m_Custom_label_1IsSet = true;
}

bool CatalogsUpdatableHotelAttributes::customLabel1IsSet() const
{
    return m_Custom_label_1IsSet;
}

void CatalogsUpdatableHotelAttributes::unsetCustom_label_1()
{
    m_Custom_label_1IsSet = false;
}
utility::string_t CatalogsUpdatableHotelAttributes::getCustomLabel2() const
{
    return m_Custom_label_2;
}

void CatalogsUpdatableHotelAttributes::setCustomLabel2(const utility::string_t& value)
{
    m_Custom_label_2 = value;
    m_Custom_label_2IsSet = true;
}

bool CatalogsUpdatableHotelAttributes::customLabel2IsSet() const
{
    return m_Custom_label_2IsSet;
}

void CatalogsUpdatableHotelAttributes::unsetCustom_label_2()
{
    m_Custom_label_2IsSet = false;
}
utility::string_t CatalogsUpdatableHotelAttributes::getCustomLabel3() const
{
    return m_Custom_label_3;
}

void CatalogsUpdatableHotelAttributes::setCustomLabel3(const utility::string_t& value)
{
    m_Custom_label_3 = value;
    m_Custom_label_3IsSet = true;
}

bool CatalogsUpdatableHotelAttributes::customLabel3IsSet() const
{
    return m_Custom_label_3IsSet;
}

void CatalogsUpdatableHotelAttributes::unsetCustom_label_3()
{
    m_Custom_label_3IsSet = false;
}
utility::string_t CatalogsUpdatableHotelAttributes::getCustomLabel4() const
{
    return m_Custom_label_4;
}

void CatalogsUpdatableHotelAttributes::setCustomLabel4(const utility::string_t& value)
{
    m_Custom_label_4 = value;
    m_Custom_label_4IsSet = true;
}

bool CatalogsUpdatableHotelAttributes::customLabel4IsSet() const
{
    return m_Custom_label_4IsSet;
}

void CatalogsUpdatableHotelAttributes::unsetCustom_label_4()
{
    m_Custom_label_4IsSet = false;
}
utility::string_t CatalogsUpdatableHotelAttributes::getCategory() const
{
    return m_Category;
}

void CatalogsUpdatableHotelAttributes::setCategory(const utility::string_t& value)
{
    m_Category = value;
    m_CategoryIsSet = true;
}

bool CatalogsUpdatableHotelAttributes::categoryIsSet() const
{
    return m_CategoryIsSet;
}

void CatalogsUpdatableHotelAttributes::unsetCategory()
{
    m_CategoryIsSet = false;
}
utility::string_t CatalogsUpdatableHotelAttributes::getBasePrice() const
{
    return m_Base_price;
}

void CatalogsUpdatableHotelAttributes::setBasePrice(const utility::string_t& value)
{
    m_Base_price = value;
    m_Base_priceIsSet = true;
}

bool CatalogsUpdatableHotelAttributes::basePriceIsSet() const
{
    return m_Base_priceIsSet;
}

void CatalogsUpdatableHotelAttributes::unsetBase_price()
{
    m_Base_priceIsSet = false;
}
utility::string_t CatalogsUpdatableHotelAttributes::getSalePrice() const
{
    return m_Sale_price;
}

void CatalogsUpdatableHotelAttributes::setSalePrice(const utility::string_t& value)
{
    m_Sale_price = value;
    m_Sale_priceIsSet = true;
}

bool CatalogsUpdatableHotelAttributes::salePriceIsSet() const
{
    return m_Sale_priceIsSet;
}

void CatalogsUpdatableHotelAttributes::unsetSale_price()
{
    m_Sale_priceIsSet = false;
}
std::shared_ptr<CatalogsHotelGuestRatings> CatalogsUpdatableHotelAttributes::getGuestRatings() const
{
    return m_Guest_ratings;
}

void CatalogsUpdatableHotelAttributes::setGuestRatings(const std::shared_ptr<CatalogsHotelGuestRatings>& value)
{
    m_Guest_ratings = value;
    m_Guest_ratingsIsSet = true;
}

bool CatalogsUpdatableHotelAttributes::guestRatingsIsSet() const
{
    return m_Guest_ratingsIsSet;
}

void CatalogsUpdatableHotelAttributes::unsetGuest_ratings()
{
    m_Guest_ratingsIsSet = false;
}
}
}
}
}


